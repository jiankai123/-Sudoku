#include <iostream>
#include <string>
using namespace std;
#include "Sudoku.h"
#include "print.h"

int main() {
	print::Print();
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
		if (Data.getElement() != 0) {
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
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int a[9][9];
	int i1,j1,isUse;
	int row = 9, col = 9;
	int startRow = row - row % 3, startCol = col - col % 3;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			do {
			isUse = 0;
			a [i][j] = rand() % 10;

			for (int i2 = 0; i2 < 3; i2++)
			{
				for (int j2 = 0; j2 < 3; j2++)
				{
					if (a[i + startRow][j + startCol] == a[i2][j2])
					{
						isUse = 1;
						break;
					}
				}
				break;
			}


			} while (isUse==1);
			cout << a[i][j] << " " ;
		}
		cout << endl;
	}

}*/

/*
int N=9;
bool isSafe(int grid[N][N], int row, int col, int num)
{

	for (int x = 0; x < 4; x++)
		if (grid[row][x] == num)
			return false;

	for (int i = 0; i < 4; i++)
		if (grid[i][col] == num)
			return false;

	int startRow = row - row % 3, startCol = col - col % 3;

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

			if (grid[i + startRow][j + startCol] == num)
				return false;
	
	return true;
}*/