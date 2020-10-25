//*Nama: Tatsbita Thifalia
//*NIM: 20051397027
//* Prodi/Kelas: 2020 A/D4 Manajemen Informatika
//* Mata Kuliah: Praktek Pemrograman Dasar 6

#include <iostream>

using namespace std;

int main()
{
	int i, j;
	
    cout <<" ================================================================================= \n";
    cout <<" ============================ Program tabel perkalian ============================ \n";
    cout<<" ================================ Tabel Perkalian ================================ \n";
    cout <<" ================================================================================= \n";
    cout<<"\n";
    cout <<" \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10 \n";
	

    for (int i = 1; i <= 10; i++)

    {
    	cout <<i;
    	
        for (int j = 1; j <= 10; j++)
        
        {
        	cout <<"\t*";
            
        }
        cout << endl;
    }
}


