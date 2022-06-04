#ifndef sudoku_LV1_h
#define sudoku_LV1_h
#include <string>
using namespace std;

class sudoku_LV1{
public:
	sudoku_LV1();
	sudoku_LV1(int);
	void setElement(int);
	int getElement();
	void setSudoList(int);
	void print();
	void printRules();
private:
	int element;
	
};
#endif // !sudoku_LV1 
