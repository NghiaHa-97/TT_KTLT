#include"TimKiem.h"

void khungTK() {
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_Chon_Tim_Kiem___________";
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
	while (a < 13)
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
	gotoxy(27, 14);	cout << (char)186;
	gotoxy(67, 14);	cout << (char)186;
	gotoxy(27, 15);	cout << (char)200;
	gotoxy(67, 15);	cout << (char)188;
	for (int i = 0; i < 39; i++)
	{
		gotoxy(i + 28, 15);
		cout << (char)205;
	}
}

void khungTextboxTimKiem(const char timKiem[]) {
	textcolor(11);
	gotoxy(25, 5);
	for (int j = 0; j < 55; j++)
	{
		cout << (char)205;
	}
	gotoxy(24, 5);	cout << (char)201;
	gotoxy(80, 5);	cout << (char)187;
	gotoxy(24, 6);
	cout << (char)186;

	gotoxy(42, 6);
	cout << "|";
	gotoxy(80, 6);
	cout << (char)186;

	gotoxy(24, 7);	cout << (char)200;
	gotoxy(80, 7);	cout << (char)188;
	gotoxy(24, 6);	cout << (char)186;
	gotoxy(80, 6);	cout << (char)186;
	gotoxy(25, 7);
	for (int j = 0; j < 55; j++)
	{
		cout << (char)205;
	}
	gotoxy(40, 2);
	cout << "Nhap thong tin can tim kiem";
	gotoxy(27, 6);
	cout << timKiem;
	gotoxy(45, 6);
}

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
	while (a < 11) {
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
	}
	

	gotoxy(40, 11);	cout << (char)186;
	gotoxy(72, 11);	cout << (char)186;
	for (int i = 0; i < 31; i++)
	{
		gotoxy(41 + i, 12);
		cout << (char)205;
	}
	gotoxy(40, 12);	cout << (char)200;
	gotoxy(72, 12);	cout << (char)188;
	if (LuaChon == 1) {
		textcolor(12);
	}
	else
		textcolor(11);
	gotoxy(42, 7);
	cout << "1. Tim kiem nhi phan";
	
	if (LuaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(42, 9);
	cout << "2. Tim kiem theo truong";

	if (LuaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(42, 11);
	cout << "3. Tim kiem khong theo truong";
	
}

void timKiem(int LuaChon)
{
	system("cls");
	menuTimKiem(LuaChon);
	while (1)
	{
		char phim = _getch();
		//cout<<"Phim dang an"<<key;
		switch (phim) {
			//Phim len=72, xuongg 80, trai 75, phai 77, enter 13
		case 72:
			fflush(stdin);
			LuaChon--;
			if (LuaChon <= 0)
				LuaChon = 3;
			break;
		case 80:
			fflush(stdin);
			LuaChon++;
			if (LuaChon > 3)
				LuaChon = 1;
			break;
		case 13:
		{
			switch (LuaChon)
			{
			case 1:
				system("cls");
				timKiemNP(1);
				break;
			case 2:
				system("cls");
				timKiemTheoTruong(1);
				break;
			}
			case 3:
				system("cls");
				timKiemBatKi();
				break;
		}
		break;
		case 27:
			xoaManHinh();
			chonChucNang(4);
		}
		menuTimKiem(LuaChon);
	}
	
}

void timKiemTheoTruong(int luaChon)
{
	//system("cls");
	/*KhungSX();
	gotoxy(26, 2);
	textcolor(14);
	cout << "___________Lua_Chon_Tim_Kiem___________";*/
	khungTK();
	int a = 4;
	if (luaChon == 1)
	{
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 2);
	cout << "1.Tim kiem truong ten";
	if (luaChon == 2) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 4);
	cout << "2.Tim kiem truong ma sinh vien";
	if (luaChon == 3) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 6);
	cout << "3.Tim kiem truong ngay sinh";
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 8);
	cout << "4.Tim kiem truong diem";
	if (luaChon == 5) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 10);
	cout << "5.Tim kiem truong lop";
	while (1)
	{
		switch (_getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 5)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 5;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				timKiemTenTheoTruong();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(2);
						break;
					}
				}
			case 2:
				system("cls");
				timKiemMaSvTheoTruong();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(2);
						break;
					}
				}
			case 3:
				system("cls");
				timKiemNgaySinhTheoTruong();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(2);
						break;
					}
				}
			case 4:
				system("cls");
				timKiemDiemTheoTruong();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(2);
						break;
					}
				}
			case 5:
				system("cls");
				timKiemLopTheoTruong();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(2);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			timKiem(2);
			break;
		}
		timKiemTheoTruong(luaChon);

	}

}

