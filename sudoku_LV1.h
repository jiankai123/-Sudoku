#ifndef sudoku_LV1_h
#define sudoku_LV1_h
#include <string>
using namespace std;

class sudoku_LV1{
public:
	sudoku_LV1();
	sudoku_LV1(int,int,int);
	void setElement(int);
	int getElement();
	static void printRules();
	void setPlayerEnterNumber(int,int,int);
	void setX(int);
	int getX();
	void setY(int);
	int getY();
	//void setSudoList();
	//int getSudoList();
	//static void printSudoList();
private:
	//static int sudoList[16];
	int element;
	int x;//row
	int y;//column
	
};
#endif // !sudoku_LV1 
