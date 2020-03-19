#include<iostream>
#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include"dohoa.h"

using namespace std;


char FName[] = "filedata.txt";

struct Date {
	int Ngay, Thang, Nam;
};

struct SinhVien {
	char HoVaTen[50];
	char MaLop[20];
	int MaSinhVien;
	Date date;
	float DiemTB;
};

SinhVien sinhVien[1000];
SinhVien sv;
int SoSinhVien;

void HienThiMenu(int LuaChon);
void menu1(int LuaChon);
void ThemHoSo();
void ThongKe();
void SapXep(int luaChon);
void TimKiem(int LuaChon);
void InDanhSach();
void HienThiThemHoSo(SinhVien sv);
void InThongTinSinhVien(SinhVien sv, int k, int x);
int DocFile();
void ChuanHoaTen(char s[50]);
void ChuanHoaLop(char s[10]);
void menuThemHoSo(int Chon);
void KeInDanhSach();
void menuSapXepChon(int luaChon);
void menuSapXepChen(int luaChon);
void menuSapXepNhanh(int luaChon);
void SapXepTenChon();
void SapXepTenChen();
void SapXepTenNhanh(int l, int r);
void SapXepMSVChon();
void SapXepMSVChen();
void SapXepMSVNhanh(int l, int r);
void SapXepNSChon();
void SapXepNSChen();
void SapXepNSNhanh(int l, int r);
void SapXepDiemChon();
void SapXepDiemChen();
void SapXepDiemNhanh(int l, int r);
void KhungSX();
void KhungSX2();
void menuKieuSX(int luaChon);
void TachTen(char tenSV[], char ten[]);
int KtraTen(char tenSV[], char ten1[]);
void MenuTimKiem(int LuaChon);
void TimKiemTT(int luaChon);
void TimKiemTenTT();
void TimKiemLopTT();
void TimKiemMSVTT();
void TimKiemDiemTT();
void TimKiemNSTT();
void TimKiemNP(int luaChon);
void TimKiemTenNP();
void TimKiemLopNP();
void TimKiemMSVNP();
void TimKiemDiemNP();
void TimKiemNSNP();
void GhiFile();
void GhiFile1();
void Sua();

//---------------------------------------------------------------------------------------------------

int main()
{
	SetWindow(115, 35);
	DocFile();
	HienThiMenu(1);

}

//---------------------------------------------------------------------------------------------------

void ChuanHoaTen(char s[50])
{
	int i, j;
	while (s[0] == ' ')
		for (i = 0; i < strlen(s); i++)
		{
			s[i] = s[i + 1];
		}
	i = 0;
	while (i < strlen(s))
	{
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			for (j = i; j < strlen(s); j++)
			{
				s[j] = s[j + 1];
			}
			i--;
		}
		i++;
	}
	while (s[strlen(s) - 1] == ' ') s[strlen(s) - 1] = '\0';
	strlwr(s);
	s[0] = toupper(s[0]);
	for (i = 0; i < strlen(s); i++)
		if (s[i] == ' ')	s[i + 1] = toupper(s[i + 1]);
}

//----------------------------------------------------------------------------------

void ChuanHoaLop(char s[10])
{
	int i = 0, j;
	while (i < strlen(s))
	{
		if (s[i] == ' ')
		{
			for (j = i; j < strlen(s); j++)
			{
				s[j] = s[j + 1];
			}
			i--;
		}
		i++;
	}
	for (i = 0; i < strlen(s); i++)	s[i] = toupper(s[i]);
}

//----------------------------------------------------------------------------------

void menu1(int LuaChon) {	//Khung chuong trinh

	textcolor(14);
	gotoxy(31, 2);	cout << "/================================================\\";
	gotoxy(31, 3);	cout << "|                Quan_Ly_Sinh_Vien               |";
	gotoxy(31, 4);	cout << "\\================================================/";
	textcolor(11);
	//	gotoxy(10,22);	cout<<"Ho ten sinh vien: Phan Van Thong";
	//	gotoxy(10,23);	cout<<"Ma sinh vien: 16150213";
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
	XoaConTro();
}

//---------------------------------------------------------------------------------------------------

void HienThiMenu(int LuaChon) {		//Lua chon menu
	//system("cls");
	fflush(stdin);
	textcolor(11);
	menu1(LuaChon);
	while (1) {
		char phim = getch();
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
		case 13: {
			switch (LuaChon) {
			case 1:
				system("cls");
				ThemHoSo();
				break;
			case 2:
				InDanhSach();
				break;
			case 3:
				SapXep(1);
				break;
			case 4:
				TimKiem(1);
				break;
			case 5:
				ThongKe();
				break;
			case 6:
				exit(0);
				break;
			}
		}
				 break;
		}
		menu1(LuaChon);
	}
}

//---------------------------------------------------------------------------------------------------

void HienThiThemHoSo(SinhVien sv) {
	system("cls");
	//int a=4;
	int luaChon = 1;

	fflush(stdin);
	gotoxy(25, 3);
	textcolor(14);
	cout << "Ban co muon them sinh vien co thong tin sau ";
	textcolor(11);
	gotoxy(20, 5);
	for (int i = 0; i < 55; i++)					//Ke khung
	{
		cout << (char)205;
	}
	gotoxy(19, 5);	cout << (char)201;
	gotoxy(75, 5);	cout << (char)187;
	gotoxy(18, 6);
	for (int i = 0; i < 4; i++)
	{
		gotoxy(20, i * 2 + 7);
		for (int j = 0; j < 55; j++)
		{
			cout << "-";
		}
		gotoxy(19, 2 * i + 6);
		cout << (char)186;
		gotoxy(19, 2 * i + 7);
		cout << (char)186;
		gotoxy(37, 2 * i + 6);
		cout << "|";
		gotoxy(75, 2 * i + 6);
		cout << (char)186;
		gotoxy(75, 2 * i + 7);
		cout << (char)186;

	}
	gotoxy(19, 14);	cout << (char)186;
	gotoxy(75, 14);	cout << (char)186;
	gotoxy(19, 15);	cout << (char)200;
	gotoxy(75, 15);	cout << (char)188;
	gotoxy(20, 15);
	for (int j = 0; j < 55; j++)
	{
		cout << (char)205;
	}
	gotoxy(37, 14);
	cout << "|";
	gotoxy(22, 6);
	cout << "Ho Va Ten";
	gotoxy(40, 6);
	cout << sv.HoVaTen;
	gotoxy(22, 8);
	cout << "Ma Sinh Vien";
	gotoxy(40, 8);
	cout << sv.MaSinhVien;
	gotoxy(22, 10);
	cout << "Ma Lop";
	gotoxy(40, 10);
	cout << sv.MaLop;
	gotoxy(22, 12);
	cout << "Ngay Sinh";
	gotoxy(40, 12);
	cout << sv.date.Ngay << "/" << sv.date.Thang << "/" << sv.date.Nam;
	gotoxy(22, 14);
	cout << "Diem TB";
	gotoxy(40, 14);
	cout << sv.DiemTB;

	textcolor(12);
	gotoxy(35, 17);
	cout << "Co";
	textcolor(11);
	gotoxy(45, 17);
	cout << "Khong";
	fflush(stdin);
	while (true) {
		int key = getch();
		switch (key) {
		case 75:
		case 77:
			luaChon++;
			if (luaChon >= 100) {
				luaChon = 2;
			}
			if (luaChon % 2 == 1) {
				textcolor(12);
				gotoxy(35, 17);
				cout << "Co";
				textcolor(11);
				gotoxy(45, 17);
				cout << "Khong";
			}
			else {
				textcolor(11);
				gotoxy(35, 17);
				cout << "Co";
				textcolor(12);
				gotoxy(45, 17);
				cout << "Khong";
			}
			break;
		case 13:
			if (luaChon % 2 == 1) {
				//Co
				GhiFile();
				system("cls");
				ThemHoSo();
			}
			else //khong 
			{
				system("cls");
				ThemHoSo();
			}
			break;
		}
	}

}

//---------------------------------------------------------------------------------------------------

void menuThemHoSo(int Chon)
{
	//system("cls");
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
}

//---------------------------------------------------------------------------------------------------

int KTNamNhuan()
{
	if (((sv.date.Nam % 4 == 0) && (sv.date.Nam % 100 != 0)) || sv.date.Nam % 400 == 0)	return 0;
	else return 1;
}

//---------------------------------------------------------------------------------------------------

int KTraMSV(int a)
{
	for (int i = 0; i < SoSinhVien; i++)
	{
		SinhVien sv1;
		sv1 = sinhVien[i];
		if (sv.MaSinhVien == sv1.MaSinhVien)
		{
			gotoxy(85, 8);
			cout << "Ma sinh vien trung!!!   ";
			return 0;
		}
	}
	return 1;
}

//---------------------------------------------------------------------------------------------------

