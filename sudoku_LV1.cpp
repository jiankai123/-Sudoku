#include "sudoku_LV1.h"
#include <iostream>
using namespace std;

sudoku_LV1::sudoku_LV1() {

}
sudoku_LV1::sudoku_LV1(int) {

}
void sudoku_LV1::setElement(int newElement) {
	element = newElement;
}
int sudoku_LV1::getElement() {
	return element;
}
void sudoku_LV1::setSudoList(int) {
	//sudo_List sudoku_LV1::setSudoList();
}
void sudoku_LV1::print() {
	/*sodu_list = {{2,-1,1,-1},{3,-1,2,-1},{-1,2,-1,1},{-1,3,-1,2}};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << sudo_list[i][j];
		}
	}*/
}
void sudoku_LV1::printRules() {
	cout << "Please abide by the following rules." << endl;
	cout << "rule 1- Each row and column must contain the numbers from 1 to 4, without repetitions." << endl;
	cout << "rule 2- The digits can only occur once per block." << endl;
	cout << "rule 3- The sum of every single row and column  must equal 10." << endl;
	cout << "rule 4- When you want to change the sudoku's number. Please enter (x,y,number)" << endl;
	cout << endl;
}