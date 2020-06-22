#include"SapXep.h"
//khung sawsp xep theo truong
void KhungSX()
{
	gotoxy(30, 2);
	textcolor(14);
	cout << "___________Lua_chon_sap_xep___________";
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
//khung kieu sap xep
void KhungSX2()
{
	gotoxy(30,2);
	textcolor(14);
	cout<<"___________Lua_chon_sap_xep___________";
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
	KhungSX2();
	//int luaChon=1;
	while (true) {
		switch (_getch()) {
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
				menuSapXepChon(1);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						chonChucNang(3);
						break;
					}
				}
				break;
			case 2:
				system("cls");
				menuSapXepChen(1);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						chonChucNang(3);
						break;
					}
				}
				break;
			case 3:
				system("cls");
				menuSapXepNoiBot(1);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						chonChucNang(3);
						break;
					}
				}
				break;
			case 4:
				system("cls");
				menuSapXepChon(1);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						chonChucNang(3);
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
			chonChucNang(3);
		}
		menuKieuSX(luaChon);

	}
}
void menuKieuSX(int luaChon)
{
	//system("cls");
	KhungSX2();
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
	if (luaChon == 4) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(40, a + 8);
	cout << "4.Sap xep noi bot";
}

void menuSapXepChon(int luaChon)
{
	//system("cls");
	KhungSX();
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

	if (luaChon == 5) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 10);
	cout << "5.Sap xep theo lop";
	while (true)
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
				selectSort(danhSachSV,0);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			case 2:
				system("cls");
				selectSort(danhSachSV, 1);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			case 3:
				system("cls");
				selectSort(danhSachSV, 3);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}
			case 4:
				system("cls");
				selectSort(danhSachSV, 4);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(1);
						break;
					}
				}

			case 5:
				system("cls");
				selectSort(danhSachSV, 2);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
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
	KhungSX();
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
	if (luaChon == 5) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 10);
	cout << "5.Sap xep theo lop";
	while (true)
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
				sortChen(danhSachSV,0);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 2:
				system("cls");
				sortChen(danhSachSV, 1);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 3:
				system("cls");
				sortChen(danhSachSV, 3);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 4:
				system("cls");
				sortChen(danhSachSV, 4);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}

			case 5:
				system("cls");
				selectSort(danhSachSV, 2);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
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
	KhungSX();
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
	if (luaChon == 5) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 10);
	cout << "5.Sap xep theo lop";
	while (true)
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
				quickSort(danhSachSV, 0, soSv - 1, 0);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 2:
				system("cls");
				quickSort(danhSachSV, 0, soSv - 1, 1);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 3:
				system("cls");
				quickSort(danhSachSV, 0, soSv - 1, 3);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 4:
				system("cls");
				quickSort(danhSachSV, 0, soSv - 1, 4);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(3);
						break;
					}
				}
			case 5:
				system("cls");
				selectSort(danhSachSV, 2);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
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
			SapXep(3);
			break;
		}
		menuSapXepNhanh(luaChon);

	}
}

//---------------------------------------------------------------------------------------------------
void menuSapXepNoiBot(int luaChon)
{
	//system("cls");
	KhungSX();
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
	if (luaChon == 5) {
		textcolor(12);
	}
	else {
		textcolor(11);
	}
	gotoxy(35, a + 10);
	cout << "5.Sap xep theo lop";
	while (true)
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
				bubbleSort(danhSachSV, 0);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 2:
				system("cls");
				bubbleSort(danhSachSV, 1);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 3:
				system("cls");
				bubbleSort(danhSachSV, 3);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 4:
				system("cls");
				bubbleSort(danhSachSV, 4);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
					{
					case 27:
						system("cls");
						SapXep(2);
						break;
					}
				}
			case 5:
				system("cls");
				selectSort(danhSachSV, 2);
				InDanhSach(danhSachSV, soSv);
				while (1)
				{
					switch (_getch())
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
			SapXep(2);
			break;
		}
		menuSapXepChen(luaChon);

	}
}



bool soSanh2ArrayChar(const char name1[], const char name2[]) {
	/*char name1[] = "ha duy nghia";
	char name2[] = "duy n";*/
	char temp[100] = "\0";
	int x = strlen(name1) - strlen(name2);
	for (int i = 0; i <= x; i++) {
		temp[0] = '\0';

		//copy name1 tu vi tri thu i voi do dai = name 2;
		strncpy(temp, name1 + i, strlen(name2));
		if (strcmpi(temp, name2) == 0) {
			return true;
		}

	}
	return false;
}

int soSanhFloat(float x, float y) {
	if (x > y) {
		return 1;
	}
	else if (x == y) {

		return 0;
	}
	else {
		return -1;
	}

}

int soSanhTDate(Date d1, Date d2) {
	if (d1.nam > d2.nam) {
		return 1;
	}
	else if (d1.nam == d2.nam) {
		if (d1.thang > d2.thang) {
			return 1;
		}
		else if (d1.thang == d2.thang) {
			if (d1.ngay > d2.ngay) {
				return 1;
			}
			else if (d1.ngay == d2.ngay) {

				return 0;
			}
			else {
				return -1;
			}
			return 0;
		}
		else {
			return -1;
		}

	}
	else {
		return -1;
	}
}