void timKiemNP(int luaChon)
{
	//system("cls");
	/*KhungSX();
	gotoxy(26, 2);
	textcolor(14);
	cout << "___________Lua_Chon_Tim_Kiem___________";*/
	//xoaManHinh();
	khungTK();
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
	if (luaChon == 5) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 10);
	cout << "5.Tim kiem lop";
	while (1)
	{
		switch (_getch())
		{
		case 80:
			luaChon++;
			if (luaChon > 5)
				luaChon = 1;
			break;
		case 72:
			luaChon--;
			if (luaChon <= 0)
				luaChon = 5;
			break;
		case 13:
		{
			switch (luaChon)
			{
			case 1:
				system("cls");
				timKiemTenNP();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(1);
						break;
					}
				}
			case 2:
				system("cls");
				timKiemMaSvNP();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(1);
						break;
					}
				}
			case 3:
				system("cls");
				timKiemNgaySinhNP();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(1);
						break;
					}
				}
			case 4:
				system("cls");
				timKiemDiemNP();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(1);
						break;
					}
				}
			case 5:
				system("cls");
				timKiemLopNP();
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						timKiem(1);
						break;
					}
				}
			}
		}
		break;
		case 27:
			system("cls");
			timKiem(1);
			break;
		}
		timKiemNP(luaChon);

	}

}

void timKiemBatKi() {
	SinhVien dsSinhVien[1000];

	char tk[100] = "\0";

	// khung

	khungTextboxTimKiem("Nhap thong tin");
	gotoxy(45, 6);
	cin.getline(tk, 100);
	int x = 0;
	for (int i = 0; i < soSv; i++) {
		char ns[20] = "\0";
		dateToString(danhSachSV[i].ngaySinh.ngay,
			danhSachSV[i].ngaySinh.thang,
			danhSachSV[i].ngaySinh.nam, ns);

		char diemSV[10] = "\0";
		diemtoString(danhSachSV[i].diemTBTL, diemSV);

		if ((soSanh2ArrayChar(danhSachSV[i].hoVaTen, tk)
			|| soSanh2ArrayChar(danhSachSV[i].maLop, tk)
			|| soSanh2ArrayChar(danhSachSV[i].maSinhVien, tk)
			|| soSanh2ArrayChar(ns, tk)
			|| soSanh2ArrayChar(diemSV, tk))
			&& tk[0] != '\0') {
			dsSinhVien[x] = danhSachSV[i];
			x++;
		}
	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, x, tk);
	}



	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiem(3);
			break;

		}
	}
}


