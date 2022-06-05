#include <iostream>
#include <string>
using namespace std;
#include "sudoku_LV1.h"

/*void setSudoListCoordinate(sudoku_LV1& sudo_list[][4], int x, int y, int element) {
	sudo_list[x][y] = element;
}*/

int main() {
	cout << "Welcome to play Sudoku." << endl;
	cout << "Are you ready to play the LV.1 sudoku ? [enter 1 (yes) or 0 (no)]" << endl;
	int ans1;//player's answer
	cin >> ans1;
	cout << endl;

	//check what player is thinking
	if (ans1 == 0) {
		cout << "See you next time ~" << endl;
		return 0;
	}
	else {
		sudoku_LV1::printRules();

		//string sudo_list[4][4] = { {2,-1,1,-1},{3,-1,2,-1},{-1,2,-1,1},{-1,3,-1,2} };
		sudoku_LV1 sudo_list[4][4];

		sudo_list[0][0].setElement(2);
		sudo_list[0][1].setElement(-1);
		sudo_list[0][2].setElement(1);
		sudo_list[0][3].setElement(-1);
		sudo_list[1][0].setElement(3);
		sudo_list[1][1].setElement(-1);
		sudo_list[1][2].setElement(2);
		sudo_list[1][3].setElement(-1);
		sudo_list[2][0].setElement(-1);
		sudo_list[2][1].setElement(2);
		sudo_list[2][2].setElement(-1);
		sudo_list[2][3].setElement(1);
		sudo_list[3][0].setElement(-1);
		sudo_list[3][1].setElement(3);
		sudo_list[3][2].setElement(-1);
		sudo_list[3][3].setElement(2);

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (sudo_list[i][j].getElement() == -1)
					cout << " ? ";
				else
					cout << " " << sudo_list[i][j].getElement() << " ";
			}
			cout << endl;
		}
		sudo_list[4][4].setPlayerEnterNumber(1,1,1);

		//setSudoListCoordinate(sudo_list, 1, 1, 1);

	}
	//cout << "Please abide by the following rules." << endl;
	//cout << "rule 1- Each row and column must contain the numbers from 1 to 9, without repetitions." << endl;
	//cout << "rule 2- The digits can only occur once per block." << endl;
	//cout << "rule 3- the sum of every single row and column  must equal 45."

}