#include "Sudoku.h"
//int Sudoku::sudoList[][4] = { {2,-1,1,-1},{3,-1,2,-1},{-1,2,-1,1},{-1,3,-1,2} };

Sudoku::Sudoku() {
	x = 0;
	y = 0;
	element = 1;
}
Sudoku::Sudoku(int newX, int newY,int newElement) {
	x = newX;
	y = newY;
	element = newElement;
}
void Sudoku::setX(int newX) {
	x = newX;
}
int Sudoku::getX() {
	return x;
}
void Sudoku::setY(int newY) {
	y = newY;
}
int Sudoku::getY() {
	return y;
}
void Sudoku::setElement(int newElement) {
	element = newElement;
}
int Sudoku::getElement() {
	return element;
}
/*int Sudoku::getSudolist() {
	return sudoList[4][4];
}*/