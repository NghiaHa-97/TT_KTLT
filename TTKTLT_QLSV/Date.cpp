#include"Date.h"

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

void dateToString(int ngay, int thang, int nam, char kq[]) {
	char so[] = { '0','1','2','3','4','5','6','7','8','9' };
	char ngaySinh[100] = "\0";

	int i = 0;

	while (ngay != 0) {
		if (ngay >= 10) {
			ngaySinh[i] = so[ngay / 10];
			i++;
			ngay = ngay % 10;
			if (ngay == 0) {
				ngaySinh[i] = '0';
				i++;
			}
		}
		else {
			ngaySinh[i] = so[ngay % 10];
			ngay = ngay / 10;
			i++;
		}

	}
	ngaySinh[i] = '/';
	i++;
	while (thang != 0) {
		if (thang >= 10) {
			ngaySinh[i] = so[thang / 10];
			thang = thang % 10;
			i++;
			if (thang == 0) {
				ngaySinh[i] = '0';
				i++;
			}


		}
		else {
			ngaySinh[i] = so[thang % 10];
			thang = thang / 10;
			i++;
		}

	}
	ngaySinh[i] = '/';
	i++;

	while (nam != 0) {
		if (nam >= 1000) {
			ngaySinh[i] = so[nam / 1000];
			nam = nam % 1000;

			i++;
			if (nam == 0) {
				ngaySinh[i] = '0';
				i++;
				ngaySinh[i] = '0';
				i++;
				ngaySinh[i] = '0';
				i++;
			}
		}
		else if (nam >= 100) {
			ngaySinh[i] = so[nam / 100];
			nam = nam % 100;
			i++;
			if (nam == 0) {
				ngaySinh[i] = '0';
				i++;
				ngaySinh[i] = '0';
				i++;

			}
		}
		else if (nam >= 10) {
			ngaySinh[i] = so[nam / 10];
			nam = nam % 10;
			i++;
			if (nam == 0) {
				ngaySinh[i] = '0';
				i++;

			}
		}
		else {
			ngaySinh[i] = so[nam % 10];
			nam = nam / 10;
			i++;
		}

	}
	strcpy(kq, ngaySinh);


}