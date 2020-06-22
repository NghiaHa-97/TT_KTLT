#pragma once
#include"DoHoa.h"
#include"KhungChucNang.h"
void KhungSX();
void KhungSX2();
void SapXep(int luaChon);
void menuKieuSX(int luaChon);
void menuSapXepChon(int luaChon);
void menuSapXepChen(int luaChon);
void menuSapXepNhanh(int luaChon);
void menuSapXepNoiBot(int luaChon);





int soSanhFloat(float x, float y);
int soSanhTDate(Date d1, Date d2);
void rvereseArray(char arr[], int start, int end);
bool soSanh2ArrayChar(const char name1[], const char name2[]);
int soSanhHoTen(SinhVien sV1, SinhVien sV2);
int soSanhSinhVien(SinhVien sV1, SinhVien sV2, int x);
void sortChen(SinhVien sv[], int kieu);
void selectSort(SinhVien sv[], int kieu);
void bubbleSort(SinhVien sv[], int kieu);
void quickSort(SinhVien M[], int l, int r, int kieu);