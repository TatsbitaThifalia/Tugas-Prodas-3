//*Nama: Tatsbita Thifalia
//*NIM: 20051397027
//* Prodi/Kelas: 2020 A/D4 Manajemen Informatika
//* Mata Kuliah: Praktek Pemrograman Dasar 7

#include <iostream>
#include <conio.h>

using namespace std;
main() {
	int a, n, i, j;
	cout << "================================================== \n";
	cout << "================ Program Segitiga ================ \n";
	cout << "================================================== \n";
	cout<< "\n";
	cout<< "Masukkan Segitiga Angka : ";
	cin>>n;
	cout<<"\n";
	for (i=1; i<=n; i++)
	
	{
		a =1;
	for (j=1; j<=i; j++)
	{
		cout<<a;
		a++;
	}
	cout<<" \n";
    }
    for (i=n-1; i>=1; i--)
    
    {
    	a =1;
    for (j=1; j<=i; j++)
    {
    	cout<<a;
    	a++;
	}
	cout<<" \n";
	}
	getch ();
}
