#include <iostream>
#include <conio.h>
#include <windows.h>
#define MAX 10

using namespace std;

int nomor[MAX];
int head=-1, tail=-1, k=1;

bool IsEmpty()
{
	if (tail ==-1)
	{
	return true;
}
	else
	{
	return false;
	}
}
bool IsFull()
{
	if(tail == MAX-1)
	{
		return true;
	}
	else
	{
		tail++;
	}

}

void Masuk(int ya)
{
	if(IsEmpty())
	{
		head=tail=0;
	}
	else
	{
		tail++;
	}
	nomor[tail]=ya;
	}
	
void Keluar()
{
	if(IsEmpty())
	{
		cout<<"Antrian sudah kosong ! ";
		
	}
	else
	{
		for(int j=head;j<tail;j++)
		{
			nomor[j]=nomor[j+1];
		}
		tail--;
		if(tail == -1)
		{
			head = -1;
		}
	}
}

void Clear()
{
	head = tail =-1;
	k=1;
}

void View()
{
	if (IsEmpty())
	{
		cout << "Antrian kosong ! ";
	}
	else
	{
		{
			int j;
				cout <<endl;
					cout << "== No. Antrian yang telah dilayani =="<<endl;
				for(int k=1;k<=j;k++)
				{
					cout << "---------------------------"<<endl;
					cout <<  " No. Antrian : [" <<     k     << "]"<<endl;
					cout << "---------------------------"<<endl;
				}
					cout <<endl;
					cout <<endl;
				cout <<"== No. Antrian yang Belum dilayani =="<<endl;
			for(j=head; j<=tail; j++)
			{
				cout << "----------------------------"<<endl;
				cout << "No, Antrian : [" << nomor[j] << "]"<<endl;
				cout << "----------------------------"<<endl;

			}
		}
	}
}
		
int main(){
	int pilihan, urutan;
	do
	{
		system("cls");
			cout << "\n==== PROGRAM ANTRIAN BANK ===="<<endl;
			cout << "================================"<<endl;
			cout << "|1. Tambahkan Antrian          |"<<endl;
			cout << "|2. Panggilan Antrian          |"<<endl;
			cout << "|3. Lihat semua daftar         |"<<endl;
			cout << "|4. Hapus semua daftar         |"<<endl;
			cout << "|5. Exit                       |"<<endl;
			cout << "================================"<<endl;
		cout <<"\nPilih : "; 
		cin >> pilihan;
		cout <<endl;
		if(pilihan == 1)
		{
			if(IsFull()) 
			{
				cout <<"Antrian sudah penuh, mohon tunggu beberapa saat lagi";
			}
			else
			{
				urutan=k;
				Masuk(urutan);
				cout << "No. Antrian			: "<< k<<endl;
				cout << "Antrian yang Menunggu  : "<< tail<<endl;
				k++;
			}
		}
		else if(pilihan == 2)
		{
				cout <<"No. Antrian : "<< nomor[head] <<endl;
				Keluar();
				cout <<"Silahkan! Anda Dipanggil!" <<endl; 
		}
		else if(pilihan == 3)
		{
			View();
		}
		else if(pilihan == 4)
		{
			Clear();
			cout <<"Antrian Berhasil Dikosongkan ! ";
		}
		else if (pilihan == 5)
		{
		}
		else
		{
			cout << "Input yang dimasukan anda salah ! "<<endl;
		}
		getch();
	}
	while(pilihan!=5);
}


