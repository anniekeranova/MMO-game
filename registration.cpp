/**
*
* Solution to course project # 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Anelia Keranova
* @idnumber 7MI0600055
* @compiler vc
*
* <file with helper functions>
*
**/
#include <iostream>
#include <fstream>
#include <cstring>
#include "registration.h"
#include "main_menu.h"

using namespace std;

//username
void check_user(string name) {
	if (name.length() >= 5) {
		for (int i = 0; name[i] != '\0'; i++) {
			if (isdigit(name[i])) {
				continue;
			}
			else if (isalpha(name[i])) {
				continue;
			}
			else {
				cout << "Error";
				break;
			}
		}
	}
	else {
		cout << "Error";
		
	}
	
}



//password
bool is_symbol(char ch) {
	if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch >= '&' || ch <= '*') {
		return true;
	}
	return false;
}
void check_pass(string password) {
	bool hasLower = false, hasUpper = false, hasDigit = false, hasSymbol = false;
	int n = password.length();
	for (int i = 0; i < n; i++) {
		if (islower(password[i]))
			hasLower = true;
		if (isupper(password[i]))
			hasUpper = true;
		if (isdigit(password[i]))
			hasDigit = true;
		if (is_symbol(password[i]))
			hasSymbol = true;
		}

	if ((password.length() >= 5) && (hasLower == true) && (hasUpper == true) && (hasDigit == true) && (hasSymbol == true)) {
		system("CLS");
		menu();
	}
	else {
		cout << "Error";
	}

}

void reg() {

	string reg_name, reg_password;
	fstream users;
	users.open("users.txt", fstream::out | fstream::app);
	cout << endl << "| Register |" << endl;
	cout << "username: ";
	cin >> reg_name;
	check_user(reg_name);
	users << reg_name << ":";

	cout << endl << "password: ";
	cin >> reg_password;
	check_pass(reg_password);
	users << reg_password << endl;
	users.close();
}