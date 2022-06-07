#ifndef Sudoku_h
#define Sudoku_h
class Sudoku{
public:
	Sudoku();
	Sudoku(int,int,int);
	void setX(int);
	int getX();
	void setY(int);
	int getY();
	void setElement(int);
	int getElement();
	//int check();
private:
	//static int sudoList[][4];
	//int getSudolist();
	int x;
	int y;
	int element;
};
#endif