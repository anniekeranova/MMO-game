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
* <main file>
*
**/

#include <iostream>
#include <fstream>
#include "login.h"
#include "registration.h"
#include "quit.h"
#include "main_menu.h"

using namespace std;

int main() {
	char start;
	cout << "**************************************************\n";
	cout << "                   MMO GAME                 \n\n";
	cout << " | Press L to login             " << endl;
	cout << " | Press R to registrate        " << endl;
	cout << " | Press Q to quit              " << endl;
	cout << endl;
	cout << "Enter here: ";
	cin >> start;

	if (start == 'L') {
		system("CLS");
		login();
		
	}
	else if (start == 'R') {
		system("CLS");
		reg();
		
	}
	else if (start == 'Q') {
		system("CLS");
		quit();
	}
	else {
		cout << "! ! ! Enter valid option given above" << endl;
	}
	
	
}


