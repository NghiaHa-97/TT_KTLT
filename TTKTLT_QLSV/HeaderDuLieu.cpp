#include"HeaderDuLieu.h"

SinhVien danhSachSV[1000];
int soSv = 0;

void docFile() {
	fstream file;
	file.open("data.bin", ios::binary | ios::in);

	if (!file.is_open()) {
		cout << "ERROR!!!!!";
	}
	else {

		file.seekg(soSv * sizeof(SinhVien), ios::beg);

		while (!file.eof()) {

			file.read(reinterpret_cast<char*>(&danhSachSV[soSv]), sizeof(SinhVien));
			
			if (file.eof()) {
				break;
			}
			soSv++;
		}
		danhSachSV;
		cout << "Thanh cong\n";

	}

	file.close();

}

void luuSv(SinhVien sv) {
	fstream file;

	file.open("data.bin", ios::binary | ios::out | ios::app);


	if (!file.is_open()) {
		cout << "ERROR!!!!!";
	}
	else {

		file.write(reinterpret_cast<char*>(&sv), sizeof(SinhVien));

		cout << "Thanh Cong\n";
		cout << sv.hoVaTen << endl;

	}
	file.close();
}