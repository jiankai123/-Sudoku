#include <iostream>
#include <string>
using namespace std;
#include "Sudoku.h"
#include "print.h"

int main() {
	cout << "Welcome to play Sudoku." << endl;
	cout << "Are you ready to play sudoku ? [enter 1 (yes) or 0 (no)]" << endl;
	int ans1;//player's answer
	cin >> ans1;
	cout << endl;

	//check what player is thinking
	if (ans1 == 0) {
		cout << "See you next time ~" << endl;
		return 0;
	}
	else {
		print::printRules();
		print::printXYrule();
		print::printSudoku();
	}

	Sudoku Data;//store x,y,number
	int sudoList[][4] = { {2,-1,1,-1},{3,-1,2,-1},{-1,2,-1,1},{-1,3,-1,2} };
	while (Data.getElement() != 0) {
		int x, y, number;//declare for what player enters
		cout << "Enter: ";
		cin >> x >> y >> number;
		cout << endl;
		Data.setX(x);
		Data.setY(y);
		Data.setElement(number);
		//int x1, y1;
		//x1 = Data.getX() - 1;
		//y1 = Data.getY() - 1;
		if(Data.getElement() != 0)
			sudoList[Data.getY() - 1][Data.getX() - 1] = Data.getElement();

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (sudoList[i][j] == -1)
					cout << " ? ";
				else
					cout << " " << sudoList[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	//check enswer
	int error = 0;
	for (int i = 0; i < 4; i += 2) {
		for (int j = 0; j < 4; j += 2) {
			int total = 0;
			for (int a = i; a < a + 2; a++) {
				for (int b = j; b < j + 2; b++) {
					total += sudoList[a][b];
					if (total != 10) error++;
				}
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		int total = 0;
		for (int j = 0; j < 4; j++) {
			total += sudoList[i][j];
			if (total != 10) error++;
		}
	}
	for (int i = 0; i < 4; i++) {
		int total = 0;
		for (int j = 0; j < 4; j++) {
			total += sudoList[j][i];
			if (total != 10) error++;
		}
	}

	if (error != 0) {
		cout << "Yor got the wrong answer" << endl;
	}
	else {
		cout << "Congratulaions ~" << endl;
	}
}