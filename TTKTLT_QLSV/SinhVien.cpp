#include"SinhVien.h"


void dinhDangLaiHoTen(char s[]) {

	for (int x = 0; x < strlen(s); x++) {
		if (s[x] == '\t') {
			s[x] = ' ';
		}
	}

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
//SinhVien taoSinhVien() {
//	SinhVien sv;
//
//	cout << "Nhap Ho Va Ten Sinh Vien:";
//	cin.getline(sv.hoVaTen, 100);
//	dinhDangLaiHoTen(sv.hoVaTen);
//
//	char ktSo_KiTu[10];
//	while (true)
//	{
//		cout << "Nhap Ngay Sinh:";
//
//
//		cin.getline(ktSo_KiTu, 10);
//
//		if (!ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.ngay)) {
//			continue;
//		}
//
//		cout << "/";
//		cin.getline(ktSo_KiTu, 10);
//		if (!ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.thang)) {
//			continue;
//		}
//
//
//
//		cout << "/";
//		cin.getline(ktSo_KiTu, 10);
//		if (!ktNgayNhapVaoLaSoVaGanGiaTri(ktSo_KiTu, sv.ngaySinh.nam)) {
//			continue;
//		}
//
//
//		if (kTDate(sv.ngaySinh)) {
//			break;
//		}
//		else {
//			cout << "Ban da nhap sai: NhapLai:\n";
//
//		}
//	}
//
//
//
//	cout << "Nhap Ma Lop:";
//	cin.getline(sv.maLop, 20);
//	dinhDangLaiMaLop_MaSV(sv.maLop);
//
//	cout << "Nhap Ma Sinh Vien:";
//	cin.getline(sv.maSinhVien, 20);
//	dinhDangLaiMaLop_MaSV(sv.maSinhVien);
//
//	cout << "Nhap Diem Tb:";
//	cin >> sv.diemTBTL;
//	cin.get();
//
//	return sv;
//}
void diemtoString(float diem, char kq[]) {
	//float diem = 9.9;
	char so[] = { '0','1','2','3','4','5','6','7','8','9' };
	diem = diem * 10;
	char diemChar[10] = "\0";
	if (diem == 100) {
		diemChar[0] = '1';
		diemChar[1] = '0';
	}
	else {
		diemChar[0] = so[(int)diem / 10];
		if ((int)diem % 10 != 0) {
			diemChar[1] = '.';
			diemChar[2] = so[(int)diem % 10];
		}
		
	}
	strcpy(kq, diemChar);
	
	//cout << diemChar;

}