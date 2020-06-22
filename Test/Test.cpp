// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<Windows.h>
#include<conio.h>
#include<stdint.h>
using namespace std;

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
void rvereseArrayInt(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int soSanh(const char name1[], const char name2[]) {
	
	char ten1[30] = "";
	char ten2[30] = "";
	int vt1 = strlen(name1) - 1;
	int vt2 = strlen(name2) - 1;
	int gTGan1 = 0;
	int gTGan2 = 0;
	while (vt1 >= 0 || vt2 >= 0)
	{
		for (int i = vt1; i >= 0; i--) {
			if (name1[i] == ' ') {
				vt1--;
				break;
			}
			ten1[gTGan1++] = name1[i];
			vt1--;
		}

		rvereseArray(ten1, 0, strlen(ten1) - 1);
		for (int i = vt2; i >= 0; i--) {
			if (name2[i] == ' ') {
				vt2--;
				break;
			}
			ten2[gTGan2++] = name2[i];
			vt2--;
		}
		rvereseArray(ten2, 0, strlen(ten2) - 1);
		int gtSoSanh = strcmp(ten1, ten2);
		if (vt1 < 0 || vt2 < 0) {
			return gtSoSanh;
		}
		
		
		if (gtSoSanh == 0) {
			int i = 0;
			while (ten1[i] != '\0')
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
void dateToString(int ngay,int thang,int nam,char kq[]) {
	//int ngay = 15, thang = 3, nam = 1997;
	char so[] = { '0','1','2','3','4','5','6','7','8','9' };
	char ngaySinh[100]="\0";

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
	//cout << ngaySinh;


}
void diemtoString(float diem,char kq[]) {
	//float diem = 9.9;
	char so[] = { '0','1','2','3','4','5','6','7','8','9' };
	diem = diem * 10;
	int soDiem = (int)diem;
	char diemChar[4]="\0";
	diemChar[0] = so[soDiem / 10];
	if (soDiem % 10 != 0) {
		diemChar[1] = '.';
		diemChar[2] = so[soDiem % 10];
	}
	strcpy(kq, diemChar);
	//cout << diemChar;

}

bool soSanh2ArrayChar(const char name1[], const char name2[]) {
	/*char name1[] = "ha duy nghia";
	char name2[] = "duy n";*/
	char temp[100] = "\0";
	for (int i = 0; i <= strlen(name1) - strlen(name2); i++) {
		temp[0] = '\0';

		//copy name1 tu vi tri thu i voi do dai = name 2;
		strncpy(temp, name1 + i, strlen(name2));
		if (strcmpi(temp, name2) == 0) {
			return true;
		}
		
	}
	return false;
}


void textcolor(int x)
{
	HANDLE mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}




void doiMauCharTimThay(const char chuoi[], const char chuoiDoiMau[]) {

	
	int vitri[10],soViTri=0;
	for (int i = 0; i < 10; i++) {
		vitri[i]=-1;
	}
	char temp[100] = "\0";
	for (int i = 0; i <= strlen(chuoi) - strlen(chuoiDoiMau); i++) {
		temp[0] = '\0';

		//copy name1 tu vi tri thu i voi do dai = name 2;
		strncpy(temp, chuoi + i, strlen(chuoiDoiMau));
		if (strcmpi(temp, chuoiDoiMau) == 0) {
			vitri[soViTri] = i;
			soViTri++;
		}

	}
	//in từng vị trí ra 
	if (soViTri != 0) {
		soViTri = 0;
		for (int i = 0; i < strlen(chuoi); i++) {
			if (i == vitri[soViTri]) {
				//in hết những chuoi giống nhau thỏa mãn
				for (int j = i; j < i+strlen(chuoiDoiMau); j++) {
					textcolor(8);
					cout << chuoi[j];
				}
				i = i + strlen(chuoiDoiMau) - 1;
				soViTri++;
			}
			else {
				textcolor(14);
				cout << chuoi[i];
			}
		}
	}
	

}

int main()
{
	//int x=soSanh("Ha Nam", "Ha Nghia");
	//cout << x;
	//cout << (char)48;
	/*dateToString();
	diemtoString();*/
	/*char name1[] = "ha duy nghia";
	char name2[] = "duy n";
	cout << soSanh2ArrayChar("Ha Duy Nghia", "nghia");*/

	/*char kq[20]="\0";
	dateToString(20, 10, 1900, kq);
	cout << kq;*/

	/*char kq[10] = "\0";
	diemtoString(8, kq);
	cout << kq;*/
	
	doiMauCharTimThay("gnha nng duy nghiang", "ng");
	
	

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
