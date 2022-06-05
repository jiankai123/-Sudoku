#include "sudoku_LV1.h"
#include <iostream>
using namespace std;

/*sudoku_LV1::sudoku_LV1() {
	element = 0;
}
sudoku_LV1::sudoku_LV1(int newElement) {
	element = newElement;
}*/
void sudoku_LV1::setElement(int newElement) {
	element = newElement;
}
int sudoku_LV1::getElement() {
	return element;
}
void setPlayerEnterNumber(int newX, int newY, int newElement) {

}

void sudoku_LV1::printRules() {
	cout << "Please abide by the following rules." << endl;
	cout << "rule 1- Each row and column must contain the numbers from 1 to 4, without repetitions." << endl;
	cout << "rule 2- The digits can only occur once per block." << endl;
	cout << "rule 3- The sum of every single row and column  must equal 10." << endl;
	cout << "rule 4- When you want to change the sudoku's number. Please enter x(row),y(column),number" << endl;
	cout << endl;
}
/*void sudoku_LV1::setSudoList() {
	sudoList[0] = 0;
	sudoList[1] = -1;
	sudoList[2] = 1;
	sudoList[3] = -1;
	sudoList[4] = 3;
	sudoList[5] = -1;
	sudoList[6] = 2;
	sudoList[7] = -1;
	sudoList[8] = -1;
	sudoList[9] = 2;
	sudoList[10] = -1;
	sudoList[11] = 1;
	sudoList[12] = -1;
	sudoList[13] = 3;
	sudoList[14] = -1;
	sudoList[15] = 2;
}*/
/*int sudoku_LV1::getSudoList() {
	return sudoList[16];
}*/
/*void sudoku_LV1::printSudoList() {
	for (int i = 0; i < 15; i++) {
		if (i % 4 == 0 || i != 0)
			cout << endl;
		else if (sudoList[i] == -1)
			cout << "  ";
		else
			cout << " " << sudoList[i] << " ";
	}*/
	/*sodu_list = {{2,-1,1,-1},{3,-1,2,-1},{-1,2,-1,1},{-1,3,-1,2}};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << sudo_list[i][j];
		}
	}
}*/