void rvereseArray(char arr[], int start, int end)
{
	while (start < end)
	{
		char temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
int soSanhHoTen(SinhVien sV1, SinhVien sV2) {
	SinhVien _sV1=sV1;
	SinhVien _sV2=sV2;
	char ten1[30] = "";
	char ten2[30] = "";
	int vt1 = strlen(_sV1.hoVaTen) - 1;
	int vt2 = strlen(_sV2.hoVaTen) - 1;
	int gTGan1 = 0;
	int gTGan2 = 0;
	while (vt1 >= 0 || vt2 >= 0)
	{
		//so sánh tên -> tên đệm -> họ
		for (int i = vt1; i >= 0; i--) {
			if (_sV1.hoVaTen[i] == ' ') {
				vt1--;
				break;
			}
			ten1[gTGan1++] = _sV1.hoVaTen[i];
			vt1--;
		}

		rvereseArray(ten1, 0, strlen(ten1) - 1);
		for (int i = vt2; i >= 0; i--) {
			if (_sV2.hoVaTen[i] == ' ') {
				vt2--;
				break;
			}
			ten2[gTGan2++] = _sV2.hoVaTen[i];
			vt2--;
		}
		rvereseArray(ten2, 0, strlen(ten2) - 1);


		int gtSoSanh = strcmp(ten1, ten2);
		
	
		
		if (gtSoSanh == 0) {

			// kiểm tra xem đã hết chưa

			if (vt1 >= 0 && vt2 < 0) {
				return 1;
			}
			if (vt1 < 0 && vt2 >= 0) {
				return -1;
			}
			if (vt1 < 0 && vt2 < 0) {
				return 0;
			}


			int i = 0;
			while (ten1[i] != '\0')
			{
				ten1[i] = '\0';
				i++;
			}
			gTGan1 = 0;
			int j = 0;
			while (ten2[j] != '\0')
			{
				ten2[j] = '\0';
				j++;
			}
			gTGan2 = 0;
			continue;

		}
		else
		{

			return gtSoSanh;

		}


		// kiểm tra xem đã hết chưa

		/*if ((vt1 < 0) || (vt2 < 0)) {
			return gtSoSanh;
		}*/
	}

}


int soSanhSinhVien(SinhVien sV1, SinhVien sV2, int x) {
	if (x % 5 == 0) {
		return soSanhHoTen(sV1, sV2);
	}
	else if (x % 5 == 1) {
		return strcmp(sV1.maSinhVien, sV2.maSinhVien);
	}
	else if (x % 5 == 2) {
		return strcmp(sV1.maLop, sV2.maLop);
	}
	else if (x % 5 == 3) {
		return soSanhTDate(sV1.ngaySinh, sV2.ngaySinh);
	}
	else {
		return soSanhFloat(sV1.diemTBTL, sV2.diemTBTL);
	}


}


void sortChen(SinhVien sv[], int kieu) {

	for (int i = 1; i < soSv; i++)
	{
		SinhVien x = sv[i];
		int j = i;
		for (j; (j >= 0) && (soSanhSinhVien(sv[j - 1], x, kieu) > 0); j--)
		{
			sv[j] = sv[j - 1];
		}
		sv[j] = x;



	}
}

void selectSort(SinhVien sv[], int kieu)
{
	for (int i = 0; i < soSv; i++)
	{
		SinhVien GT = sv[i];
		int VT = i;
		for (int j = i + 1; j < soSv; j++)
		{
			if (soSanhSinhVien(GT, sv[j], kieu) > 0)
			{
				GT = sv[j];
				VT = j;
			}
		}
		sv[VT] = sv[i];
		sv[i] = GT;

	}

}


void bubbleSort(SinhVien sv[], int kieu)
{

	for (int i = 0; i < soSv; i++)
	{
		for (int j = soSv - 1; j > i; j--)
		{
			if (soSanhSinhVien(sv[j], sv[j - 1], kieu) < 0)
			{
				SinhVien temp;
				temp = sv[j];
				sv[j] = sv[j - 1];
				sv[j - 1] = temp;

			}
		}
	}

}

void quickSort(SinhVien M[], int l, int r, int kieu)
{

	if (l > r) return;
	SinhVien giua = M[(l + r) / 2];
	int i = l;
	int j = r;
	do
	{
		while (soSanhSinhVien(M[i], giua, kieu) < 0)
		{
			i++;
		}
		while (soSanhSinhVien(M[j], giua, kieu) > 0)
		{
			j--;
		}
		if (i <= j)
		{
			SinhVien temp = M[i];
			M[i] = M[j];
			M[j] = temp;
			i++;
			j--;
		}

	} while (i < j);
	quickSort(M, l, j, kieu);
	quickSort(M, i, r, kieu);

}