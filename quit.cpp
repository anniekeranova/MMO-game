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
#include "quit.h"

using namespace std;

bool valid(int n) {
	return 0 <= n && n <= 1;
}

void quit() {
	cout << "Are you sure you want to quit playing?" << endl;
	cout << "0. Yes" << endl << "1. No" << endl;
	int choice;
	cin >> choice;
	while (!valid(choice)) {
		cout << "Please, enter 0 or 1!" << " ";
		cin >> choice;
	}
	switch (choice) {
	case 0:
		exit(EXIT_FAILURE);
	case 1:
		system("CLS");
		main();
	}
}