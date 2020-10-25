//*Nama: Tatsbita Thifalia
//*NIM: 20051397027
//* Prodi/Kelas: 2020 A/D4 Manajemen Informatika
//* Mata Kuliah: Praktek Pemrograman Dasar 5

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A=0, B, C, jumlah=0, i,n;
	
	cout << "================================================== \n";
	cout << "=======* Menghitung Jumlah Deret Bilangan *======= \n";
	cout << "================================================== \n";
	cout << " Bilangan Awal             : ";
	cin >>A;
	cout << " Selisih Angka             : ";
	cin >>B;
	cout << " Jumlah Deret ke-n         : ";
	cin >>n;
	
	cout << " Deret ke-"<<n<<"          : ";
	cout <<A<<" , ";
	jumlah=jumlah+A;
	for(i=0; i<n-1; i++){
		C=A+B;
		A=C;
		cout <<C<<",";
		jumlah=jumlah+C; 
	}
	cout << endl;
	cout <<" Jumlah Deret Ke- \n "<<n<<" : ";
	cout <<jumlah;
	
	getch();
	return 0;
}
