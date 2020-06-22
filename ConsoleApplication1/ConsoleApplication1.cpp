// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include"Header.h"

//nếu có lý tự khác số thì false, nếu không có trả về true
//bool ktNgayNhapVaoLaSoVaGanGiaTri(char ktSo_KiTu[],int &x) {
//	x = 0;
//	for (int i = 0; i<=sizeof(ktSo_KiTu)/sizeof(char); i++) {
//		if (ktSo_KiTu[i] == '\0') {
//			break;
//		}
//
//		if (ktSo_KiTu[i]<'0' || ktSo_KiTu[i] > '9') {
//			return false;
//		}
//		else
//		{
//			x = x * 10 + ((int)ktSo_KiTu[i]-48);
//		}
//	}
//
//	return true;
//}

//nếu có lý tự khác số thì false, nếu không có trả về true
bool ktNgayNhapVaoLaSoVaGanGiaTri(char ktSo_KiTu[], int &x) {
	x = 0;
	for (int i = 0; i < strlen(ktSo_KiTu); i++) {
		
		if (ktSo_KiTu[i]<'0' || ktSo_KiTu[i] > '9') {
			return false;
		}
		else
		{
			x = x * 10 + ((int)ktSo_KiTu[i] - 48);
		}
	}

	return true;
}