void ThemHoSo()
{
	fflush(stdin);
	//	system("cls");
	int Chon = 1;
	menuThemHoSo(1);
	while (1)
	{
		//	int Chon=1;
		char phim = getch();
		switch (phim)
		{
		case 72:
			Chon--;
			if (Chon <= 0)
				Chon = 7;
			break;
		case 80:
			Chon++;
			if (Chon >= 8)
				Chon = 1;
			break;
		case 13:
		{
			switch (Chon)
			{
			case 1:
				while (1)
				{
					fflush(stdin);
					HienConTro();
					gotoxy(45, 6);
					cout << "\t\t\t\t       ";
					gotoxy(45, 6);
					cout;
					gets(sv.HoVaTen);
					ChuanHoaTen(sv.HoVaTen);
					gotoxy(45, 6);
					cout << "\t\t\t\t       ";
					gotoxy(45, 6);
					cout << sv.HoVaTen;
					XoaConTro();
					//							for(int i=0; i<strlen(sv.HoVaTen); i++)	int a=i;
					if (strlen(sv.HoVaTen) == 0)
					{
						gotoxy(85, 6);
						cout << "Nhap lai ten!!!";
					}
					else
					{
						gotoxy(85, 6);
						cout << "               ";
						Chon = 2;
						break;
					}

				}

				break;
			case 2:
				while (1)
				{
					fflush(stdin);
					char c[20];
					HienConTro();
					gotoxy(45, 8);
					cout << "\t\t\t\t       ";
					gotoxy(45, 8);
					//cout;
					//cin>>sv.MaSinhVien;
					gets(c);
					sv.MaSinhVien = atoi(c);
					XoaConTro();
					gotoxy(45, 8);
					cout << "\t\t\t\t       ";
					gotoxy(45, 8);
					cout << sv.MaSinhVien;
					int a = KTraMSV(sv.MaSinhVien);
					if (a == 0)	continue;
					if (strlen(c) == 0 || sv.MaSinhVien < 10000000 || sv.MaSinhVien>99999999)
					{
						gotoxy(85, 8);
						cout << "Nhap lai ma sinh vien!!!";
					}
					else
					{
						gotoxy(85, 8);
						cout << "                          ";
						Chon = 3;
						break;
					}
				}

				break;
			case 3:
				while (1)
				{
					fflush(stdin);
					HienConTro();
					gotoxy(45, 10);
					cout << "\t\t\t\t       ";
					gotoxy(45, 10);
					//cout;
					gets(sv.MaLop);
					ChuanHoaLop(sv.MaLop);
					gotoxy(45, 10);
					cout << "\t\t\t\t       ";
					gotoxy(45, 10);
					cout << sv.MaLop;
					XoaConTro();
					if (strlen(sv.MaLop) == 0)
					{
						gotoxy(85, 10);
						cout << "Nhap lai ma lop!!!";
					}
					else
					{
						gotoxy(85, 10);
						cout << "                  ";
						Chon = 4;
						break;
					}
				}

				break;
			case 4:
				while (1)
				{
					fflush(stdin);
					HienConTro();
					char a[10], b[10], c[10];
					//							gotoxy(85,12);
					//							cout<<"\t\t\t\t";
					gotoxy(45, 12);
					cout << "   /   /\t\t\t       ";
					gotoxy(46, 12);
					//cout;
					gets(a);
					sv.date.Ngay = atoi(a);
					if (strlen(a) == 0 || sv.date.Ngay < 1 || sv.date.Ngay>31 || sv.date.Ngay == 0)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay!!!            ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                          ";
					gotoxy(48, 12);
					cout << "/   ";
					gotoxy(50, 12);
					//cout;
					gets(b);
					sv.date.Thang = atoi(b);
					if (strlen(b) == 0 || sv.date.Thang < 1 || sv.date.Thang>12 || sv.date.Thang == 0)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang!!!      ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                          ";
					if (sv.date.Thang == 2 && sv.date.Ngay > 29)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang!!!      ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                          ";
					gotoxy(52, 12);
					cout << "/     ";
					gotoxy(54, 12);
					//cout;
					gets(c);
					sv.date.Nam = atoi(c);
					if (strlen(c) == 0 || sv.date.Nam > 2000 || sv.date.Nam == 0 || sv.date.Nam < 1990)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang nam!!!";
						continue;
					}
					gotoxy(85, 12);
					cout << "                           ";
					int v = KTNamNhuan();
					if (v = 1 && sv.date.Thang == 2 && sv.date.Ngay == 29)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang nam!!!";
						continue;
					}
					else
					{
						gotoxy(85, 12);
						cout << "                          ";
						Chon = 4;
						break;
					}


				}
				XoaConTro();
				Chon = 5;
				break;
			case 5:
				while (1)
				{
					fflush(stdin);
					char a[10];
					HienConTro();
					gotoxy(45, 14);
					cout << "\t\t\t\t       ";
					gotoxy(45, 14);
					//cout;
					gets(a);
					sv.DiemTB = atof(a);
					XoaConTro();
					if (strlen(a) == 0 || sv.DiemTB < 0 || sv.DiemTB>10)
					{
						gotoxy(85, 14);
						cout << "Nhap lai diem trung binh!!!";
					}
					else
					{
						gotoxy(85, 14);
						cout << "                           ";
						Chon = 6;
						break;
					}
				}

				break;
			case 6:
				fflush(stdin);
				HienThiThemHoSo(sv);
			case 7:
				system("cls");
				HienThiMenu(1);
			}
		}
		break;
		}
		menuThemHoSo(Chon);
	}

}

//---------------------------------------------------------------------------------------------------


void KeInDanhSach()
{
	XoaConTro();
	gotoxy(90, 2);
	textcolor(11);
	cout << "---ESC quay lai---";
	gotoxy(85, 3);	cout << "---Enter de sua thong tin---";
	gotoxy(36, 2);
	textcolor(14);
	cout << "_______Danh sach sinh vien_______\t\t    ";
	gotoxy(13, 3);
	textcolor(11);
	cout << "Co " << SoSinhVien << " sinh vien.";
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
}

//---------------------------------------------------------------------------------------------------

void InDanhSach()
{
	system("cls");
	gotoxy(90, 2);
	textcolor(11);
	cout << "---ESC quay lai---";
	gotoxy(85, 3);	cout << "---Enter de sua thong tin---";
	XoaConTro();
	gotoxy(36, 2);
	textcolor(14);
	cout << "_______Danh sach sinh vien_______";
	gotoxy(13, 3);
	textcolor(11);
	cout << "Co " << SoSinhVien << " sinh vien.";
	KeInDanhSach();
	int sotrang;
	int b = SoSinhVien % 10;
	if (b != 0)
		sotrang = SoSinhVien / 10 + 1;
	else
		sotrang = SoSinhVien / 10;
	for (int n = 0; n < 10; n++)
	{
		if (n >= SoSinhVien)	break;
		InThongTinSinhVien(sinhVien[n], 2 * (n + 4), n + 1);

	}
	int trang = 1;
	gotoxy(50, 30);
	cout << "Trang " << trang << "/" << sotrang;

	int i = 0;
	while (1)
	{
		char phim = getch();
		//cout<<"Phim dang an"<<key;
		switch (phim)
		{
			//Phim len=72, xuongg 80, trai 75, phai 77, enter 13
		case 75:
			trang--;
			i--;
			if (i < 0)	i = sotrang - 1;
			system("cls");
			KeInDanhSach();
			for (int n = i * 10; n < i * 10 + 10; n++)
			{
				if (n >= SoSinhVien)	break;
				InThongTinSinhVien(sinhVien[n], 2 * (n + 4 - 10 * i), n + 1);
			}

			if (trang < 1)	trang = sotrang;
			gotoxy(50, 30);
			cout << "Trang " << trang << "/" << sotrang;
			break;

		case 77:
			trang++;
			i++;
			if (i >= sotrang)	i = 0;
			system("cls");
			KeInDanhSach();
			for (int n = i * 10; n < i * 10 + 10; n++)
			{
				if (n >= SoSinhVien)	break;
				InThongTinSinhVien(sinhVien[n], 2 * (n + 4 - 10 * i), n + 1);
			}

			if (trang > sotrang)	trang = 1;
			gotoxy(50, 30);
			cout << "Trang " << trang << "/" << sotrang;
			break;
		case 27:
			system("cls");
			HienThiMenu(2);
			break;
		case 13:
			Sua();
			break;

		}

	}


	//	while(1) 
	//	{
	//		switch(getch()) 
	//		{
	//			case 27:
	//				system("cls");
	//				HienThiMenu();
	//				break;
	//			case 13:
	//				Sua();
	//				break;	
	//			
	//		}
	//	}
		//gotoxy(1,20);
}

//---------------------------------------------------------------------------------------------------

void InThongTinSinhVien(SinhVien sv, int k, int x) {

	textcolor(12);
	gotoxy(16, k);
	cout << x;
	textcolor(11);
	gotoxy(21, k);
	cout << sv.HoVaTen;
	gotoxy(43, k);
	cout << sv.MaLop;
	gotoxy(54, k);
	cout << sv.MaSinhVien;
	gotoxy(69, k);
	if (sv.date.Ngay < 10)		cout << "0";
	cout << sv.date.Ngay << "/";
	if (sv.date.Thang < 10)		cout << "0";
	cout << sv.date.Thang << "/" << sv.date.Nam;
	gotoxy(84, k);
	cout << sv.DiemTB;
	for (int n = 0; n < 11; n++)
	{
		if (sv.DiemTB == n)
		{
			cout << ".0";
			//	break;	
		}
	}

	if (SoSinhVien > 10)
	{
		gotoxy(65, 30);
		cout << "<<Trang truoc";
		gotoxy(80, 30);
		cout << "Trang sau>>";
	}


}

//---------------------------------------------------------------------------------------------------

void MenuTimKiem(int LuaChon)
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
}

//---------------------------------------------------------------------------------------------------

void TimKiemTT(int luaChon)
{
	//system("cls");
	KhungSX2();
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_Chon_Tim_Kiem___________";
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 2);
	cout << "1.Tim kiem ten";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 4);
	cout << "2.Tim kiem ma sinh vien";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 6);
	cout << "3.Tim kiem ngay sinh";
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 8);
	cout << "4.Tim kiem diem";
	while (1)
	{
		switch (getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 4)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 4;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				TimKiemTenTT();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(1);
						break;
					}
				}
			case 2:
				system("cls");
				TimKiemMSVTT();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(1);
						break;
					}
				}
			case 3:
				system("cls");
				TimKiemNSTT();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(1);
						break;
					}
				}
			case 4:
				system("cls");
				TimKiemDiemTT();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(1);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			TimKiem(1);
			break;
		}
		TimKiemTT(luaChon);

	}

}

