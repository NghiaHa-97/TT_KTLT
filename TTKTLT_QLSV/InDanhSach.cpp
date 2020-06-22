#include"InDanhSach.h"
void keKhungInDanhSach(int soDong) {
	
	gotoxy(90, 2);
	textcolor(11);
	cout << "---ESC quay lai---";
	gotoxy(85, 3);	cout << "---Enter de sua thong tin---";
	gotoxy(36, 2);
	textcolor(14);
	cout << "_______Danh sach sinh vien_______\t\t    ";
	gotoxy(13, 3);
	textcolor(11);
	//cout << "Co " << soSv << " sinh vien.";
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
	for (int k = 0; k <= soDong-2; k++)
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
	/*gotoxy(13, 27);	cout << (char)200;
	gotoxy(90, 27);	cout << (char)188;
	gotoxy(14, 27);
	for (int i = 0; i < 76; i++)
	{

		cout << (char)205;
	}*/

	gotoxy(13, a);	cout << (char)200;
	gotoxy(90, a);	cout << (char)188;
	gotoxy(14, a);
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

void InDanhSach(SinhVien _danhSachSV[], int _soSv)
{
	system("cls");
	gotoxy(90, 2);
	textcolor(11);
	cout << "---ESC quay lai---";
	//gotoxy(85, 3);	cout << "---Enter de sua thong tin---";

	gotoxy(36, 2);
	textcolor(14);
	cout << "_______Danh sach sinh vien_______";
	gotoxy(13, 3);
	textcolor(11);
	cout << "Co " << _soSv << " sinh vien.";

	/*keKhungInDanhSach();*/
	int sotrang;
	int b = _soSv % 10;
	if (b != 0)
		sotrang = _soSv / 10 + 1;
	else
		sotrang = _soSv / 10;

	if (sotrang==1 || _soSv==0) {
		keKhungInDanhSach(_soSv);
	}
	else {
		keKhungInDanhSach(10);
	}


	for (int n = 0; n < 10; n++)
	{
		if (n >= _soSv)	break;
		InThongTinSinhVien(_danhSachSV[n], 2 * (n + 4), n + 1);

	}
	int trang = 1;
	gotoxy(50, 30);
	cout << "Trang " << trang << "/" << sotrang;

	int i = 0;
	while (1)
	{
		int line = 0;
		char phim = _getch();
		//cout<<"Phim dang an"<<key;
		switch (phim)
		{
			//Phim len=72, xuongg 80, trai 75, phai 77, enter 13
		case 75:
			if (sotrang == 0) break;

			trang--;
			i--;
			if (i < 0)	i = sotrang - 1;
			system("cls");
			//keKhungInDanhSach();
			
			for (int n = i * 10; n < i * 10 + 10; n++)
			{
				if (n >= _soSv)	break;
				InThongTinSinhVien(_danhSachSV[n], 2 * (n + 4 - 10 * i), n + 1);
				line++;
			}
			keKhungInDanhSach(line);
			line = 0;
			if (trang < 1)	trang = sotrang;
			gotoxy(50, 30);
			cout << "Trang " << trang << "/" << sotrang;
			
			break;

		case 77:
			trang++;
			i++;
			if (i >= sotrang)	i = 0;
			system("cls");
			//keKhungInDanhSach();
			
			for (int n = i * 10; n < i * 10 + 10; n++)
			{
				if (n >= _soSv)	break;
				InThongTinSinhVien(_danhSachSV[n], 2 * (n + 4 - 10 * i), n + 1);
				line++;

			}
			keKhungInDanhSach(line);
			line = 0;
			if (trang > sotrang)	trang = 1;
			gotoxy(50, 30);
			cout << "Trang " << trang << "/" << sotrang;
			break;
		case 27:
			system("cls");
			chonChucNang(2);
			break;
		//case 13:
			//Sua();
			//break;

		}

	}
}
	
	//k vị trí in, x số thứ tự
	void InThongTinSinhVien(SinhVien sv, int k, int x) {

		textcolor(12);
		gotoxy(16, k);
		cout << x;
		textcolor(11);
		gotoxy(21, k);
		cout << sv.hoVaTen;
		gotoxy(43, k);
		cout << sv.maLop;
		gotoxy(54, k);
		cout << sv.maSinhVien;
		gotoxy(69, k);
		if (sv.ngaySinh.ngay < 10)		cout << "0";
		cout << sv.ngaySinh.ngay << "/";
		if (sv.ngaySinh.thang < 10)		cout << "0";
		cout << sv.ngaySinh.thang << "/" << sv.ngaySinh.nam;
		gotoxy(84, k);
		cout << sv.diemTBTL;
		for (int n = 0; n < 11; n++)
		{
			if (sv.diemTBTL == n)
			{
				cout << ".0";
				//	break;	
			}
		}

		if(soSv > 10)
		{
			gotoxy(65, 30);
			cout << "<<Trang truoc";
			gotoxy(80, 30);
			cout << "Trang sau>>";
		}


	}

	void InDanhSachTimKiemColor(SinhVien _danhSachSV[], int _soSv, const char chuoi[]) {
		system("cls");
		gotoxy(90, 2);
		textcolor(11);
		cout << "---ESC quay lai---";
		//gotoxy(85, 3);	cout << "---Enter de sua thong tin---";

		gotoxy(36, 2);
		textcolor(14);
		cout << "_______Danh sach sinh vien_______";
		gotoxy(13, 3);
		textcolor(11);
		cout << "Co " << _soSv << " sinh vien.";

		/*keKhungInDanhSach();*/
		int sotrang;
		int b = _soSv % 10;
		if (b != 0)
			sotrang = _soSv / 10 + 1;
		else
			sotrang = _soSv / 10;

		if (sotrang == 1 || _soSv == 0) {
			keKhungInDanhSach(_soSv);
		}
		else {
			keKhungInDanhSach(10);
		}


		for (int n = 0; n < 10; n++)
		{
			if (n >= _soSv)	break;
			InThongTinSinhVienTimKiemColor(_danhSachSV[n], 2 * (n + 4), n + 1,chuoi);

		}
		int trang = 1;
		gotoxy(50, 30);
		cout << "Trang " << trang << "/" << sotrang;

		int i = 0;
		while (1)
		{
			int line = 0;
			char phim = _getch();
			//cout<<"Phim dang an"<<key;
			switch (phim)
			{
				//Phim len=72, xuongg 80, trai 75, phai 77, enter 13
			case 75:
				if (sotrang == 0) break;

				trang--;
				i--;
				if (i < 0)	i = sotrang - 1;
				system("cls");
				//keKhungInDanhSach();

				for (int n = i * 10; n < i * 10 + 10; n++)
				{
					if (n >= _soSv)	break;
					InThongTinSinhVienTimKiemColor(_danhSachSV[n], 2 * (n + 4 - 10 * i), n + 1,chuoi);
					line++;
				}
				keKhungInDanhSach(line);
				line = 0;
				if (trang < 1)	trang = sotrang;
				gotoxy(50, 30);
				cout << "Trang " << trang << "/" << sotrang;

				break;

			case 77:
				trang++;
				i++;
				if (i >= sotrang)	i = 0;
				system("cls");
				//keKhungInDanhSach();

				for (int n = i * 10; n < i * 10 + 10; n++)
				{
					if (n >= _soSv)	break;
					InThongTinSinhVienTimKiemColor(_danhSachSV[n], 2 * (n + 4 - 10 * i), n + 1,chuoi);
					line++;

				}
				keKhungInDanhSach(line);
				line = 0;
				if (trang > sotrang)	trang = 1;
				gotoxy(50, 30);
				cout << "Trang " << trang << "/" << sotrang;
				break;
			case 27:
				system("cls");
				chonChucNang(4);
				break;
				//case 13:
					//Sua();
					//break;

			}

		}
	};
	void InThongTinSinhVienTimKiemColor(SinhVien sv, int k, int x, const char chuoi[]) {
		textcolor(12);
		gotoxy(16, k);
		cout << x;
		textcolor(11);
		gotoxy(21, k);
		doiMauChuoiTimThay(sv.hoVaTen,chuoi);
		gotoxy(43, k);
		doiMauChuoiTimThay(sv.maLop,chuoi);
		gotoxy(54, k);
		doiMauChuoiTimThay(sv.maSinhVien,chuoi);
		gotoxy(69, k);
		char nS[20]="\0";
		dateToString(sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, nS);
		if (soSanh2ArrayChar(nS, chuoi) == true) {
			doiMauChuoiTimThay(nS, chuoi);
		}
		else
		{
				if (sv.ngaySinh.ngay < 10)		cout << "0";
				cout << sv.ngaySinh.ngay << "/";
				if (sv.ngaySinh.thang < 10)		cout << "0";
				cout << sv.ngaySinh.thang << "/" << sv.ngaySinh.nam;
		}

		
		gotoxy(84, k);
		char diem[5] = "\0";
		diemtoString(sv.diemTBTL, diem);
		if (soSanh2ArrayChar(diem, chuoi) == true) {
			doiMauChuoiTimThay(diem, chuoi);
		}
		else {
			cout << sv.diemTBTL;
			for (int n = 0; n < 11; n++)
			{
				if (sv.diemTBTL == n)
				{
					cout << ".0";
					//	break;	
				}
			}
		}

		

		if (soSv > 10)
		{
			gotoxy(65, 30);
			cout << "<<Trang truoc";
			gotoxy(80, 30);
			cout << "Trang sau>>";
		}
	};

	void doiMauChuoiTimThay(const char chuoi[], const char chuoiDoiMau[]) {
		if (soSanh2ArrayChar(chuoi,chuoiDoiMau)==false) {
			textcolor(11);
			cout << chuoi;
			return;
		}

		int vitri[10], soViTri = 0;
		for (int i = 0; i < 10; i++) {
			vitri[i] = -1;
		}
		char temp[100] = "\0";
		for (int i = 0; i <= strlen(chuoi) - strlen(chuoiDoiMau); i++) {
			temp[0] = '\0';

			//copy name1 tu vi tri thu i voi do dai = name 2;
			strncpy(temp, chuoi + i, strlen(chuoiDoiMau));
			if (strcmpi(temp, chuoiDoiMau) == 0) {
				vitri[soViTri] = i;
				soViTri++;
			}

		}
		//in từng vị trí ra 
		if (soViTri != 0) {
			soViTri = 0;
			for (int i = 0; i < strlen(chuoi); i++) {
				if (i == vitri[soViTri]) {
					//in hết những chuoi giống nhau thỏa mãn
					for (int j = i; j < i + strlen(chuoiDoiMau); j++) {
						textcolor(8);
						cout << chuoi[j];
					}
					i = i + strlen(chuoiDoiMau) - 1;
					soViTri++;
					textcolor(11);
				}
				else {
					textcolor(11);
					cout << chuoi[i];
				}
			}
		}


	}