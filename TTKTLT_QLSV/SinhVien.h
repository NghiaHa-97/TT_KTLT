#pragma once
#include<iostream>
#include"Date.h"
using namespace std;
struct SinhVien {
	char  maLop[20] , maSinhVien[20], hoVaTen[100]="0";
	Date ngaySinh;
	float diemTBTL;
};
void dinhDangLaiMaLop_MaSV(char s[]);
void dinhDangLaiHoTen(char s[]);
void diemtoString(float diem, char kq[]);
