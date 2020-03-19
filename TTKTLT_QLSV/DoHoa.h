#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<stdint.h>
using namespace std;
// Hàm thay đổi kích cỡ của khung cmd với tham số truyền vào là chiều cao, chiều rộng.
void resizeConsole(int width, int height);
// Hàm tô màu.
void textcolor(int x);
// Hàm dịch chuyển con trỏ đến tọa độ x, y.
void gotoxy(int x, int y);
void xoaManHinh();