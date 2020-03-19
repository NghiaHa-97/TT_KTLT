#include"InDanhSach.h"
void keKhungInDanhSach() {
	gotoxy(90, 2);
	textcolor(11);
	cout << "---ESC quay lai---";
	gotoxy(85, 3);	cout << "---Enter de sua thong tin---";
	gotoxy(36, 2);
	textcolor(14);
	cout << "_______Danh sach sinh vien_______\t\t    ";
	gotoxy(13, 3);
	textcolor(11);
	//cout << "Co " << SoSinhVien << " sinh vien.";
	int a = 5;

	for (int k = 0; k < 2; k++)
	{
		gotoxy(13, 6);
		cout << (char)186;
		gotoxy(13, 7);
		cout << (char)186;
		gotoxy(13, 5); cout << (char)201;
		gotoxy(90, 5); cout << (char)187;
		gotoxy(13, a);
		for (int i = 0; i < 78; i++)
		{
			cout << (char)205;
		}
		gotoxy(13, 6);
		cout << (char)186;
		gotoxy(13, 7);
		cout << (char)186;
		gotoxy(90, 6);
		cout << (char)186;
		gotoxy(90, 7);
		cout << (char)186;
		a++;
		gotoxy(13, a);
		cout << (char)186;
		gotoxy(19, a);
		cout << "|";
		gotoxy(40, a);
		cout << "|";
		gotoxy(50, a);
		cout << "|";
		gotoxy(65, a);
		cout << "|";
		gotoxy(80, a);
		cout << "|";
		gotoxy(90, a);
		cout << (char)186;
		a++;
	}
	a = 9;
	for (int k = 0; k <= 8; k++)
	{
		gotoxy(14, a);
		for (int i = 0; i < 76; i++)
		{

			cout << "-";
		}
		a++;
		gotoxy(13, a - 1);
		cout << (char)186;
		gotoxy(13, a);
		cout << (char)186;
		gotoxy(19, a);
		cout << "|";
		gotoxy(40, a);
		cout << "|";
		gotoxy(50, a);
		cout << "|";
		gotoxy(65, a);
		cout << "|";
		gotoxy(80, a);
		cout << "|";
		gotoxy(90, a - 1);
		cout << (char)186;
		gotoxy(90, a);
		cout << (char)186;
		a++;

	}
	gotoxy(13, 27);	cout << (char)200;
	gotoxy(90, 27);	cout << (char)188;
	gotoxy(14, 27);
	for (int i = 0; i < 76; i++)
	{

		cout << (char)205;
	}

	gotoxy(15, 6);
	textcolor(12);
	cout << "STT";
	gotoxy(25, 6);
	cout << "Ho Va Ten";
	gotoxy(43, 6);
	cout << "Ma Lop";
	gotoxy(56, 6);
	cout << "Ma SV";
	gotoxy(69, 6);
	cout << "Ngay Sinh";
	gotoxy(82, 6);
	cout << "Diem TB";
	textcolor(11);
	system("PAUSE");
}