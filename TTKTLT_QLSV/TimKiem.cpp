#include"TimKiem.h"
void menuTimKiem(int LuaChon)
{
	textcolor(14);
	gotoxy(37, 3);
	cout << "___________Lua_Chon_Tim_Kiem__________" << endl;
	textcolor(11);
	gotoxy(85, 3);
	cout << "---ESC quay lai---";
	int a = 6;
	int b = a + 1;
	textcolor(11);
	for (int i = 0; i < 31; i++)
	{
		gotoxy(41 + i, 6);
		cout << (char)205;
	}
	gotoxy(40, 6);	cout << (char)201;
	gotoxy(72, 6);	cout << (char)187;
	//for(int i=0; i<1; i++) 

	for (int j = 0; j < 31; j++) {
		gotoxy(41 + j, a + 2);
		cout << "-";
	}
	a++;
	gotoxy(40, a);
	cout << (char)186;
	gotoxy(40, a + 1);
	cout << (char)186;
	gotoxy(72, a);
	cout << (char)186;
	gotoxy(72, a + 1);
	cout << (char)186;
	a++;

	gotoxy(40, 9);	cout << (char)186;
	gotoxy(72, 9);	cout << (char)186;
	for (int i = 0; i < 31; i++)
	{
		gotoxy(41 + i, 10);
		cout << (char)205;
	}
	gotoxy(40, 10);	cout << (char)200;
	gotoxy(72, 10);	cout << (char)188;
	if (LuaChon == 1) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(45, 7);
	cout << "1. Tim kiem tuan tu";
	gotoxy(45, 9);
	if (LuaChon == 2) {
		textcolor(12);
	}
	else
		textcolor(11);
	cout << "2. Tim kiem nhi phan";
	system("pause");
}