//--------------tìm kiếm đầy đủ-----------------------------------------------------
void timKiemTenNP() {
	
	SinhVien dsSinhVien[1];
	
	char hoVaTen[100]="\0";

	// khung

	khungTextboxTimKiem("Ho Va Ten");
	gotoxy(45, 6);
	cin.getline(hoVaTen, 100);
	int soKT_HoTen = strlen(hoVaTen);

	dinhDangLaiHoTen(hoVaTen);

	gotoxy(45, 6);
	cout << "\t\t\t\t       ";
	gotoxy(45, 6);
	//xoa ho ten cu vua nhap khi chua dinh dang
	for (int i = 0; i < soKT_HoTen; i++) {
		gotoxy(45 + i, 6);
		cout << " ";
	}
	gotoxy(45, 6);
	cout << hoVaTen;

	quickSort(danhSachSV, 0, soSv - 1, 0);

	int left = 0, right = soSv - 1;
	int mid;
	SinhVien sv;
	strcpy(sv.hoVaTen, hoVaTen);

	while (left <= right) {
		mid = (left + right) / 2;
		if (soSanhHoTen(danhSachSV[mid],sv) == 0) {
			dsSinhVien[0] = danhSachSV[mid];
			break;
		}
		else if(soSanhHoTen(danhSachSV[mid], sv) > 0){
			right = mid-1;
		}
		else if (soSanhHoTen(danhSachSV[mid], sv) < 0) {
			left = mid+1;
		}

	}

	if (strcmp(dsSinhVien[0].hoVaTen,"0")==0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, 1, hoVaTen);
	}

	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemNP(1);
			break;

		}
	}
}

void timKiemMaSvNP() {
SinhVien dsSinhVien[1];

char maSV[100];

// khung

khungTextboxTimKiem("Ma Sinh Vien");
gotoxy(45, 6);
cin.getline(maSV, 100);
int soKT_MaSV = strlen(maSV);

dinhDangLaiMaLop_MaSV(maSV);

gotoxy(45, 6);
cout << "\t\t\t\t       ";
gotoxy(45, 6);
//xoa ho ten cu vua nhap khi chua dinh dang
for (int i = 0; i < soKT_MaSV; i++) {
	gotoxy(45 + i, 6);
	cout << " ";
}
gotoxy(45, 6);
cout << maSV;


quickSort(danhSachSV, 0, soSv - 1, 1);

int left = 0, right = soSv - 1;
int mid;


while (left <= right) {
	mid = (left + right) / 2;
	if (strcmp(danhSachSV[mid].maSinhVien, maSV) == 0) {
		dsSinhVien[0] = danhSachSV[mid];
		break;
	}
	else if (strcmp(danhSachSV[mid].maSinhVien, maSV) > 0) {
		right = mid - 1;
	}
	else if (strcmp(danhSachSV[mid].maSinhVien, maSV) < 0) {
		left = mid + 1;
	}

}

if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
	gotoxy(25, 10);
	cout << "Khong co sinh vien can tim !";
}
else {
	InDanhSachTimKiemColor(dsSinhVien, 1, maSV);
}

