#include"SapXep.h"

void KhungSX()
{
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua chon sap xep___________";
	textcolor(11);
	gotoxy(85, 2);	cout << "---ESC de quay lai---";
	int a = 5;
	for (int i = 0; i < 39; i++)
	{
		gotoxy(i + 28, a);
		cout << (char)205;
	}
	gotoxy(27, 5);	cout << (char)201;
	gotoxy(67, 5);	cout << (char)187;
	while (a < 9)
	{
		for (int i = 0; i < 39; i++)
		{
			gotoxy(i + 28, a + 2);
			cout << "-";
		}
		a++;
		gotoxy(27, a);
		cout << (char)186;
		gotoxy(27, a + 1);
		cout << (char)186;
		gotoxy(67, a);
		cout << (char)186;
		gotoxy(67, a + 1);
		cout << (char)186;
		a++;
	}
	gotoxy(27, 10);	cout << (char)186;
	gotoxy(67, 10);	cout << (char)186;
	gotoxy(27, 11);	cout << (char)200;
	gotoxy(67, 11);	cout << (char)188;
	for (int i = 0; i < 39; i++)
	{
		gotoxy(i + 28, 11);
		cout << (char)205;
	}
}
void menuKieuSX(int luaChon)
{
	//system("cls");
	KhungSX();
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(40, a + 2);
	cout << "1.Sap xep chon";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(40, a + 4);
	cout << "2.Sap xep chen";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(40, a + 6);
	cout << "3.Sap xep nhanh";
	system("PAUSE");
}