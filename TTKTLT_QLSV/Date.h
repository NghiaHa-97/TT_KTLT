#pragma once
#include<string.h>
struct Date {
	int ngay, thang, nam;
};

bool kTDate(Date date);
bool ktNgayNhapVaoLaSoVaGanGiaTri(char ktSo_KiTu[], int &x);
void dateToString(int ngay, int thang, int nam, char kq[]);