while (1)
{
	switch (_getch())
	{
	case 27:
		system("cls");
		timKiemNP(2);
		break;

	}
}
}
void timKiemNgaySinhNP() {
	SinhVien dsSinhVien[1];

	char ngaySinh[100];

	// khung

	khungTextboxTimKiem("Ngay Sinh(././.)|");
	gotoxy(45, 6);
	cin.getline(ngaySinh, 100);

	char ngay[20]="\0", thang[20] = "\0", nam[20] = "\0";
	int i = 0, j = 0;
	for (int x = 0; x < strlen(ngaySinh); x++) {

		if (i == 0 && ngaySinh[x] != '/') {
			ngay[j] = ngaySinh[x];
			j++;
		}
		if (i == 1 && ngaySinh[x] != '/') {
			thang[j] = ngaySinh[x];
			j++;
		}
		if (i == 2 && ngaySinh[x] != '/') {
			nam[j] = ngaySinh[x];
			j++;
		}
		if (ngaySinh[x] == '/') {
			i++;
			j = 0;

		}

	}
	bool kt = true;
	Date date;
	if (ktNgayNhapVaoLaSoVaGanGiaTri(ngay, date.ngay) == false) {
		kt = false;
	}
	if (ktNgayNhapVaoLaSoVaGanGiaTri(thang, date.thang) == false) {
		kt = false;
	}
	if (ktNgayNhapVaoLaSoVaGanGiaTri(nam, date.nam) == false) {
		kt = false;
	}
	if (kt == true) {
		quickSort(danhSachSV, 0, soSv - 1, 3);

		int left = 0, right = soSv - 1;
		int mid;
		

		while (left <= right) {
			mid = (left + right) / 2;
			if (soSanhTDate(danhSachSV[mid].ngaySinh, date) == 0) {
				dsSinhVien[0] = danhSachSV[mid];
				break;
			}
			else if (soSanhTDate(danhSachSV[mid].ngaySinh, date) > 0) {
				right = mid - 1;
			}
			else if (soSanhTDate(danhSachSV[mid].ngaySinh, date) < 0) {
				left = mid + 1;
			}

		}

		if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
			gotoxy(25, 10);
			cout << "Khong co sinh vien can tim !";
		}
		else {
			InDanhSachTimKiemColor(dsSinhVien, 1,ngaySinh);
		}
	}
	else {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	

	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemNP(3);
			break;

		}
	}
}
void timKiemDiemNP() {
	SinhVien dsSinhVien[1];
	char diemChar[10]="\0";
	float diem;
	
	// khung

	khungTextboxTimKiem("Diem Sinh Vien");
	gotoxy(45, 6);
	cin >> diem;
	cin.get();
	quickSort(danhSachSV, 0, soSv - 1, 4);

	int left = 0, right = soSv - 1;
	int mid;
	

	while (left <= right) {
		mid = (left + right) / 2;
		if (danhSachSV[mid].diemTBTL==diem) {
			dsSinhVien[0] = danhSachSV[mid];
			break;
		}
		else if (danhSachSV[mid].diemTBTL > diem) {
			right = mid - 1;
		}
		else if (danhSachSV[mid].diemTBTL < diem) {
			left = mid + 1;
		}

	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		diemtoString(diem, diemChar);
		InDanhSachTimKiemColor(dsSinhVien, 1, diemChar);
	}

	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemNP(4);
			break;

		}
	}
}
void timKiemLopNP() {
	SinhVien dsSinhVien[1];

	char maLop[100];

	// khung

	khungTextboxTimKiem("Ma Lop");
	gotoxy(45, 6);
	cin.getline(maLop, 100);
	int soKT_MaSV = strlen(maLop);

	dinhDangLaiMaLop_MaSV(maLop);

	gotoxy(45, 6);
	cout << "\t\t\t\t       ";
	gotoxy(45, 6);
	//xoa ho ten cu vua nhap khi chua dinh dang
	for (int i = 0; i < soKT_MaSV; i++) {
		gotoxy(45 + i, 6);
		cout << " ";
	}
	gotoxy(45, 6);
	cout << maLop;


	quickSort(danhSachSV, 0, soSv - 1, 2);

	int left = 0, right = soSv - 1;
	int mid;


	while (left <= right) {
		mid = (left + right) / 2;
		if (strcmp(danhSachSV[mid].maLop, maLop) == 0) {
			dsSinhVien[0] = danhSachSV[mid];
			break;
		}
		else if (strcmp(danhSachSV[mid].maLop, maLop) > 0) {
			right = mid - 1;
		}
		else if (strcmp(danhSachSV[mid].maLop, maLop) < 0) {
			left = mid + 1;
		}

	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, 1, maLop);
	}

	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemNP(5);
			break;

		}
	}
}

//-------------------------------------------------------------------

