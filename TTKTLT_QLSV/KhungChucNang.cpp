#include"KhungChucNang.h"
#include"ThemHoSoSV.h"
#include"InDanhSach.h"
#include"SapXep.h"
#include"TimKiem.h"
#include"ThongKe.h"
void chonChucNang(int LuaChon) {
	fflush(stdin);
	textcolor(11);
	menuStart(LuaChon);
	while (1) {
		char phim = _getch();
		//cout<<"Phim dang an"<<key;
		switch (phim) {
			//Phim len=72, xuongg 80, trai 75, phai 77, enter 13
		case 72:
			fflush(stdin);
			LuaChon--;
			if (LuaChon <= 0)
				LuaChon = 6;
			break;
		case 80:
			fflush(stdin);
			LuaChon++;
			if (LuaChon >= 7)
				LuaChon = 1;
			break;
		case 13: 
			switch (LuaChon) {
				case 1:
					xoaManHinh();
					menuThemHoSo(1);
					break;
				case 2:
					xoaManHinh();
					keKhungInDanhSach();
					break;
				case 3:
					xoaManHinh();
					menuKieuSX(1);
					break;
				case 4:
					xoaManHinh();
					menuTimKiem(1);
					break;
				case 5:
					xoaManHinh();
					menuThongKe(1);
					break;
				case 6:
					exit(0);
					break;
				
			}
			break;
		}
		
		menuStart(LuaChon);
	}
}

void menuStart(int LuaChon) {
	resizeConsole(1200, 650);
	textcolor(2);
	gotoxy(31, 2);	cout << "===================================================";
	gotoxy(31, 3);	cout << "||                Quan Ly Sinh Vien              ||";
	gotoxy(31, 4);	cout << "===================================================";
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
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 31; j++) {
			gotoxy(41 + j, a + 2);
			cout << "-";
		}
		a++;
		if (i != 7) {
			gotoxy(40, a);
			cout << (char)186;
			gotoxy(40, a + 1);
			cout << (char)186;
			gotoxy(72, a);
			cout << (char)186;
			gotoxy(72, a + 1);
			cout << (char)186;
		}
		a++;
	}
	gotoxy(40, 17);	cout << (char)186;
	gotoxy(72, 17);	cout << (char)186;
	for (int i = 0; i < 31; i++)
	{
		gotoxy(41 + i, 18);
		cout << (char)205;
	}
	gotoxy(40, 18);	cout << (char)200;
	gotoxy(72, 18);	cout << (char)188;
	if (LuaChon == 1) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(50, 7);
	cout << "1. Them ho so\n";
	gotoxy(50, 9);
	if (LuaChon == 2) {
		textcolor(12);
	}
	else
		textcolor(11);
	cout << "2. In danh sach\n";
	gotoxy(50, 11);
	if (LuaChon == 3) {
		textcolor(12);
	}
	else
		textcolor(11);
	cout << "3. Sap xep\n";
	if (LuaChon == 4) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(50, 13);
	cout << "4. Tim kiem\n";
	if (LuaChon == 5) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(50, 15);
	cout << "5. Thong ke\n";
	gotoxy(50, 19);
	if (LuaChon == 6) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(50, 17);
	cout << "6. Thoat\n";
	


}