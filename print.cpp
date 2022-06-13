#include "print.h"
#include "Sudoku.h"
#include <iostream>
using namespace std;

void print::Print() {
	cout << "Welcome to play Sudoku." << endl;
	cout << "Are you ready to play sudoku ? [enter 1 (yes) or 0 (no)]" << endl;
}
void print::printRules() {
	cout << "Please abide by the following rules." << endl;
	cout << "rule 1- Each row and column must contain the numbers from 1 to 4, without repetitions." << endl;
	cout << "rule 2- The digits can only occur once per block." << endl;
	cout << "rule 3- The sum of every single row and column  must equal 10." << endl;
	cout << "rule 4- When you want to change the sudoku's number. Please enter x,y,number" << endl;
	cout << "rule 5- Enter number 0 to exit game." << endl;
	cout << endl;
}
void print::printSudoku() {
	int list[4][4] = { {2,-1,1,-1},{3,-1,2,-1},{-1,2,-1,1},{-1,3,-1,2} };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (list[i][j] == -1)
				cout << " ? ";
			else
				cout << " " << list[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void print::printXYrule() {
	cout << "x from left to right is 1,2,3,4" << endl;
	cout << "y from top to bottom is 1,2,3,4" << endl;
	cout << endl;
}
/*void setList(int newList[][4]) {
	list[][4] = newList;
}
int getList() {
	return list[][4];
}*/