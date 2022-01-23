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
#include "main_menu.h"

using namespace std;

void menu() {
	char enter;
	cout << "You are level " << "." << "Choose one of the following options." << endl;
	cout << " | C - close account      " << endl;
	cout << " | D - duel               " << endl;
	cout << " | F - find               " << endl;
	cout << " | L - logout             " << endl;
	cout << " | S - suggest            " << endl;
	cout << endl;
	cout << "Enter here: ";
	cin >> enter;

	if (enter == 'C') {
		system("CLS");
		
	}
	else if (enter == 'D') {
		system("CLS");
		
	}
	else if (enter == 'F') {
		system("CLS");
		
	}
	else if (enter == 'L') {
		system("CLS");

	}
	else if (enter == 'S') {
		system("CLS");

	}
	else {
		cout << "! ! ! Enter valid option given above" << endl;
	}
}