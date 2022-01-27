#include <iostream>
#include <conio.h>
#define max 10
using namespace std;
struct stack
{
 int atas;
 int data [max];
}T;

void awal() 
{
	T.atas =- 1;
}

int kosong()
{
	if (T.atas == -1)
	return 1;
	else
	return 0;
}
 int penuh()
 {
 	if (T.atas == max-1)
 	return 1;
 	else
 	return 0;
 }
 
 void input (int data)
{
	if (kosong () == 1)
	{
		T.atas++;
		T.data [T.atas] = data;
		cout << "Data " << T.data [T.atas] << "masuk ke stack\n";
		
	}
}

void hapus()
{
	if (kosong () == 0)
	{
		cout << "Data teratas sudah terambil\n";
		T.atas--;
	}
	else
	cout << "Data kosong\n";
}

void tampil()
{
	if (kosong() == 0)
	{
		for (int i = T.atas; i >= 0; i--)
		{
			cout << "\nTumpukan ke "<< i + 1 <<"=" << T.data[i];
		}
		
	}
	else
	cout << "Tumpukan kosong\n";
}

void bersih()
{
	T.atas =- 1;
	cout << "Tumpukan kosong!\n";
}

main(void)
{
	int pil, data;
	awal();
	do
	{
		cout << "\n1. Input\n2. Hapus\n3. Tampil\n4. Bersihkan\n5. Keluar\nMasukan pilihan : ";
		cin >> pil;
		
		switch (pil)
		{
			case 1:
				cout << " Masukan data ="; 
				cin >> data;
				input (data);
			break;
			
			case 2:
				hapus() ;
			break;
			
			case 3:
				tampil();
			break;
			
			case 4:
				bersih();
			break;
			
			case 5:
			cout << "Terimakasih, tekan enter untuk keluarr";	
		}
		getch();
	}
	while (pil != 5);
	
}