void dinhDangLaiHoTen(char s[]) {


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
	while (s[strlen(s) - 1] == ' ') {
		s[strlen(s) - 1] = '\0';
	}
	_strlwr(s);
	s[0] = toupper(s[0]);
	for (i = 0; i < strlen(s); i++)
		if (s[i] == ' ')	s[i + 1] = toupper(s[i + 1]);
}
void dinhDangLaiMaLop_MaSV(char s[]) {
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



bool kTDate(Date date) {

	if ((date.ngay > 0 && date.ngay <= 31) && (date.thang > 0 && date.thang <= 12) && date.nam > 0) {
		if ((date.nam % 4 == 0 && date.nam % 100 != 0) || date.nam % 400 == 0)
		{
			switch (date.thang)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (date.ngay <= 31) {
					return true;
				}
				else
				{
					return false;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				if (date.ngay <= 30) {
					return true;
				}
				else
				{
					return false;
				}
			case 2:
				if (date.ngay <= 29) {
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			switch (date.thang)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (date.ngay <= 31) {
					return true;
				}
				else
				{
					return false;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				if (date.ngay <= 30) {
					return true;
				}
				else
				{
					return false;
				}
			case 2:
				if (date.ngay <= 28) {
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	else
	{
		return false;
	}
	
}






SinhVien taoSinhVien() {
	SinhVien sv;
	
	cout << "Nhap Ho Va Ten Sinh Vien:";
	cin.getline(sv.hoVaTen, 100);
	dinhDangLaiHoTen(sv.hoVaTen);
	
	char ktSo_KiTu[10];
	while (true)
	{
		cout << "Nhap Ngay Sinh:";
		

		cin.getline(ktSo_KiTu, 10);
		
		if ( ! ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.ngay)) {
			continue;
		}
		
		cout << "/";
		cin.getline(ktSo_KiTu, 10);
		if (! ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.thang)) {
			continue;
		}


		
		cout << "/";
		cin.getline(ktSo_KiTu, 10);
		if (! ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.nam)) {
			continue;
		}
		

		if (kTDate(sv.ngaySinh)) {
			break;
		}
		else {
			cout << "Ban da nhap sai: NhapLai:\n";

		}
	}
	
	

	cout << "Nhap Ma Lop:";
	cin.getline(sv.maLop,20);
	dinhDangLaiMaLop_MaSV(sv.maLop);

	cout << "Nhap Ma Sinh Vien:";
	cin.getline(sv.maSinhVien, 20);
	dinhDangLaiMaLop_MaSV(sv.maSinhVien);

	cout << "Nhap Diem Tb:";
	cin>>sv.diemTBTL;
	cin.get();

	return sv;
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
	else if(d1.nam==d2.nam){
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
	char ten1[30]="";
	char ten2[30]="";
	int vt1 = strlen(sV1.hoVaTen)-1;
	int vt2 = strlen(sV2.hoVaTen) - 1;
	int gTGan1 = 0;
	int gTGan2 = 0;
	while (vt1>=0||vt2>=0)
	{
		for (int i = vt1; i >= 0; i--) {
			if (sV1.hoVaTen[i] == ' ') {
				vt1--;
				break;
			}
			ten1[gTGan1++] = sV1.hoVaTen[i];
			vt1--;
		}
		
		rvereseArray(ten1, 0, strlen(ten1) - 1);
		for (int i = vt2; i >= 0; i--) {
			if (sV2.hoVaTen[i] == ' ') {
				vt2--;
				break;
			}
			ten2[gTGan2++] = sV2.hoVaTen[i];
			vt2--;
		}
		rvereseArray(ten2, 0, strlen(ten2) - 1);
		if (vt1 < 0) {
			return -1;
		}
		if (vt1 < 0 && vt2 < 0)
		{
			return 0;
		}
		if (vt2 < 0) {
			return 1;
		}
		int gtSoSanh = strcmp(ten1, ten2);
		if (gtSoSanh == 0) {
			int i = 0;
			while (ten1[i]!='\0')
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
	}

	

}


int soSanhSinhVien(SinhVien sV1, SinhVien sV2,int x) {
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
		return soSanhTDate(sV1.ngaySinh,sV2.ngaySinh);
	}
	else {
		return soSanhFloat(sV1.diemTBTL,sV2.diemTBTL);
	}

	
}


void sortChen(SinhVien sv[], int kieu) {

	for (int i = 1; i < soSv; i++)
	{
		SinhVien x = sv[i];
		int j = i;
		for (j; (j >= 0) && (soSanhSinhVien(sv[j - 1], x,kieu)>0); j--)
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
			if (soSanhSinhVien(sv[j], sv[j - 1], kieu) < 0 )
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
		if (i <= j);
		{
			SinhVien temp = M[i];
			M[i] = M[j];
			M[j] = temp;
			i++;
			j--;
		}

	} while (i < j);
	quickSort(M, l, j,kieu);
	quickSort(M, i, r,kieu);

}





int main()
{

	/*SinhVien sv=taoSinhVien();

	luuSv(sv);
	SinhVien sv2 = taoSinhVien();

	luuSv(sv2);
	
	docFile();*/

	/*SinhVien sv1 = taoSinhVien();

	luuSv(sv1);
	
	
	docFile();
	SinhVien sv3 = taoSinhVien();

	luuSv(sv3);*/

	/*SinhVien sv2 = taoSinhVien();

	luuSv(sv2);*/
	docFile();
	//cout << soSv;
	for (int i = 0; i < soSv; i++) {

		cout << "--------------------Sinh vien:::" << i << "-----------------\n";
		cout << "\n------+++++++====>>>hoVaTen:::";
		cout << danhSachSV[i].hoVaTen << endl;
		cout << "\n------+++++++====>>>ngaySinh:::";
		cout << danhSachSV[i].ngaySinh.ngay;
		cout << "/";
		cout << danhSachSV[i].ngaySinh.thang;
		cout << "/";
		cout << danhSachSV[i].ngaySinh.nam << endl;
		
		cout << "\n------+++++++====>>>maSinhVien:::";
		cout << danhSachSV[i].maSinhVien << endl;
		cout << "\n------+++++++====>>>maLop:::";
		cout << danhSachSV[i].maLop << endl;
		cout << "\n------+++++++====>>>diemTBTL:::";
		cout << danhSachSV[i].diemTBTL << endl;
	}
	
	cout << "\n==============================================================\n";
	//sortChen(danhSachSV, 3);
	//selectSort(danhSachSV, 0);
	//bubbleSort(danhSachSV, 3);
	//quickSort(danhSachSV, 0, soSv-1, 3);


	for (int i = 0; i < soSv; i++) {

		cout << "--------------------Sinh vien:::" << i << "-----------------\n";
		cout << "\n------+++++++====>>>hoVaTen:::";
		cout << danhSachSV[i].hoVaTen << endl;
		cout << "\n------+++++++====>>>ngaySinh:::";
		cout << danhSachSV[i].ngaySinh.ngay;
		cout << "/";
		cout << danhSachSV[i].ngaySinh.thang;
		cout << "/";
		cout << danhSachSV[i].ngaySinh.nam << endl;

		cout << "\n------+++++++====>>>maSinhVien:::";
		cout << danhSachSV[i].maSinhVien << endl;
		cout << "\n------+++++++====>>>maLop:::";
		cout << danhSachSV[i].maLop << endl;
		cout << "\n------+++++++====>>>diemTBTL:::";
		cout << danhSachSV[i].diemTBTL << endl;
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
