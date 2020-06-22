#include"ThongKe.h"
void thongKe() {
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
	char u[15];		strcpy(u, "KHMT");
	gotoxy(22, 8);	cout << "Cong Nghe Thong Tin";
	gotoxy(22, 10);	cout << "Ky Thuat Phan Mem";
	gotoxy(22, 12);	cout << "He Thong Thong Tin";
	gotoxy(22, 14);	cout << "Mang May Tinh";
	gotoxy(22, 16);	cout << "Khoa Hoc May Tinh";
	textcolor(12);
	gotoxy(28, 18);	cout << "TONG";
	textcolor(11);
	gotoxy(48, 18);	cout << soSv;
	int cntt = 0, ktpm = 0, httt = 0, mmt = 0, attt = 0;
	for (int i = 0; i < soSv; i++)
	{
		if (soSanh2ArrayChar(danhSachSV[i].maLop, x) )		cntt++;
		if (soSanh2ArrayChar(danhSachSV[i].maLop, y) )		ktpm++;
		if (soSanh2ArrayChar(danhSachSV[i].maLop, z) )		httt++;
		if (soSanh2ArrayChar(danhSachSV[i].maLop, t) )		mmt++;
		if (soSanh2ArrayChar(danhSachSV[i].maLop, u) )		attt++;
	}
	gotoxy(48, 8);	cout << cntt;
	gotoxy(48, 10);	cout << ktpm;
	gotoxy(48, 12);	cout << httt;
	gotoxy(48, 14);	cout << mmt;
	gotoxy(48, 16);	cout << attt;

	{
		int xs = 0, gi = 0, kh = 0, tb = 0, ye = 0;
		for (int i = 0; i < soSv; i++)
		{
			if (soSanh2ArrayChar(danhSachSV[i].maLop, x))
			{
				if (danhSachSV[i].diemTBTL >= 9)								xs++;
				if (danhSachSV[i].diemTBTL < 9)		gi++;
				if (danhSachSV[i].diemTBTL < 8)		kh++;
				if (danhSachSV[i].diemTBTL < 6.5)		tb++;
				if (danhSachSV[i].diemTBTL < 5)								ye++;
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
		for (int i = 0; i < soSv; i++)
		{
			if (soSanh2ArrayChar(danhSachSV[i].maLop, y))
			{
				if (danhSachSV[i].diemTBTL >= 9)								xs++;
				if (danhSachSV[i].diemTBTL >= 8 && danhSachSV[i].diemTBTL < 9)		gi++;
				if (danhSachSV[i].diemTBTL >= 6.5 && danhSachSV[i].diemTBTL < 8)		kh++;
				if (danhSachSV[i].diemTBTL >= 5 && danhSachSV[i].diemTBTL < 6.5)		tb++;
				if (danhSachSV[i].diemTBTL < 5)								ye++;
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
		for (int i = 0; i < soSv; i++)
		{
			if (soSanh2ArrayChar(danhSachSV[i].maLop, z))
			{
				if (danhSachSV[i].diemTBTL >= 9)								xs++;
				if (danhSachSV[i].diemTBTL >= 8 && danhSachSV[i].diemTBTL < 9)		gi++;
				if (danhSachSV[i].diemTBTL >= 6.5 && danhSachSV[i].diemTBTL < 8)		kh++;
				if (danhSachSV[i].diemTBTL >= 5 && danhSachSV[i].diemTBTL < 6.5)		tb++;
				if (danhSachSV[i].diemTBTL < 5)								ye++;
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
		for (int i = 0; i < soSv; i++)
		{
			if (soSanh2ArrayChar(danhSachSV[i].maLop, t))
			{
				if (danhSachSV[i].diemTBTL >= 9)								xs++;
				if (danhSachSV[i].diemTBTL >= 8 && danhSachSV[i].diemTBTL < 9)		gi++;
				if (danhSachSV[i].diemTBTL >= 6.5 && danhSachSV[i].diemTBTL < 8)		kh++;
				if (danhSachSV[i].diemTBTL >= 5 && danhSachSV[i].diemTBTL < 6.5)		tb++;
				if (danhSachSV[i].diemTBTL < 5)								ye++;
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
		for (int i = 0; i < soSv; i++)
		{
			if (soSanh2ArrayChar(danhSachSV[i].maLop, u))
			{
				if (danhSachSV[i].diemTBTL >= 9)								xs++;
				if (danhSachSV[i].diemTBTL >= 8 && danhSachSV[i].diemTBTL < 9)		gi++;
				if (danhSachSV[i].diemTBTL >= 6.5 && danhSachSV[i].diemTBTL < 8)		kh++;
				if (danhSachSV[i].diemTBTL >= 5 && danhSachSV[i].diemTBTL < 6.5)		tb++;
				if (danhSachSV[i].diemTBTL < 5)								ye++;
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
		for (int i = 0; i < soSv; i++)
		{
			if (danhSachSV[i].diemTBTL >= 9)								xs++;
			if (danhSachSV[i].diemTBTL >= 8 && danhSachSV[i].diemTBTL < 9)		gi++;
			if (danhSachSV[i].diemTBTL >= 6.5 && danhSachSV[i].diemTBTL < 8)		kh++;
			if (danhSachSV[i].diemTBTL >= 5 && danhSachSV[i].diemTBTL < 6.5)		tb++;
			if (danhSachSV[i].diemTBTL < 5)								ye++;
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
			chonChucNang(5);
		}
	}
	
}