//---------------------------------------------------------------------------------------------------

void TimKiemTenTT()
{
	fflush(stdin);
	char a[20], c[20];
	char*d;
	gotoxy(40, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_Ten_______________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap ten can tim: ";
	gets(a);
	ChuanHoaTen(a);
	//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
	int b = 0, i = 0;
	fflush(stdin);
	while (i < SoSinhVien)
	{
		sv = sinhVien[i];
		int k = KtraTen(sv.HoVaTen, a);
		if (k == 0 || strcmp(a, sv.HoVaTen) == 0)
		{
			b++;
			if (b % 10 == 1)	KeInDanhSach();
			InThongTinSinhVien(sinhVien[i], 2 * b + 6, b);
		}
		i++;
	}

	gotoxy(85, 3);	cout << "                              ";
	if (b < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	//	gotoxy(85,2);
	//	cout<<"---ESC de quay lai---     ";
	gotoxy(10, 4);
	if (b == 0)	cout << "Khong tim thay sinh vien!!!";
	gotoxy(1, 3);	cout << "\t    Co " << b << " sinh vien   ";

	XoaConTro();
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemTT(1);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void TimKiemLopTT()
{
	fflush(stdin);
	char a[20], c[20];
	char*d;
	gotoxy(40, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_Lop_______________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap lop can tim: ";
	gets(a);
	ChuanHoaTen(a);
	//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
	int b = 0, i = 0;
	fflush(stdin);
	while (i < SoSinhVien)
	{
		sv = sinhVien[i];
		//		int k=KtraTen(sv.HoVaTen,a);
		//		char ten1[50];
		//  	 	TachTen(sv.HoVaTen,ten1);
		if (strcmp(a, sv.MaLop) == 0)
		{
			b++;
			if (b % 10 == 1)	KeInDanhSach();
			InThongTinSinhVien(sinhVien[i], 2 * b + 6, b);
		}
		i++;
	}
	gotoxy(85, 3);	cout << "                              ";
	if (b < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	//	gotoxy(85,2);
	//	cout<<"---ESC de quay lai---     ";
	gotoxy(10, 4);
	if (b == 0)	cout << "Khong tim thay sinh vien!!!";
	gotoxy(1, 3);	cout << "\t    Co " << b << " sinh vien   ";

	XoaConTro();
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemTT(1);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void TimKiemMSVTT()
{
	fflush(stdin);
	int a;
	gotoxy(40, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_MSV_______________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap ma sinh vien can tim: ";
	cin >> a;
	//ChuanHoaTen(a);
//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
	int b = 0, i = 0;
	fflush(stdin);
	while (i < SoSinhVien)
	{
		sv = sinhVien[i];
		//		int k=KtraTen(sv.HoVaTen,a);
		//		char ten1[50];
		//  	 	TachTen(sv.HoVaTen,ten1);
		if (a == sv.MaSinhVien)
		{
			b++;
			if (b % 10 == 1)	KeInDanhSach();
			InThongTinSinhVien(sinhVien[i], 2 * b + 6, b);
		}
		i++;
	}
	gotoxy(85, 3);	cout << "                              ";
	if (b < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	//	gotoxy(85,2);
	//	cout<<"---ESC de quay lai---     ";
	gotoxy(10, 4);
	if (b == 0)	cout << "Khong tim thay sinh vien!!!";
	gotoxy(1, 3);	cout << "\t    Co " << b << " sinh vien   ";

	XoaConTro();
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemTT(2);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void TimKiemDiemTT()
{
	fflush(stdin);
	float a;
	gotoxy(40, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_Diem_______________";
	textcolor(11);

	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap diem can tim: ";
	cin >> a;
	//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
	int b = 0, i = 0;
	fflush(stdin);
	while (i < SoSinhVien)
	{
		sv = sinhVien[i];
		//	int k=KtraTen(sv.HoVaTen,a);
	//		char ten1[50];
	//  	 	TachTen(sv.HoVaTen,ten1);
		if (a == sv.DiemTB)
		{
			b++;
			if (b % 10 == 1)	KeInDanhSach();
			InThongTinSinhVien(sinhVien[i], 2 * b + 6, b);
		}
		i++;
	}
	gotoxy(85, 3);	cout << "                              ";
	if (b < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	//	gotoxy(85,2);
	//	cout<<"---ESC de quay lai---     ";
	gotoxy(10, 4);
	if (b == 0)	cout << "Khong tim thay sinh vien!!!";
	gotoxy(1, 3);	cout << "\t    Co " << b << " sinh vien   ";

	XoaConTro();
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemTT(4);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void TimKiemNSTT()
{
	fflush(stdin);
	int x, y, z;
	gotoxy(35, 2);
	textcolor(14);
	cout << "____________Tim_Kiem_Ngay_Sinh____________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap ngay thang nam:    ";
	gotoxy(35, 4);
	cin >> x;
	gotoxy(39, 4);
	cout << "/";
	cin >> y;
	gotoxy(43, 4);
	cout << "/";
	cin >> z;
	//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	int b = 0, i = 0;
	fflush(stdin);
	while (i < SoSinhVien)
	{
		sv = sinhVien[i];
		//		int k=KtraTen(sv.HoVaTen,a);
		//		char ten1[50];
		//  	 	TachTen(sv.HoVaTen,ten1);
		if (x == sv.date.Ngay &&y == sv.date.Thang  && z == sv.date.Nam)
		{
			b++;
			if (b % 10 == 1)	KeInDanhSach();
			InThongTinSinhVien(sinhVien[i], 2 * b + 6, b);
		}
		i++;
	}
	gotoxy(85, 3);	cout << "                              ";
	if (b < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	//	gotoxy(85,2);
	//	cout<<"---ESC de quay lai---     ";
	gotoxy(10, 4);
	if (b == 0)	cout << "Khong tim thay sinh vien!!!";
	gotoxy(1, 3);	cout << "\t    Co " << b << " sinh vien   ";

	XoaConTro();
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemTT(3);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void TimKiem(int LuaChon)
{
	system("cls");
	MenuTimKiem(LuaChon);
	while (1)
	{
		char phim = getch();
		//cout<<"Phim dang an"<<key;
		switch (phim) {
			//Phim len=72, xuongg 80, trai 75, phai 77, enter 13
		case 72:
			fflush(stdin);
			LuaChon--;
			if (LuaChon <= 0)
				LuaChon = 2;
			break;
		case 80:
			fflush(stdin);
			LuaChon++;
			if (LuaChon > 2)
				LuaChon = 1;
			break;
		case 13:
		{
			switch (LuaChon)
			{
			case 1:
				system("cls");
				TimKiemTT(1);
				break;
			case 2:
				system("cls");
				TimKiemNP(1);
				break;
			}
		}
		break;
		case 27:
			system("cls");
			HienThiMenu(4);
		}
		MenuTimKiem(LuaChon);
	}
	XoaConTro();
}

//---------------------------------------------------------------------------------------------------

void TimKiemNP(int luaChon)
{
	//system("cls");
	KhungSX2();
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_Chon_Tim_Kiem___________";
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 2);
	cout << "1.Tim kiem ten";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 4);
	cout << "2.Tim kiem ma sinh vien";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 6);
	cout << "3.Tim kiem ngay sinh";
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 8);
	cout << "4.Tim kiem diem";
	while (1)
	{
		switch (getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 4)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 4;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				TimKiemTenNP();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(2);
						break;
					}
				}
			case 2:
				system("cls");
				TimKiemMSVNP();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(2);
						break;
					}
				}
			case 3:
				system("cls");
				TimKiemNSNP();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(2);
						break;
					}
				}
			case 4:
				system("cls");
				TimKiemDiemNP();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						TimKiem(2);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			TimKiem(2);
			break;
		}
		TimKiemNP(luaChon);

	}

}

//---------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------

void TimKiemNSNP()
{
	fflush(stdin);
	//	system("cls");
	int x, y, z;
	gotoxy(35, 2);
	textcolor(14);
	cout << "____________Tim_Kiem_Ngay_Sinh____________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap ngay thang nam:    ";
	gotoxy(35, 4);
	cin >> x;
	gotoxy(39, 4);
	cout << "/";
	cin >> y;
	gotoxy(43, 4);
	cout << "/";
	cin >> z;
	//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	XoaConTro();
	SapXepNSChon();
	int l, r, m;
	int temp;
	int dem1 = 0;
	int dem2 = 0;
	l = 0;
	r = SoSinhVien - 1;
	while (l <= r) {
		m = (l + r) / 2;
		if (sinhVien[m].date.Nam < z) l = m + 1;
		else if (sinhVien[m].date.Nam > z) r = m - 1;
		else if (sinhVien[m].date.Nam == z)
		{
			if (sinhVien[m].date.Nam == z && sinhVien[m].date.Thang == y && sinhVien[m].date.Ngay == x)
			{
				dem1++;
				if (dem1 % 10 == 1)	KeInDanhSach();
				InThongTinSinhVien(sinhVien[m], 2 * dem1 + 6, dem1);
			}
			temp = m;
			while (temp <= r)
			{
				if (sinhVien[temp + 1].date.Nam == z && sinhVien[temp + 1].date.Thang == y && sinhVien[temp + 1].date.Ngay == x) {
					dem1++;
					if (dem1 % 10 == 1)	KeInDanhSach();
					InThongTinSinhVien(sinhVien[temp + 1], 2 * (dem1)+6, dem1);
				}
				if (sinhVien[temp + 1].date.Nam != z) {
					break;
				}
				temp++;
			}
			while (m >= l) {
				if (sinhVien[m - 1].date.Nam == z && sinhVien[m - 1].date.Thang == y && sinhVien[m - 1].date.Ngay == x)
				{
					dem2++;
					if ((dem1 + dem2) % 10 == 1)	KeInDanhSach();
					InThongTinSinhVien(sinhVien[m - 1], 2 * (dem2 + dem1) + 6, dem2 + dem1);
				}
				if (sinhVien[m - 1].date.Nam != z) {
					break;
				}
				m--;
			}
			break;
		}

	}
	gotoxy(1, 3);
	if (dem1 + dem2 == 0)
	{
		cout << "\n\t\tKhong tim thay sinh vien\t\t\t\t\t";
		gotoxy(85, 2);
		cout << "---ESC de thoat---";
	}
	else 				cout << "\t    Co " << dem1 + dem2 << " sinh vien   ";
	gotoxy(85, 3);	cout << "                              ";
	if (dem1 + dem2 + 1 < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemNP(3);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void TenNP(char nd[], int a, int b, int dem)
{
	if (a <= b)
	{
		int m = (int)((a + b) / 2);
		int k = KtraTen(sinhVien[m].HoVaTen, nd);

		//		int c;
		//		c = strcmp(sinhVien[m].HoVaTen,nd);
		if (k == 0 || strcmp(nd, sinhVien[m].HoVaTen) == 0)
		{
			dem++;
			KeInDanhSach();
			InThongTinSinhVien(sinhVien[m], dem * 2 + 6, dem);
		}
		if (strcmp(nd, sinhVien[m].HoVaTen) < 0)	TenNP(nd, a, m - 1, dem);
		else 									TenNP(nd, m + 1, b, dem);
		gotoxy(1, 3);
		cout << "\t    Co " << dem << " sinh vien   ";
		gotoxy(85, 3);	cout << "                              ";
		if (dem < 10)
		{
			gotoxy(65, 30);	cout << "\t\t\t\t\t";
		}
	}

}

//---------------------------------------------------------------------------------------------------

void TimKiemTenNP()
{
	fflush(stdin);
	//	system("cls");
		//int dem=0;
	char x[20];
	gotoxy(40, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_Ten_______________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap ten can tim: ";
	gets(x);
	ChuanHoaTen(x);
	//	gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
		//SapXepTenChon();
		//TenNP(x,0,SoSinhVien-1,0);
	XoaConTro();
	SapXepTenChon();
	int l, r, m;
	int temp;
	int dem1 = 0;
	int dem2 = 0;
	l = 0;
	r = SoSinhVien - 1;
	while (l <= r) {
		m = (l + r) / 2;
		char ten[20];
		TachTen(sinhVien[m].HoVaTen, ten);
		if (strcmp(ten, x) < 0) l = m + 1;
		else if (strcmp(ten, x) > 0) r = m - 1;
		else if (strcmp(ten, x) == 0)
		{
			KeInDanhSach();
			dem1++;
			InThongTinSinhVien(sinhVien[m], 2 * dem1 + 6, dem1);
			temp = m;
			while (temp < r) {
				TachTen(sinhVien[temp + 1].HoVaTen, ten);
				if (strcmp(ten, x) == 0) {
					dem1++;
					//Kebang(dem1+1);
					InThongTinSinhVien(sinhVien[temp + 1], 2 * (dem1)+6, dem1);
				}
				if (strcmp(ten, x) != 0) {
					break;
				}
				temp++;
			}
			while (m > l) {
				TachTen(sinhVien[m - 1].HoVaTen, ten);
				if (strcmp(ten, x) == 0) {
					dem2++;
					//Kebang(dem2+dem1+1);
					InThongTinSinhVien(sinhVien[m - 1], 2 * (dem2 + dem1) + 6, dem2 + dem1);
				}
				if (strcmp(ten, x) != 0) {
					break;
				}
				m--;
			}
			break;
		}

	}
	gotoxy(1, 3);
	if (dem1 + dem2 == 0)
	{
		cout << "\n\t\tKhong tim thay sinh vien\t\t\t\t\t";
		gotoxy(85, 2);
		cout << "---ESC de thoat---";
	}
	else				cout << "\t    Co " << dem1 + dem2 << " sinh vien   ";
	gotoxy(85, 3);	cout << "                              ";
	if (dem1 + dem2 < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemNP(1);
			break;

		}
	}


}

//---------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------

void TimKiemMSVNP()
{
	fflush(stdin);
	//	system("cls");
		//int dem;
	int x;
	gotoxy(35, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_Ma_SinhVien_______________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap ma sinh vien can tim: ";
	cin >> x;
	//ChuanHoaTen(x);
	//gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
	XoaConTro();
	SapXepMSVChon();
	int l, r, m;
	int temp;
	int dem1 = 0;
	//	int dem2=0;
	l = 0;
	r = SoSinhVien - 1;
	while (l <= r) {
		m = (l + r) / 2;
		if (sinhVien[m].MaSinhVien > x) l = m + 1;
		else if (sinhVien[m].MaSinhVien < x) r = m - 1;
		else if (sinhVien[m].MaSinhVien == x)
		{
			dem1++;
			KeInDanhSach();
			InThongTinSinhVien(sinhVien[m], 8, dem1);
			break;
		}

	}
	gotoxy(1, 3);
	if (dem1 == 0)
	{
		cout << "\n\t\tKhong tim thay sinh vien\t\t\t\t\t";
		gotoxy(85, 2);
		cout << "---ESC de thoat---";
	}
	else		cout << "\t    Co " << dem1 << " sinh vien   ";
	gotoxy(85, 3);	cout << "                              ";
	//	if(dem1+dem2+1<10)
	//	{
	gotoxy(65, 30);	cout << "\t\t\t\t\t";
	//	}
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemNP(2);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------

void TimKiemDiemNP()
{
	fflush(stdin);
	//	system("cls");
		//int dem;
	int x;
	gotoxy(35, 2);
	textcolor(14);
	cout << "_______________Tim_Kiem_Diem_______________";
	textcolor(11);
	gotoxy(13, 4);
	HienConTro();
	cout << "Nhap diem can tim: ";
	cin >> x;
	//ChuanHoaTen(x);
	//gotoxy(13,4);	cout<<"\t\t\t\t\t\t";
	//DiemNP(x,0,SoSinhVien-1,0);	
	XoaConTro();
	SapXepDiemChon();
	int l, r, m;
	int temp;
	int dem1 = 0;
	int dem2 = 0;
	l = 0;
	r = SoSinhVien - 1;
	while (l <= r) {
		m = (l + r) / 2;
		if (sinhVien[m].DiemTB < x) l = m + 1;
		else if (sinhVien[m].DiemTB > x) r = m - 1;
		else if (sinhVien[m].DiemTB == x)
		{
			KeInDanhSach();
			InThongTinSinhVien(sinhVien[m], 2 * 1 + 6, 1);
			dem1++;
			temp = m;
			while (temp <= r) {
				if (sinhVien[temp + 1].DiemTB == x) {
					dem1++;
					//Kebang(dem1+1);
					InThongTinSinhVien(sinhVien[temp + 1], 2 * (dem1)+6, dem1);
				}
				if (sinhVien[temp + 1].DiemTB != x) {
					break;
				}
				temp++;
			}
			while (m >= l) {
				if (sinhVien[m - 1].DiemTB == x) {
					dem2++;
					//Kebang(dem2+dem1+1);
					InThongTinSinhVien(sinhVien[m - 1], 2 * (dem2 + dem1) + 6, dem2 + dem1);
				}
				if (sinhVien[m - 1].DiemTB != x) {
					break;
				}
				m--;
			}
			break;
		}

	}
	gotoxy(1, 3);
	if (dem2 + dem1 == 0)
	{
		cout << "\n\t\tKhong tim thay sinh vien\t\t\t\t\t";
		gotoxy(85, 2);
		cout << "---ESC de thoat---";
	}
	else	cout << "\t    Co " << dem1 + dem2 << " sinh vien   ";
	gotoxy(85, 3);	cout << "                              ";
	if (dem1 + dem2 + 1 < 10)
	{
		gotoxy(65, 30);	cout << "\t\t\t\t\t";
	}
	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			TimKiemNP(4);
			break;

		}
	}

}

//---------------------------------------------------------------------------------------------------

void ThongKe()
{
	system("cls");
	textcolor(14);
	gotoxy(38, 2);	cout << "_____________Thong_Ke_Sinh_Vien_____________";
	textcolor(11);
	gotoxy(85, 3);	cout << "---ESC de thoat---";
	int a = 5;

	for (int k = 0; k < 2; k++)
	{
		gotoxy(13, 6);
		cout << (char)186;
		gotoxy(13, 7);
		cout << (char)186;
		gotoxy(13, 5); cout << (char)201;
		gotoxy(102, 5); cout << (char)187;
		gotoxy(13, a);
		for (int i = 0; i < 90; i++)
		{
			cout << (char)205;
		}
		gotoxy(13, 6);
		cout << (char)186;
		gotoxy(13, 7);
		cout << (char)186;
		gotoxy(102, 6);
		cout << (char)186;
		gotoxy(102, 7);
		cout << (char)186;
		a++;
		gotoxy(13, a);
		cout << (char)186;
		gotoxy(19, a);
		cout << "|";
		gotoxy(44, a);
		cout << "|";
		gotoxy(52, a);
		cout << "|";
		gotoxy(62, a);
		cout << "|";
		gotoxy(72, a);
		cout << "|";
		gotoxy(82, a);
		cout << "|";
		gotoxy(92, a);
		cout << "|";
		gotoxy(102, a);
		cout << (char)186;
		a++;
	}
	a = 9;
	for (int k = 0; k <= 4; k++)
	{
		gotoxy(14, a);
		for (int i = 0; i < 88; i++)
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
		gotoxy(44, a);
		cout << "|";
		gotoxy(52, a);
		cout << "|";
		gotoxy(62, a);
		cout << "|";
		gotoxy(72, a);
		cout << "|";
		gotoxy(82, a);
		cout << "|";
		gotoxy(92, a);
		cout << "|";
		gotoxy(102, a - 1);
		cout << (char)186;
		gotoxy(102, a);
		cout << (char)186;
		a++;

	}
	gotoxy(13, 19);	cout << (char)200;
	gotoxy(102, 19);	cout << (char)188;
	gotoxy(14, 19);
	for (int i = 0; i < 88; i++)
	{

		cout << (char)205;
	}
	gotoxy(15, 6);
	textcolor(12);
	cout << "STT";
	for (int j = 0; j < 5; j++)
	{
		gotoxy(16, 2 * j + 8);
		cout << j + 1;
	}
	gotoxy(25, 6);
	cout << "Ten Lop";
	gotoxy(46, 6);
	cout << "So sv";
	gotoxy(54, 6);
	cout << "Sv XS";
	gotoxy(64, 6);
	cout << "Sv Gioi";
	gotoxy(74, 6);
	cout << "Sv Kha";
	gotoxy(84, 6);
	cout << "Sv TB";
	gotoxy(94, 6);
	cout << "Sv Yeu";
	textcolor(11);
	char x[15];		strcpy(x, "CNTT");
	char y[15];		strcpy(y, "KTPM");
	char z[15];		strcpy(z, "HTTT");
	char t[15];		strcpy(t, "MMT");
	char u[15];		strcpy(u, "ATTT");
	gotoxy(22, 8);	cout << "Cong Nghe Thong Tin";
	gotoxy(22, 10);	cout << "Ky Thuat Phan Mem";
	gotoxy(22, 12);	cout << "He Thong Thong Tin";
	gotoxy(22, 14);	cout << "Mang May Tinh";
	gotoxy(22, 16);	cout << "An Toan Thong Tin";
	textcolor(12);
	gotoxy(28, 18);	cout << "TONG";
	textcolor(11);
	gotoxy(48, 18);	cout << SoSinhVien;
	int cntt = 0, ktpm = 0, httt = 0, mmt = 0, attt = 0;
	for (int i = 0; i < SoSinhVien; i++)
	{
		if (strcmp(sinhVien[i].MaLop, x) == 0)		cntt++;
		if (strcmp(sinhVien[i].MaLop, y) == 0)		ktpm++;
		if (strcmp(sinhVien[i].MaLop, z) == 0)		httt++;
		if (strcmp(sinhVien[i].MaLop, t) == 0)		mmt++;
		if (strcmp(sinhVien[i].MaLop, u) == 0)		attt++;
	}
	gotoxy(48, 8);	cout << cntt;
	gotoxy(48, 10);	cout << ktpm;
	gotoxy(48, 12);	cout << httt;
	gotoxy(48, 14);	cout << mmt;
	gotoxy(48, 16);	cout << attt;

	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < SoSinhVien; i++)
		{
			if (strcmp(sinhVien[i].MaLop, x) == 0)
			{
				if (sinhVien[i].DiemTB >= 9)								xs++;
				if (sinhVien[i].DiemTB >= 8 && sinhVien[i].DiemTB < 9)		gi++;
				if (sinhVien[i].DiemTB >= 6.5 && sinhVien[i].DiemTB < 8)		kh++;
				if (sinhVien[i].DiemTB >= 5 && sinhVien[i].DiemTB < 6.5)		tb++;
				if (sinhVien[i].DiemTB < 5)								ye++;
			}
		}
		gotoxy(57, 8);	cout << xs;
		gotoxy(67, 8);	cout << gi;
		gotoxy(77, 8);	cout << kh;
		gotoxy(87, 8);	cout << tb;
		gotoxy(97, 8);	cout << ye;
	}
	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < SoSinhVien; i++)
		{
			if (strcmp(sinhVien[i].MaLop, y) == 0)
			{
				if (sinhVien[i].DiemTB >= 9)								xs++;
				if (sinhVien[i].DiemTB >= 8 && sinhVien[i].DiemTB < 9)		gi++;
				if (sinhVien[i].DiemTB >= 6.5 && sinhVien[i].DiemTB < 8)		kh++;
				if (sinhVien[i].DiemTB >= 5 && sinhVien[i].DiemTB < 6.5)		tb++;
				if (sinhVien[i].DiemTB < 5)								ye++;
			}
		}
		gotoxy(57, 10);	cout << xs;
		gotoxy(67, 10);	cout << gi;
		gotoxy(77, 10);	cout << kh;
		gotoxy(87, 10);	cout << tb;
		gotoxy(97, 10);	cout << ye;
	}
	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < SoSinhVien; i++)
		{
			if (strcmp(sinhVien[i].MaLop, z) == 0)
			{
				if (sinhVien[i].DiemTB >= 9)								xs++;
				if (sinhVien[i].DiemTB >= 8 && sinhVien[i].DiemTB < 9)		gi++;
				if (sinhVien[i].DiemTB >= 6.5 && sinhVien[i].DiemTB < 8)		kh++;
				if (sinhVien[i].DiemTB >= 5 && sinhVien[i].DiemTB < 6.5)		tb++;
				if (sinhVien[i].DiemTB < 5)								ye++;
			}
		}
		gotoxy(57, 12);	cout << xs;
		gotoxy(67, 12);	cout << gi;
		gotoxy(77, 12);	cout << kh;
		gotoxy(87, 12);	cout << tb;
		gotoxy(97, 12);	cout << ye;
	}
	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < SoSinhVien; i++)
		{
			if (strcmp(sinhVien[i].MaLop, t) == 0)
			{
				if (sinhVien[i].DiemTB >= 9)								xs++;
				if (sinhVien[i].DiemTB >= 8 && sinhVien[i].DiemTB < 9)		gi++;
				if (sinhVien[i].DiemTB >= 6.5 && sinhVien[i].DiemTB < 8)		kh++;
				if (sinhVien[i].DiemTB >= 5 && sinhVien[i].DiemTB < 6.5)		tb++;
				if (sinhVien[i].DiemTB < 5)								ye++;
			}
		}
		gotoxy(57, 14);	cout << xs;
		gotoxy(67, 14);	cout << gi;
		gotoxy(77, 14);	cout << kh;
		gotoxy(87, 14);	cout << tb;
		gotoxy(97, 14);	cout << ye;
	}
	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < SoSinhVien; i++)
		{
			if (strcmp(sinhVien[i].MaLop, u) == 0)
			{
				if (sinhVien[i].DiemTB >= 9)								xs++;
				if (sinhVien[i].DiemTB >= 8 && sinhVien[i].DiemTB < 9)		gi++;
				if (sinhVien[i].DiemTB >= 6.5 && sinhVien[i].DiemTB < 8)		kh++;
				if (sinhVien[i].DiemTB >= 5 && sinhVien[i].DiemTB < 6.5)		tb++;
				if (sinhVien[i].DiemTB < 5)								ye++;
			}
		}
		gotoxy(57, 16);	cout << xs;
		gotoxy(67, 16);	cout << gi;
		gotoxy(77, 16);	cout << kh;
		gotoxy(87, 16);	cout << tb;
		gotoxy(97, 16);	cout << ye;
	}
	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < SoSinhVien; i++)
		{
			if (sinhVien[i].DiemTB >= 9)								xs++;
			if (sinhVien[i].DiemTB >= 8 && sinhVien[i].DiemTB < 9)		gi++;
			if (sinhVien[i].DiemTB >= 6.5 && sinhVien[i].DiemTB < 8)		kh++;
			if (sinhVien[i].DiemTB >= 5 && sinhVien[i].DiemTB < 6.5)		tb++;
			if (sinhVien[i].DiemTB < 5)								ye++;
		}
		gotoxy(57, 18);	cout << xs;
		gotoxy(67, 18);	cout << gi;
		gotoxy(77, 18);	cout << kh;
		gotoxy(87, 18);	cout << tb;
		gotoxy(97, 18);	cout << ye;
	}

	while (1)
	{
		switch (getch())
		{
		case 27:
			system("cls");
			HienThiMenu(5);
		}
	}

}

