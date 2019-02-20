#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
    char judul [50], pengarang[50], kode[4], tahun[4], harga[10];
 
};

Buku book[20 ];

unsigned int x,y;
void tambah ()
{
	
	cout<< "masukkan jumlah buku :  ";
	cin >>x;
	for (y=0;y<x;y++)
	{
		cout<<"\n============================="<<endl;
		cout<<"buku yang ke-"<<y+1<<endl;
		cout<<"============================="<<endl;
		
		cout<<"Kode buku		:";cin>>book[y].kode;
		cout<<"Judul buku		:";cin>>book[y].judul;
		cout<<"Tahun terbit		:";cin>>book[y].tahun;
		cout<<"pengarangarang		:";cin>>book[y].pengarang;
		cout<<"Harga			:";cin>>book[y].harga;
		cout<<" "<<endl;	
	}system("cls");
}

void tampil ()
{
	cout << "No. " << "Kode Buku\t" << "Nama Buku\t" << "Tahun Terbit\t" << "pengarangarang\t" << "Harga Buku\n" << endl;
			for (y=0;y<x;y++)
			{
				cout << y+ 1 << ". " << "\t" <<book[y].kode << "\t" <<book[y].judul << "\t\t" <<book[y].tahun << "\t\t" <<book[y].pengarang << "\t\t" << book[y].harga<<"\n"<< endl;
			}
			cin.get();cout<<"\n"<<endl;
}

void ubah()
{
	unsigned int z;
    cout << "Edit Data Buku yang ke-";
    cin >> z;
    z=z-1;
    cout<<"Kode buku		:";cin>>book[z].kode;
	cout<<"Judul buku		:";cin>>book[z].judul;
	cout<<"Tahun terbit		:";cin>>book[z].tahun;
	cout<<"pengarangarang		:";cin>>book[z].pengarang;
	cout<<"Harga			:";cin>>book[z].harga;
	cout<<" "<<endl;
 	tampil();
    system("cls");
	
}

void hapus ()
{
    int z,a;
    cout << "Hapus Data Buku ke-";
    cin >> z;
    z=z-1;
    y--;
    for (a=z;a<y;a++)
    {
       book[y]=book[y-1];
    }
    x=x-1;
    cout << "\t\t\tData Buku sudah Berhasil Dihapus"<<endl;
    getch();
	system("cls");

}

int main()
{
	int pilih;   
	menu :
    cout << "1. Masukan Data Buku"<<endl;
    cout << "2. Hapus Data Buku"<<endl;
    cout << "3. Ubah Data Buku "<<endl;
    cout << "4. Tampilihkan Data Buku"<<endl;
    cout << "5. Keluar"<<endl<<endl;
    cout << "Masukan pilihan : ";
	cin >> pilih;
	system("cls");

    switch (pilih)
    {
        case 1 :
        	tambah ();
			goto menu;
        	break;

        case 2 :
        	hapus();
        	goto menu;
        	break;

		case 3 :
			ubah();
			goto menu;
			break;
        
        case 4 :
        	tampil();
        	goto menu;
        	cout<<"\n"<<endl;
			break;

        case 5 :
            cout<<"Terimakasih"<<endl;
        break;

        default:
            cout << "Pilihan anda tidak ada! Silahkan Coba lagi"<<endl;
    }
    system("cls");
	return 0;
}
