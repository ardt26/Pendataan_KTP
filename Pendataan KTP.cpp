#include <bits/stdc++.h>
using namespace std;

struct data{
	string nama,jk,tempat_lahir,bulan_lahir,tanggal_lahir;
	} biodata[100];

int main ()
{
	int jumdat,menu,j = 1;
	char lagi;
	string cari_nama, cari_gender, cari_tl;
	bool ada = 0;
	
	cout<<"_____ PROGRAM PENDATAAN KARTU TANDA PENDUDUK (KTP) _____"<<endl<<endl;
	cout<<"Jumlah data yang akan dimasukkan : "; cin>>jumdat;
	
	for (int i = 0; i < jumdat; i++)
	{
		cout<<endl;
		cout<<"Data ke-"<<i+1<<" :\n";
		cout<<"Nama Panggilan (dengan huruf kecil)\t : ";cin>>biodata[i].nama;
		cout<<"Jenis Kelamin (p/w)\t\t\t : ";cin>>biodata[i].jk;
		cout<<"Tempat Lahir \t\t\t\t : ";cin>>biodata[i].tempat_lahir;
		cout<<"Bulan Lahir (dengan huruf kecil)\t : ";cin>>biodata[i].bulan_lahir;
		cout<<"Tanggal Lahir\t\t\t\t : ";cin>>biodata[i].tanggal_lahir;
	}
	
	do
	{
		cout<<"\nMenu Pencarian Data : \n1. Nama Penduduk\n2. Gender\n3. Tempat Lahir\nPilih opsi : ";cin>>menu;
		switch(menu)
		{
			case 1:
			cout<<"\nPencarian menurut nama :\nNama yang dicari : "; cin>>cari_nama;
			
			for (int i = 0; i < jumdat; i++)
			{	
				if (biodata[i].nama == cari_nama)
				{
					cout<<"No."<<j<<" :\n";
					cout<<"Nama\t\t: "<<biodata[i].nama<<endl;
					cout<<"Jenis Kelamin\t: "<<biodata[i].jk<<endl;
					cout<<"Tempat Lahir\t: "<<biodata[i].tempat_lahir<<endl;
					cout<<"Bulan Lahir\t: "<<biodata[i].bulan_lahir<<endl;
					cout<<"Tanggal Lahir\t: "<<biodata[i].tanggal_lahir<<endl<<endl;
					ada = 1;
					j++;
				}
				else
				{
					if (ada == 0)
					{
						ada = 0;
					}
				}
			}
			break;
			
			case 2:
			cout<<"\nPencarian menurut gender :\nGender : "; cin>>cari_gender;
			
			for (int i = 0; i < jumdat; i++)
			{	
				if (biodata[i].jk == cari_gender)
				{
					cout<<"No."<<j<<" :\n";
					cout<<"Nama\t\t: "<<biodata[i].nama<<endl;
					cout<<"Jenis Kelamin\t: "<<biodata[i].jk<<endl;
					cout<<"Tempat Lahir\t: "<<biodata[i].tempat_lahir<<endl;
					cout<<"Bulan Lahir\t: "<<biodata[i].bulan_lahir<<endl;
					cout<<"Tanggal Lahir\t: "<<biodata[i].tanggal_lahir<<endl<<endl;
					ada = 1;
					j++;
				}
				else
				{
					if (ada == 0)
					{
						ada = 0;
					}
				}
			}
			break;
			
			case 3:
			cout<<"\nPencarian menurut tempat lahir :\nTempat yang dicari : "; cin>>cari_tl;
			
			for (int i = 0; i < jumdat; i++)
			{	
				if (biodata[i].tempat_lahir == cari_tl)
				{
					cout<<"No."<<j<<" :\n";
					cout<<"Nama\t\t: "<<biodata[i].nama<<endl;
					cout<<"Jenis Kelamin\t: "<<biodata[i].jk<<endl;
					cout<<"Tempat Lahir\t: "<<biodata[i].tempat_lahir<<endl;
					cout<<"Bulan Lahir\t: "<<biodata[i].bulan_lahir<<endl;
					cout<<"Tanggal Lahir\t: "<<biodata[i].tanggal_lahir<<endl<<endl;
					ada = 1;
					j++;
				}
				else
				{
					if (ada == 0)
					{
						ada = 0;
					}
				}
			}
			break;
			
			default:
			break;	
		}
		
		if (ada == 0)
		{
			cout<<"Data tidak ditemukan\n";
		}
		cout<<"Mau mencari data lagi (y/n) ? ";cin>>lagi;
		if (lagi == 'y')
		{
			ada = 0;
			j = 1;
		}
		else if(lagi == 'n')
		{
			cout<<"Pencarian Selesai\n";
			system("pause");
			exit(0);
		}
	}while(lagi=='y');
}