//---------------------------------------------------------------------------------------------------

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
}

//---------------------------------------------------------------------------------------------------

void menuSapXepChon(int luaChon)
{
	//system("cls");
	KhungSX2();
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_chon_sap_xep___________";
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 2);
	cout << "1.Sap xep theo ten";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 4);
	cout << "2.Sap xep theo ma sinh vien";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 6);
	cout << "3.Sap xep theo ngay sinh";
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 8);
	cout << "4.Sap xep theo diem";
	while (true)
	{
		switch (getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 4)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 4;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				SapXepTenChon();
				InDanhSach();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			case 2:
				system("cls");
				SapXepMSVChon();
				InDanhSach();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			case 3:
				system("cls");
				SapXepNSChon();
				InDanhSach();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			case 4:
				system("cls");
				SapXepDiemChon();
				InDanhSach();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			SapXep(1);
			break;
		}
		menuSapXepChon(luaChon);

	}
}

//---------------------------------------------------------------------------------------------------

void menuSapXepChen(int luaChon)
{
	//system("cls");
	KhungSX2();
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_chon_sap_xep___________";
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 2);
	cout << "1.Sap xep theo ten";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 4);
	cout << "2.Sap xep theo ma sinh vien";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 6);
	cout << "3.Sap xep theo ngay sinh";
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 8);
	cout << "4.Sap xep theo diem";
	while (true)
	{
		switch (getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 4)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 4;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				SapXepTenChen();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 2:
				system("cls");
				SapXepMSVChen();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 3:
				system("cls");
				SapXepNSChen();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 4:
				system("cls");
				SapXepDiemChen();
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			SapXep(2);
			break;
		}
		menuSapXepChen(luaChon);

	}
}

