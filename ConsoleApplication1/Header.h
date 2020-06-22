#pragma once
#include<iostream>
#include<fstream>
using namespace std;

struct Date {
	int ngay, thang, nam;
};

struct SinhVien {
	char  maLop[20], maSinhVien[20], hoVaTen[100];
	Date ngaySinh;
	float diemTBTL;
};

extern SinhVien danhSachSV[1000];
extern int soSv;
void docFile();
void luuSv(SinhVien sv);