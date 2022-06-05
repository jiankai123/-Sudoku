#include <iostream>
#include <string>
using namespace std;
#include "sudoku_LV1.h"

int main() {
	cout << "Welcome to play Sudoku." << endl;
	cout << "Are you ready to play the LV.1 sudoku ? [enter 1 (yes) or 0 (no)]" << endl;
	int ans1;
	cin >> ans1;
	cout << endl;

	//check what player is thinking
	if (ans1 == 0) {
		cout << "See you next time ~" << endl;
		return 0;
	}
	else {
		sudoku_LV1::printRules();

		//string sudo_list[4][4] = { {"2","-1","1","-1"},{"3", "-1","2","-1"},{"-1","2","-1","1"},{"-1","3","-1","2"} };
		sudoku_LV1 sudo_list[16] = {};

		sudo_list[0].setElement(2);
		sudo_list[1].setElement(-1);
		sudo_list[2].setElement(1);
		sudo_list[3].setElement(-1);
		sudo_list[4].setElement(3);
		sudo_list[5].setElement(-1);
		sudo_list[6].setElement(2);
		sudo_list[7].setElement(-1);
		sudo_list[8].setElement(-1);
		sudo_list[9].setElement(2);
		sudo_list[10].setElement(-1);
		sudo_list[11].setElement(1);
		sudo_list[12].setElement(-1);
		sudo_list[13].setElement(3);
		sudo_list[14].setElement(-1);
		sudo_list[15].setElement(2);

		for (int i = 0; i <= 15; i++) {
			if (i % 4 == 0 && i != 0)
				cout << endl;
			 if (sudo_list[i].getElement() == -1) 
				cout << " ? ";
			else 
				cout << " " << sudo_list[i].getElement() << " ";
		}




		/*for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (sudo_list[i][j] == "-1")
					cout << "  ";
				else
					cout << " " << sudo_list[i][j] << " ";
			}
			cout << endl;
		}*/
	}
	//cout << "Please abide by the following rules." << endl;
	//cout << "rule 1- Each row and column must contain the numbers from 1 to 9, without repetitions." << endl;
	//cout << "rule 2- The digits can only occur once per block." << endl;
	//cout << "rule 3- the sum of every single row and column  must equal 45."

}