//---------------------------------------------------------------------------------------------------

void menuSapXepNhanh(int luaChon)
{
	//system("cls");
	KhungSX2();
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_chon_sap_xep___________";
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 2);
	cout << "1.Sap xep theo ten";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 4);
	cout << "2.Sap xep theo ma sinh vien";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 6);
	cout << "3.Sap xep theo ngay sinh";
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 8);
	cout << "4.Sap xep theo diem";
	while (true)
	{
		switch (getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 4)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 4;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				SapXepTenChon();
				SapXepTenNhanh(0, SoSinhVien - 1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 2:
				system("cls");
				SapXepMSVChon();
				SapXepMSVNhanh(0, SoSinhVien - 1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 3:
				system("cls");
				SapXepNSChon();
				SapXepNSNhanh(0, SoSinhVien - 1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 4:
				system("cls");
				SapXepDiemChon();
				SapXepDiemNhanh(0, SoSinhVien - 1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			SapXep(3);
			break;
		}
		menuSapXepNhanh(luaChon);

	}
}

//---------------------------------------------------------------------------------------------------

void DoiCho(SinhVien &sv1, SinhVien &sv2)	// Ham nay doi cho hai hoc sinh trong mang.
{
	SinhVien temp;
	memcpy(&temp, &sv1, sizeof(SinhVien));
	memcpy(&sv1, &sv2, sizeof(SinhVien));
	memcpy(&sv2, &temp, sizeof(SinhVien));
}

//---------------------------------------------------------------------------------------------------

void SapXepDiemNhanh(int l, int r)
{
	float x;
	int i, j;
	i = l;
	j = r;
	x = sinhVien[(l + r) / 2].DiemTB;
	do
	{
		while ((sinhVien[i].DiemTB) > x)	i++;
		while ((sinhVien[j].DiemTB) < x)	j--;
		if (i <= j)
		{
			DoiCho(sinhVien[i], sinhVien[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (l < j)	SapXepDiemNhanh(l, j);
	if (i < r)	SapXepDiemNhanh(i, r);
	InDanhSach();
}

//---------------------------------------------------------------------------------------------------

void SapXepDiemChen()
{
	SinhVien sv1, sv2;
	for (int i = 1; i < SoSinhVien; i++)
	{
		for (int j = i; j > 0; j--)
		{
			sv1 = sinhVien[j];
			sv2 = sinhVien[j - 1];
			if (sv1.DiemTB > sv2.DiemTB)
			{
				DoiCho(sinhVien[j], sinhVien[j - 1]);
				i--;
				break;
			}
			if (sv1.DiemTB == sv2.DiemTB)
			{
				char ten1[50], ten2[50];
				TachTen(sv1.HoVaTen, ten1);
				TachTen(sv2.HoVaTen, ten2);
				int check1 = strcmp(ten1, ten2);
				if (check1 < 0)
				{
					DoiCho(sinhVien[j], sinhVien[j - 1]);
					i--;
					break;
				}
				else if (check1 == 0)
				{
					int check2 = strcmp(sv1.HoVaTen, sv2.HoVaTen);
					if (check2 < 0)
					{
						DoiCho(sinhVien[j], sinhVien[j - 1]);
						i--;
						break;
					}
				}
			}
		}
	}
	InDanhSach();

}

//---------------------------------------------------------------------------------------------------

void SapXepDiemChon()		// Ham sap xem hoc sinh.
{
	//DocFile();
//	int i,j;
	SinhVien sv1, sv2;
	for (int i = 0; i < SoSinhVien - 1; i++)
	{
		sv1 = sinhVien[i];
		for (int j = i + 1; j < SoSinhVien; j++)
		{
			sv2 = sinhVien[j];
			if (sv1.DiemTB < sv2.DiemTB)
			{
				DoiCho(sinhVien[i], sinhVien[j]);
				i--;
				break;
			}
			if (sv1.DiemTB == sv2.DiemTB)
			{
				char ten1[50], ten2[50];
				TachTen(sv1.HoVaTen, ten1);
				TachTen(sv2.HoVaTen, ten2);
				int check1 = strcmp(ten1, ten2);
				if (check1 > 0)
				{
					DoiCho(sinhVien[i], sinhVien[j]);
					i--;
					break;
				}
				else
					if (check1 == 0)
					{
						int check2 = strcmp(sv1.HoVaTen, sv2.HoVaTen);
						if (check2 > 0)
						{
							DoiCho(sinhVien[i], sinhVien[j]);
							i--;
							break;
						}
					}
			}
		}
	}
	//InDanhSach();
}

//---------------------------------------------------------------------------------------------------

void TachTen(char tenSV[], char ten[])
{
	for (int i = strlen(tenSV) - 1; i >= 0; i--) {
		if (tenSV[i] == ' ') {
			strcpy(ten, tenSV + 1 + i);
			break;
		}
	}
}

//---------------------------------------------------------------------------------------------------

int KtraTen(char tenSV[], char ten1[])
{
	int i = 0;
	char ten[50];
	for (int i = strlen(tenSV) - 1; i >= 0; i--)
	{
		if (tenSV[i] == ' ')
		{
			strcpy(ten, tenSV + 1 + i);
			if (strcmp(ten, ten1) == 0)	return 0;
		}
	}
	return 1;
}

//---------------------------------------------------------------------------------------------------

void SapXepTenChen()
{
	system("cls");
	SinhVien sv1, sv2;
	for (int i = 1; i < SoSinhVien; i++)
	{
		for (int j = i; j > 0; j--)
		{
			sv1 = sinhVien[j];
			sv2 = sinhVien[j - 1];
			char ten1[50], ten2[50];
			TachTen(sv1.HoVaTen, ten1);
			TachTen(sv2.HoVaTen, ten2);
			int check1 = strcmp(ten1, ten2);
			if (check1 < 0) {
				DoiCho(sinhVien[j], sinhVien[j - 1]);
				i--;
				break;
			}
			else if (check1 == 0)
			{
				int check2 = strcmp(sv1.HoVaTen, sv2.HoVaTen);
				if (check2 < 0)
				{
					DoiCho(sinhVien[j], sinhVien[j - 1]);
					i--;
					break;
				}
			}
		}
	}
	InDanhSach();
}

//---------------------------------------------------------------------------------------------------

void SapXepTenChon()
{
	SinhVien sv1, sv2;
	for (int i = 0; i < SoSinhVien - 1; i++)
	{
		sv1 = sinhVien[i];
		for (int j = i + 1; j < SoSinhVien; j++) {
			sv2 = sinhVien[j];
			char ten1[50], ten2[50];
			TachTen(sv1.HoVaTen, ten1);
			TachTen(sv2.HoVaTen, ten2);
			int check1 = strcmp(ten1, ten2);
			if (check1 > 0)
			{
				DoiCho(sinhVien[i], sinhVien[j]);
				i--;
				break;
			}
			else if (check1 == 0) {
				int check2 = strcmp(sv1.HoVaTen, sv2.HoVaTen);
				if (check2 > 0) {
					DoiCho(sinhVien[i], sinhVien[j]);
					i--;
					break;
				}
			}

		}
	}
	//InDanhSach();
}

//---------------------------------------------------------------------------------------------------

void SapXepNSChon()
{
	SinhVien sv1, sv2;
	for (int i = 0; i < SoSinhVien - 1; i++)
	{
		sv1 = sinhVien[i];
		for (int j = i + 1; j < SoSinhVien; j++)
		{
			sv2 = sinhVien[j];
			if (sv1.date.Nam < sv2.date.Nam)
			{
				DoiCho(sinhVien[i], sinhVien[j]);
				i--;
				break;
			}
			else
				if (sv1.date.Nam == sv2.date.Nam)
				{
					if (sv1.date.Thang > sv2.date.Thang)
					{
						DoiCho(sinhVien[i], sinhVien[j]);
						i--;
						break;
					}
					else
					{
						if (sv1.date.Thang == sv2.date.Thang)
						{
							if (sv1.date.Ngay > sv2.date.Ngay)
							{
								DoiCho(sinhVien[i], sinhVien[j]);
								i--;
								break;
							}
							if (sv1.date.Ngay == sv2.date.Ngay)
							{
								char ten1[50], ten2[50];
								TachTen(sv1.HoVaTen, ten1);
								TachTen(sv2.HoVaTen, ten2);
								int check1 = strcmp(ten1, ten2);
								if (check1 > 0)
								{
									DoiCho(sinhVien[i], sinhVien[j]);
									i--;
									break;
								}
								else if (check1 == 0)
								{
									int check2 = strcmp(sv1.HoVaTen, sv2.HoVaTen);
									if (check2 > 0)
									{
										DoiCho(sinhVien[i], sinhVien[j]);
										i--;
										break;
									}
								}
							}

						}
					}
				}

		}
	}
	//InDanhSach();
}

//---------------------------------------------------------------------------------------------------

int checkNS1(int i, int l, int r)
{
	if (sinhVien[i].date.Nam < sinhVien[(l + r) / 2].date.Nam)	return 0;
	else
	{
		if (sinhVien[i].date.Nam == sinhVien[(l + r) / 2].date.Nam)
		{
			if (sinhVien[i].date.Thang > sinhVien[(l + r) / 2].date.Thang)	return 0;
			else
			{
				if (sinhVien[i].date.Thang == sinhVien[(l + r) / 2].date.Thang)
				{
					if (sinhVien[i].date.Ngay > sinhVien[(l + r) / 2].date.Ngay)	return 0;
					else return 1;
				}
				else return 1;
			}
		}
		else return 1;
	}
}

//---------------------------------------------------------------------------------------------------

void SapXepNSNhanh(int l, int r)
{
	int x;
	int i, j;
	i = l;
	j = r;
	x = sinhVien[(l + r) / 2].date.Nam;
	do
	{
		while (checkNS1(i, l, r) == 0)	i++;
		while (checkNS1(j, l, r) == 1)	j--;
		if (i <= j)
		{
			DoiCho(sinhVien[i], sinhVien[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (l < j)	SapXepNSNhanh(l, j);
	if (i < r)	SapXepNSNhanh(i, r);
	InDanhSach();
}

//---------------------------------------------------------------------------------------------------

int CheckTen1(int i, int l, int r)
{
	char ten1[50], x[50];
	TachTen(sinhVien[i].HoVaTen, ten1);
	//TachTen(sinhVien[j].HoVaTen,ten2); 
	TachTen(sinhVien[(l + r) / 2].HoVaTen, x);
	int check1 = strcmp(x, ten1);
	if (check1 == 0)
	{
		int check1 = strcmp(sinhVien[i].HoVaTen, sinhVien[(l + r) / 2].HoVaTen);
		return	check1;
	}
	else	return	check1;

}

//---------------------------------------------------------------------------------------------------

int CheckTen2(int j, int l, int r)
{
	char ten2[50], x[50];
	//	TachTen(sinhVien[i].HoVaTen,ten1);
	TachTen(sinhVien[j].HoVaTen, ten2);
	TachTen(sinhVien[(l + r) / 2].HoVaTen, x);
	int check2 = strcmp(x, ten2);
	if (check2 == 0)
	{
		int check2 = strcmp(sinhVien[j].HoVaTen, sinhVien[(l + r) / 2].HoVaTen);
		return	check2;
	}
	else	return	check2;

}

//---------------------------------------------------------------------------------------------------

void SapXepTenNhanh(int l, int r)
{

	int i, j;
	i = l;
	j = r;

	do
	{
		while (CheckTen1(i, l, r) > 0)	i++;

		while (CheckTen2(j, l, r) < 0)	j--;
		if (i <= j)
		{
			DoiCho(sinhVien[i], sinhVien[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (l < j)	SapXepTenNhanh(l, j);
	if (i < r)	SapXepTenNhanh(i, r);
	InDanhSach();
}

//---------------------------------------------------------------------------------------------------

void SapXepNSChen()
{
	SinhVien sv1, sv2;
	for (int i = 1; i < SoSinhVien; i++)
	{
		for (int j = i; j > 0; j--)
		{
			sv1 = sinhVien[j];
			sv2 = sinhVien[j - 1];
			if (sv1.date.Nam > sv2.date.Nam)
			{
				DoiCho(sinhVien[j], sinhVien[j - 1]);
				i--;
				break;
			}
			else
				if (sv1.date.Nam == sv2.date.Nam)
				{
					if (sv1.date.Thang < sv2.date.Thang)
					{
						DoiCho(sinhVien[j], sinhVien[j - 1]);
						i--;
						break;
					}
					else
					{
						if (sv1.date.Thang == sv2.date.Thang)
						{
							if (sv1.date.Ngay < sv2.date.Ngay)
							{
								DoiCho(sinhVien[j], sinhVien[j - 1]);
								i--;
								break;
							}
							if (sv1.date.Ngay == sv2.date.Ngay)
							{
								char ten1[50], ten2[50];
								TachTen(sv1.HoVaTen, ten1);
								TachTen(sv2.HoVaTen, ten2);
								int check1 = strcmp(ten1, ten2);
								if (check1 > 0)
								{
									DoiCho(sinhVien[j], sinhVien[j - 1]);
									i--;
									break;
								}
								else if (check1 == 0)
								{
									int check2 = strcmp(sv1.HoVaTen, sv2.HoVaTen);
									if (check2 > 0)
									{
										DoiCho(sinhVien[j], sinhVien[j - 1]);
										i--;
										break;
									}
								}
							}

						}
					}
				}
		}
	}
	InDanhSach();

}

//---------------------------------------------------------------------------------------------------

void SapXepMSVChon()
{
	SinhVien sv1, sv2;
	for (int i = 0; i < SoSinhVien - 1; i++)
	{
		sv1 = sinhVien[i];
		for (int j = i + 1; j < SoSinhVien; j++)
		{
			sv2 = sinhVien[j];
			if (sv1.MaSinhVien < sv2.MaSinhVien)
			{
				DoiCho(sinhVien[i], sinhVien[j]);
				i--;
				break;
			}
		}
	}

}

//---------------------------------------------------------------------------------------------------

void SapXepMSVChen()
{
	SinhVien sv1, sv2;
	for (int i = 1; i < SoSinhVien; i++)
	{
		for (int j = i; j > 0; j--)
		{
			sv1 = sinhVien[j];
			sv2 = sinhVien[j - 1];
			if (sv1.MaSinhVien > sv2.MaSinhVien)
			{
				DoiCho(sinhVien[j], sinhVien[j - 1]);
				i--;
				break;
			}
		}
	}
	InDanhSach();

}

//---------------------------------------------------------------------------------------------------

void SapXepMSVNhanh(int l, int r)
{
	int x;
	int i, j;
	i = l;
	j = r;
	x = sinhVien[(l + r) / 2].MaSinhVien;
	do
	{
		while ((sinhVien[i].MaSinhVien) < x)	i++;
		while ((sinhVien[j].MaSinhVien) > x)	j--;
		if (i <= j)
		{
			DoiCho(sinhVien[i], sinhVien[j]);
			i++;
			j--;
		}
	} while (i < j);
	if (l < j)	SapXepMSVNhanh(l, j);
	if (i < r)	SapXepMSVNhanh(i, r);
	InDanhSach();
}

//---------------------------------------------------------------------------------------------------

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

//---------------------------------------------------------------------------------------------------

void KhungSX2()
{
	//	gotoxy(30,2);
	//	textcolor(14);
	//	cout<<"___________Lua_chon_sap_xep___________";
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
	while (a < 11)
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
	gotoxy(27, 12);	cout << (char)186;
	gotoxy(67, 12);	cout << (char)186;
	gotoxy(27, 13);	cout << (char)200;
	gotoxy(67, 13);	cout << (char)188;
	for (int i = 0; i < 39; i++)
	{
		gotoxy(i + 28, 13);
		cout << (char)205;
	}
}

//---------------------------------------------------------------------------------------------------

void SapXep(int luaChon)
{
	//DocFile();
	system("cls");
	menuKieuSX(luaChon);
	KhungSX();
	//int luaChon=1;
	while (true) {
		switch (getch()) {
		case 80:
			luaChon++;
			if (luaChon > 3)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 3;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				menuSapXepChon(1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						HienThiMenu(3);
						break;
					}
				}
				break;
			case 2:
				system("cls");
				menuSapXepChen(1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						HienThiMenu(3);
						break;
					}
				}
				break;
			case 3:
				system("cls");
				menuSapXepNhanh(1);
				while (1)
				{
					switch (getch())
					{
					case 27:
						system("cls");
						HienThiMenu(3);
						break;
					}
				}
				break;
				//						case 4:
				//							system("cls");
				//							menuSapXep(1);
				//							while(1) 
				//							{
				//								switch(getch()) 
				//								{
				//									case 27:
				//										system("cls");
				//										HienThiMenu();
				//										break;
				//								}
				//							}
			}
		}
		break;
		case 27:
			system("cls");
			HienThiMenu(3);
		}
		menuKieuSX(luaChon);

	}
}

//---------------------------------------------------------------------------------------------------

int DocFile()
{

	FILE *f1;
	int i = 0;
	if ((f1 = fopen(FName, "r")) == NULL)
	{
		gotoxy(50, 8);
		cout << "Khong the mo file " << FName;

	}
	else {
		while (fread(&sinhVien[i], sizeof(sv), 1, f1), !feof(f1))
		{
			i++;
		}
		SoSinhVien = i;

	}
	fclose(f1);
}

//---------------------------------------------------------------------------------------------------

void GhiFile()
{
	FILE *f1 = fopen(FName, "a+");
	fwrite(&sv, sizeof(sv), 1, f1);
	sinhVien[SoSinhVien] = sv;
	SoSinhVien++;
	fclose(f1);

}

//---------------------------------------------------------------------------------------------------

void GhiFile1(int i)
{
	//	FILE *f1 = fopen(FName,"a+");
	//	FILE *f2 = fopen(Name,"w");
	system("del filedata.txt");
	FILE *f2 = NULL;
	f2 = fopen("filedata.txt", "a+");
	memcpy(&sinhVien[i], &sv, sizeof(SinhVien));
	for (int j = 0; j < SoSinhVien; j++)
	{
		sv = sinhVien[j];
		if (j == i)	fwrite(&sinhVien[i], sizeof(sinhVien[i]), 1, f2);
		else 		fwrite(&sv, sizeof(sv), 1, f2);
	}
	//memcpy(&sinhVien[i], &sv, sizeof(SinhVien));
	fclose(f2);
}

//---------------------------------------------------------------------------------------------------

void HienThiThemHoSo1(SinhVien sv, int i) {
	system("cls");
	//int a=4;
	int luaChon = 1;

	fflush(stdin);
	gotoxy(25, 3);
	textcolor(14);
	cout << "Ban co muon them sinh vien co thong tin sau ";
	textcolor(11);
	gotoxy(20, 5);
	for (int i = 0; i < 55; i++)
	{
		cout << (char)205;
	}
	gotoxy(19, 5);	cout << (char)201;
	gotoxy(75, 5);	cout << (char)187;
	gotoxy(18, 6);
	for (int i = 0; i < 4; i++)
	{
		gotoxy(20, i * 2 + 7);
		for (int j = 0; j < 55; j++)
		{
			cout << "-";
		}
		gotoxy(19, 2 * i + 6);
		cout << (char)186;
		gotoxy(19, 2 * i + 7);
		cout << (char)186;
		gotoxy(37, 2 * i + 6);
		cout << "|";
		gotoxy(75, 2 * i + 6);
		cout << (char)186;
		gotoxy(75, 2 * i + 7);
		cout << (char)186;

	}
	gotoxy(19, 14);	cout << (char)186;
	gotoxy(75, 14);	cout << (char)186;
	gotoxy(19, 15);	cout << (char)200;
	gotoxy(75, 15);	cout << (char)188;
	gotoxy(20, 15);
	for (int j = 0; j < 55; j++)
	{
		cout << (char)205;
	}
	gotoxy(37, 14);
	cout << "|";
	gotoxy(22, 6);
	cout << "Ho Va Ten";
	gotoxy(40, 6);
	cout << sv.HoVaTen;
	gotoxy(22, 8);
	cout << "Ma Sinh Vien";
	gotoxy(40, 8);
	cout << sv.MaSinhVien;
	gotoxy(22, 10);
	cout << "Ma Lop";
	gotoxy(40, 10);
	cout << sv.MaLop;
	gotoxy(22, 12);
	cout << "Ngay Sinh";
	gotoxy(40, 12);
	cout << sv.date.Ngay << "/" << sv.date.Thang << "/" << sv.date.Nam;
	gotoxy(22, 14);
	cout << "Diem TB";
	gotoxy(40, 14);
	cout << sv.DiemTB;

	textcolor(12);
	gotoxy(35, 17);
	cout << "Co";
	textcolor(11);
	gotoxy(45, 17);
	cout << "Khong";
	fflush(stdin);
	while (true) {
		int key = getch();
		switch (key) {
		case 75:
		case 77:
			luaChon++;
			if (luaChon >= 100) {
				luaChon = 2;
			}
			if (luaChon % 2 == 1) {
				textcolor(12);
				gotoxy(35, 17);
				cout << "Co";
				textcolor(11);
				gotoxy(45, 17);
				cout << "Khong";
			}
			else {
				textcolor(11);
				gotoxy(35, 17);
				cout << "Co";
				textcolor(12);
				gotoxy(45, 17);
				cout << "Khong";
			}
			break;
		case 13:
			if (luaChon % 2 == 1) {
				//Co
				GhiFile1(i);
				system("cls");
				InDanhSach();
			}
			else //khong 
			{
				system("cls");
				InDanhSach();
			}
			break;
		}
	}

}

//---------------------------------------------------------------------------------------------------

void ThemHoSo1(int i)
{
	fflush(stdin);
	//	system("cls");
	int Chon = 1;
	menuThemHoSo(1);
	while (1)
	{
		//	int Chon=1;
		char phim = getch();
		switch (phim)
		{
		case 72:
			Chon--;
			if (Chon <= 0)
				Chon = 7;
			break;
		case 80:
			Chon++;
			if (Chon >= 8)
				Chon = 1;
			break;
		case 13:
		{
			switch (Chon)
			{
			case 1:
				while (1)
				{
					fflush(stdin);
					HienConTro();
					gotoxy(45, 6);
					cout << "\t\t\t\t       ";
					gotoxy(45, 6);
					//cout;
					gets(sv.HoVaTen);
					ChuanHoaTen(sv.HoVaTen);
					gotoxy(45, 6);
					cout << "\t\t\t\t       ";
					gotoxy(45, 6);
					cout << sv.HoVaTen;
					XoaConTro();
					//							for(int i=0; i<strlen(sv.HoVaTen); i++)	int a=i;
					if (strlen(sv.HoVaTen) == 0)
					{
						gotoxy(85, 6);
						cout << "Nhap lai ten!!!";
					}
					else
					{
						gotoxy(85, 6);
						cout << "               ";
						Chon = 2;
						break;
					}

				}

				break;
			case 2:
				while (1)
				{
					fflush(stdin);
					char c[20];
					HienConTro();
					gotoxy(45, 8);
					cout << "\t\t\t\t       ";
					gotoxy(45, 8);
					//cout;
					//cin>>sv.MaSinhVien;
					gets(c);
					sv.MaSinhVien = atoi(c);
					XoaConTro();
					gotoxy(45, 8);
					cout << "\t\t\t\t       ";
					gotoxy(45, 8);
					cout << sv.MaSinhVien;
					int a = KTraMSV(sv.MaSinhVien);
					if (a == 0)	continue;
					if (strlen(c) == 0 || sv.MaSinhVien < 10000000 || sv.MaSinhVien>99999999)
					{
						gotoxy(85, 8);
						cout << "Nhap lai ma sinh vien!!!";
					}
					else
					{
						gotoxy(85, 8);
						cout << "                          ";
						Chon = 3;
						break;
					}
				}

				break;
			case 3:
				while (1)
				{
					fflush(stdin);
					HienConTro();
					gotoxy(45, 10);
					cout << "\t\t\t\t       ";
					gotoxy(45, 10);
					//cout;
					gets(sv.MaLop);
					ChuanHoaLop(sv.MaLop);
					gotoxy(45, 10);
					cout << "\t\t\t\t       ";
					gotoxy(45, 10);
					cout << sv.MaLop;
					XoaConTro();
					if (strlen(sv.MaLop) == 0)
					{
						gotoxy(85, 10);
						cout << "Nhap lai ma lop!!!";
					}
					else
					{
						gotoxy(85, 10);
						cout << "                  ";
						Chon = 4;
						break;
					}
				}

				break;
			case 4:
				while (1)
				{
					fflush(stdin);
					HienConTro();
					char a[10], b[10], c[10];
					//							gotoxy(85,12);
					//							cout<<"\t\t\t\t";
					gotoxy(45, 12);
					cout << "   /   /\t\t\t       ";
					gotoxy(46, 12);
					//cout;
					gets(a);
					sv.date.Ngay = atoi(a);
					if (strlen(a) == 0 || sv.date.Ngay < 1 || sv.date.Ngay>31 || sv.date.Ngay == 0)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay!!!            ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                          ";
					gotoxy(48, 12);
					cout << "/   ";
					gotoxy(50, 12);
					//cout;
					gets(b);
					sv.date.Thang = atoi(b);
					if (strlen(b) == 0 || sv.date.Thang < 1 || sv.date.Thang>12 || sv.date.Thang == 0)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang!!!      ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                          ";
					if (sv.date.Thang == 2 && sv.date.Ngay > 29)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang!!!      ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                          ";
					gotoxy(52, 12);
					cout << "/     ";
					gotoxy(54, 12);
					//cout;
					gets(c);
					sv.date.Nam = atoi(c);
					if (strlen(c) == 0 || sv.date.Nam > 2000 || sv.date.Nam == 0 || sv.date.Nam < 1990)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang nam!!!";
						continue;
					}
					gotoxy(85, 12);
					cout << "                           ";
					int v = KTNamNhuan();
					if (v = 1 && sv.date.Thang == 2 && sv.date.Ngay == 29)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang nam!!!";
						continue;
					}
					else
					{
						gotoxy(85, 12);
						cout << "                          ";
						Chon = 4;
						break;
					}


				}
				XoaConTro();
				Chon = 5;
				break;
			case 5:
				while (1)
				{
					fflush(stdin);
					char a[10];
					HienConTro();
					gotoxy(45, 14);
					cout << "\t\t\t\t       ";
					gotoxy(45, 14);
					//cout;
					gets(a);
					sv.DiemTB = atof(a);
					XoaConTro();
					if (strlen(a) == 0 || sv.DiemTB < 0 || sv.DiemTB>10)
					{
						gotoxy(85, 14);
						cout << "Nhap lai diem trung binh!!!";
					}
					else
					{
						gotoxy(85, 14);
						cout << "                           ";
						Chon = 6;
						break;
					}
				}

				break;
			case 6:
				fflush(stdin);
				HienThiThemHoSo1(sv, i);
			case 7:
				system("cls");
				HienThiMenu(2);
			}
		}
		break;
		}
		menuThemHoSo(Chon);
	}

}

//---------------------------------------------------------------------------------------------------

void Sua()
{

	int i = 0;
	gotoxy(10, 32);
	HienConTro();
	char c;
	cout << "   Nhap thu tu sinh vien can sua: ";
	do
	{
		c = getch();
		if (c == 27)
		{
			InDanhSach();
			break;
		}
		if (c == 13)	break;
		cout << c;
		i = i * 10 + c - 48;

	} while (1);
	//	cin>>i;
	XoaConTro();
	system("cls");
	if (i > SoSinhVien || i <= 0)
	{
		system("cls");
		gotoxy(10, 2);
		cout << "   Khong co sinh vien can sua!!!" << endl;
		cout << "\t\t---ESC de quay lai---";
		switch (getch())
		{
		case 27:
			system("cls");
			InDanhSach();
		}
	}
	i = i - 1;
	sv = sinhVien[i];
	gotoxy(45, 6);	cout << sinhVien[i].HoVaTen;
	gotoxy(45, 8);	cout << sinhVien[i].MaSinhVien;
	gotoxy(45, 10);	cout << sinhVien[i].MaLop;
	gotoxy(45, 12);	cout << sinhVien[i].date.Ngay;
	gotoxy(48, 12);	cout << "/ " << sinhVien[i].date.Thang;
	gotoxy(52, 12);	cout << "/" << sinhVien[i].date.Nam;
	gotoxy(45, 14);	cout << sinhVien[i].DiemTB;
	ThemHoSo1(i);
}


//---------------------------------------------------------------------------------------------------





