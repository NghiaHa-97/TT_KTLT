#pragma once
#include"DoHoa.h"
#include"KhungChucNang.h"
void keKhungInDanhSach(int soDong);
void InDanhSach(SinhVien _danhSachSV[], int _soSv);
void InThongTinSinhVien(SinhVien sv, int k, int x);
void InDanhSachTimKiemColor(SinhVien _danhSachSV[], int _soSv,const char chuoi[]);
void InThongTinSinhVienTimKiemColor(SinhVien sv, int k, int x, const char chuoi[]);

void doiMauChuoiTimThay(const char chuoi[], const char chuoiDoiMau[]);