void timKiemTenTheoTruong() {

	SinhVien dsSinhVien[100];

	char hoVaTen[100]="\0";

	// khung

	khungTextboxTimKiem("Ho Va Ten");
	gotoxy(45, 6);
	cin.getline(hoVaTen, 100);
	//int soKT_HoTen = strlen(hoVaTen);

	//dinhDangLaiHoTen(hoVaTen);

	//gotoxy(45, 6);
	//cout << "\t\t\t\t       ";
	//gotoxy(45, 6);
	////xoa ho ten cu vua nhap khi chua dinh dang
	//for (int i = 0; i < soKT_HoTen; i++) {
	//	gotoxy(45 + i, 6);
	//	cout << " ";
	//}
	//gotoxy(45, 6);
	//cout << hoVaTen;
	////hoVaTen[strlen(hoVaTen)] = '\0';
	int x = 0;
	for (int i = 0; i < soSv; i++) {
		if (soSanh2ArrayChar(danhSachSV[i].hoVaTen, hoVaTen) && hoVaTen[0]!='\0') {
			dsSinhVien[x] = danhSachSV[i];
			x++;
		}
	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, x,hoVaTen);
	}

	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemTheoTruong(1);
			break;

		}
	}
}

void timKiemMaSvTheoTruong() {
	SinhVien dsSinhVien[100];

	char maSV[100]="\0";

	// khung

	khungTextboxTimKiem("Ma Sinh Vien");
	gotoxy(45, 6);
	cin.getline(maSV, 100);
	int x = 0;
	for (int i = 0; i < soSv; i++) {
		if (soSanh2ArrayChar(danhSachSV[i].maSinhVien, maSV) && maSV[0] != '\0') {
			dsSinhVien[x] = danhSachSV[i];
			x++;
		}
	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, x, maSV);
	}

	

	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemTheoTruong(2);
			break;

		}
	}
}

void timKiemNgaySinhTheoTruong() {
	SinhVien dsSinhVien[100];

	char ngaySinh[100]="\0";

	// khung

	khungTextboxTimKiem("Ngay Sinh(././.)|");
	gotoxy(45, 6);
	cin.getline(ngaySinh, 100);
	int x = 0;
	for (int i = 0; i < soSv; i++) {
		char ns[20] = "\0";
		dateToString(danhSachSV[i].ngaySinh.ngay, danhSachSV[i].ngaySinh.thang, danhSachSV[i].ngaySinh.nam, ns);
		if (soSanh2ArrayChar(ns, ngaySinh) && ngaySinh[0] != '\0') {
			dsSinhVien[x] = danhSachSV[i];
			x++;
		}
	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, x,ngaySinh);
	}



	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemTheoTruong(4);
			break;

		}
	}
}

void timKiemDiemTheoTruong() {

	SinhVien dsSinhVien[100];

	char diem[10]="\0";

	// khung

	khungTextboxTimKiem("Diem Sinh vien");
	gotoxy(45, 6);
	cin.getline(diem, 10);
	int x = 0;
	for (int i = 0; i < soSv; i++) {
		char diemSV[10] = "\0";
		diemtoString(danhSachSV[i].diemTBTL, diemSV);
		if (soSanh2ArrayChar(diemSV, diem) && diem[0] != '\0') {
			dsSinhVien[x] = danhSachSV[i];
			x++;
		}
	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, x,diem);
	}



	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemTheoTruong(4);
			break;

		}
	}
}

void timKiemLopTheoTruong() {
	SinhVien dsSinhVien[100];

	char maLop[100]="\0";

	// khung

	khungTextboxTimKiem("Ma Lop");
	gotoxy(45, 6);
	cin.getline(maLop, 100);
	int x = 0;
	for (int i = 0; i < soSv; i++) {
		if (soSanh2ArrayChar(danhSachSV[i].maLop, maLop) && maLop[0] != '\0') {
			dsSinhVien[x] = danhSachSV[i];
			x++;
		}
	}

	if (strcmp(dsSinhVien[0].hoVaTen, "0") == 0) {
		gotoxy(25, 10);
		cout << "Khong co sinh vien can tim !";
	}
	else {
		InDanhSachTimKiemColor(dsSinhVien, x, maLop);
	}



	while (1)
	{
		switch (_getch())
		{
		case 27:
			system("cls");
			timKiemTheoTruong(5);
			break;

		}
	}
}


//-------------------------------------------------------------------





