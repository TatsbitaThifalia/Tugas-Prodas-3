//*Nama: Tatsbita Thifalia
//*NIM: 20051397027
//* Prodi/Kelas: D4 Manajemen Informatika/2020 A
//* Mata Kuliah: Praktek Pemrograman Dasar 4

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int hasil = 0, a, b, kali;
	cout << "================================================== \n";
	cout << "======* Menghitung Jumlah Barisan Bilangan *====== \n";
	cout << "================================================== \n";
	cout << "\n";
	cout << "Masukkan Nilai : ";
	cin >> b;
	
	for (a = 1; a<= b; a++){
hasil = hasil + a * a * a;
kali = a * a * a;
cout << kali << "\n";
}
cout << "Jumlah total : \n";
cout << hasil ;
cin >> b ;

getch();
	return 0;
}
