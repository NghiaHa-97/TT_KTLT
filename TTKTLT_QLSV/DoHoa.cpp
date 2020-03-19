#include"DoHoa.h"
// Hàm thay đổi kích cỡ của khung cmd với tham số truyền vào là chiều cao, chiều rộng.
void resizeConsole(int width, int height)
{
	//HWND console = GetConsoleWindow();
	//RECT r;
	//GetWindowRect(console, &r);
	//MoveWindow(console, 0, 0, width, height, TRUE);

	HWND wh = GetConsoleWindow();
	MoveWindow(wh, 0, 0, width, height, TRUE);
}

// Hàm tô màu.
void textcolor(int x)
{
	HANDLE mau= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

// Hàm dịch chuyển con trỏ đến tọa độ x, y.
void gotoxy(int x, int y)
{
	/*HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x - 1,y - 1 };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);*/

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	_COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(hConsole, pos);
}
// Hàm xóa màn hình.
void xoaManHinh()
{
	
	system("CLS");
}