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
	gotoxy(52, 12);
	cout << "/";
	gotoxy(60, 12);
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
void themHoSo() {
	SinhVien sv;
	fflush(stdin);
	//	system("cls");
	int Chon = 1;
	menuThemHoSo(1);
	while (1)
	{
		//	int Chon=1;
		char phim = _getch();
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
					
					gotoxy(45, 6);
					cout << "\t\t\t\t       ";

					gotoxy(45, 6);
					cin.getline(sv.hoVaTen, 100);
					int soKT_HoTen = strlen(sv.hoVaTen);

					dinhDangLaiHoTen(sv.hoVaTen);
					
					gotoxy(45, 6);
					cout << "\t\t\t\t       ";
					gotoxy(45, 6);
					//xoa ho ten cu vua nhap khi chua dinh dang
					for (int i = 0; i < soKT_HoTen; i++) {
						gotoxy(45+i, 6);
						cout << " ";
					}
					gotoxy(45, 6);
					cout << sv.hoVaTen;
					
					//							for(int i=0; i<strlen(sv.HoVaTen); i++)	int a=i;
					if (strlen(sv.hoVaTen) == 0)
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
					
					
					gotoxy(45, 8);
					cout << "\t\t\t\t       ";
					gotoxy(45, 8);
					cin.getline(sv.maSinhVien, 20);
					int soKT_MaSV = strlen(sv.maSinhVien);

					dinhDangLaiMaLop_MaSV(sv.maSinhVien);
					gotoxy(45, 8);
					cout << "\t\t\t\t       ";
					gotoxy(45, 8);


					for (int i = 0; i < soKT_MaSV; i++) {
						gotoxy(45 + i, 8);
						cout << " ";
					}
					gotoxy(45, 8);
					cout << sv.maSinhVien;
					
					if (strlen(sv.maSinhVien) == 0 )
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
					
					gotoxy(45, 10);
					cout << "\t\t\t\t       ";
					gotoxy(45, 10);
					cin.getline(sv.maLop, 20);
					int soKT_MaLop = strlen(sv.maLop);

					dinhDangLaiMaLop_MaSV(sv.maLop);
					gotoxy(45, 10);
					cout << "\t\t\t\t       ";
					gotoxy(45, 10);
					
					for (int i = 0; i < soKT_MaLop; i++) {
						gotoxy(45 + i, 10);
						cout << " ";
					}
					gotoxy(45, 10);
					cout << sv.maLop;

					if (strlen(sv.maLop) == 0)
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
				char ktSo_KiTu[10];
				while (1)
				{
					fflush(stdin);
					
					
					/*gotoxy(45, 12);
					cout << "   /   /\t\t\t       ";*/

					gotoxy(45, 12);
					cin.getline(ktSo_KiTu, 10);
					int soKT_Ngay = strlen(ktSo_KiTu);

					if (!ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.ngay)) {
						for (int i = 0; i < soKT_Ngay; i++) {
							gotoxy(45 + i, 12);
							cout << " ";
						}
						gotoxy(85, 12);
						cout << "Nhap lai ngay!!!      ";
						continue;
					}
					

					gotoxy(85, 12);
					cout << "                          ";
					//gotoxy(48, 12);
					//cout << "/   ";
					//gotoxy(50, 12);
					////cout;
					gotoxy(54, 12);
					cin.getline(ktSo_KiTu, 10);
					int soKT_Thang = strlen(ktSo_KiTu);

					if (!ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.thang)) {
						for (int i = 0; i < soKT_Ngay; i++) {
							gotoxy(54 + i, 12);
							cout << " ";
						}
						gotoxy(85, 12);
						cout << "Nhap lai thang!!!      ";
						continue;
					}
					gotoxy(85, 12);
					/*cout << "                          ";
					if (sv.date.Thang == 2 && sv.date.Ngay > 29)
					{
						gotoxy(85, 12);
						cout << "Nhap lai ngay thang!!!      ";
						continue;
					}*/
					gotoxy(85, 12);
					cout << "                          ";
					/*gotoxy(52, 12);
					cout << "/     ";*/
					gotoxy(61, 12);
					cin.getline(ktSo_KiTu, 10);
					int soKT_Nam = strlen(ktSo_KiTu);

					if (!ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.nam)) {
						for (int i = 0; i < soKT_Ngay; i++) {
							gotoxy(61 + i, 12);
							cout << " ";
						}
						gotoxy(85, 12);
						cout << "Nhap lai nam!!!      ";
						continue;
					}
					gotoxy(85, 12);
					cout << "                           ";
					
					if (!kTDate(sv.ngaySinh))
					{
						gotoxy(45, 12);
						cout << "      ";
						gotoxy(53, 12);
						cout << "      ";
						gotoxy(61, 12);
						cout << "         ";

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
				
				Chon = 5;
				break;
			case 5:
				while (1)
				{
					fflush(stdin);
					
					
					gotoxy(45, 14);
					cout << "\t\t\t\t       ";
					gotoxy(45, 14);
					//cout;
					cin >> sv.diemTBTL;
					cin.get();
					if ( sv.diemTBTL < 0 || sv.diemTBTL>10)
					{
						for (int i = 0; i < 75 - 45; i++) {
							gotoxy(45 + i, 14);
							cout << " ";
						}
						

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
				luuThongTinSV(sv);
			case 7:
				system("cls");
				chonChucNang(1);
			}
		}
		break;
		}
		menuThemHoSo(Chon);
	}
}

void luuThongTinSV(SinhVien sv) {
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
	cout << sv.hoVaTen;
	gotoxy(22, 8);
	cout << "Ma Sinh Vien";
	gotoxy(40, 8);
	cout << sv.maSinhVien;
	gotoxy(22, 10);
	cout << "Ma Lop";
	gotoxy(40, 10);
	cout << sv.maLop;
	gotoxy(22, 12);
	cout << "Ngay Sinh";
	gotoxy(40, 12);
	cout << sv.ngaySinh.ngay << "/" << sv.ngaySinh.thang << "/" << sv.ngaySinh.nam;
	gotoxy(22, 14);
	cout << "Diem TB";
	gotoxy(40, 14);
	cout << sv.diemTBTL;

	textcolor(12);
	gotoxy(35, 17);
	cout << "Co";
	textcolor(11);
	gotoxy(45, 17);
	cout << "Khong";
	fflush(stdin);
	while (true) {
		int key = _getch();
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
				luuSv(sv);
				docFile();
				system("cls");
				//system("pause");
				themHoSo();
				
			}
			else //khong 
			{
				system("cls");
				themHoSo();
			}
			break;
		}
	}

}