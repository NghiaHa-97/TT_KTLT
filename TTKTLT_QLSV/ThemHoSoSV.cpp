#include"ThemHoSoSV.h"
void menuThemHoSo(int Chon)
{
	
	textcolor(14);
	gotoxy(40, 2);	cout << "Nhap thong tin sinh vien";
	textcolor(11);
	gotoxy(25, 5);
	for (int j = 0; j < 55; j++)
	{
		cout << (char)205;
	}
	gotoxy(24, 5);	cout << (char)201;
	gotoxy(80, 5);	cout << (char)187;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			gotoxy(25 + j, 2 * (i + 3) + 1);
			cout << "-";
		}
		gotoxy(24, 2 * i + 6);
		cout << (char)186;
		gotoxy(24, 2 * i + 7);
		cout << (char)186;
		gotoxy(42, 2 * i + 6);
		cout << "|";
		gotoxy(80, 2 * i + 6);
		cout << (char)186;
		gotoxy(80, 2 * i + 7);
		cout << (char)186;
	}
	gotoxy(42, 14);	cout << "|";
	gotoxy(24, 15);	cout << (char)200;
	gotoxy(80, 15);	cout << (char)188;
	gotoxy(24, 14);	cout << (char)186;
	gotoxy(80, 14);	cout << (char)186;
	gotoxy(25, 15);
	for (int j = 0; j < 55; j++)
	{
		cout << (char)205;
	}

	if (Chon == 1) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(27, 6);
	cout << "Ho Va Ten";
	if (Chon == 2) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(27, 8);
	cout << "Ma Sinh Vien";
	if (Chon == 3) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(27, 10);
	cout << "Ma Lop";
	if (Chon == 4) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(27, 12);
	cout << "Ngay Sinh";
	textcolor(11);
	gotoxy(48, 12);
	cout << "/";
	gotoxy(52, 12);
	cout << "/";
	if (Chon == 5) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(27, 14);
	cout << "Diem TB";
	if (Chon == 6) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(45, 17);
	cout << "_Luu thong tin_ ";
	gotoxy(48, 18);
	if (Chon == 7) {
		textcolor(12);
	}
	else
		textcolor(11);
	cout << "_Quay Lai_";
	textcolor(11);

	system("PAUSE");
}