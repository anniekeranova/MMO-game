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
#include <string>
#include "login.h"
#include "main_menu.h"

using namespace std;

void login() {
	string input_name, input_password;
	fstream users;
	users.open("users.txt");
	cout << endl << "| Login |" << endl;
	cout << "username: ";
	cin >> input_name;
	cout << "password: ";
	cin >> input_password;
	string line;
	string check = input_name + ":" + input_password;
	while (getline(users, line)) {
		if (check == line) {
			system("CLS");
			menu();
		}
	}
	users.close();
}