#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int menu;
	awal:
	cout<<"-----------------------"<<endl;
	cout<<"\t\tMENU MAKANAN KEDAI AYAM"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"1. Ayam Goreng : Rp.17000 "<<endl;
	cout<<"2. Ayam Bakar  : Rp.21000 "<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Pilih Menu Ayam : "; cin>>menu;

	int ag, ab,x,y;
	if (menu==1){
		cout<<"Jumlah pesanan Ayam Goreng :";cin>>ag;
		cout<<"Pilihan : \n"
			<<"1. Selesai memesan\n"
			<<"2. Kembali ke tampilan Menu\n"
			<<"Pilihan Anda :";cin>>x;
			if(x==2){
				goto awal;
			}else{goto lanjut;
			}
	}
	else{
		cout<<"Jumlah pesanan Ayam Bakar :";cin>>ab;
		cout<<"Pilihan : \n"
			<<"1. Selesai memesan\n"
			<<"2. Kembali ke tampilan Menu\n"
			<<"Pilihan Anda :";cin>>x;
			if(x==2){
				goto awal;
			}else{goto lanjut;

			}
	}
	lanjut:
	cout<<"=====================================\n";
		int jumlah, total, diskon;
		jumlah = (ab*21000)+(ag*17000);
		if(jumlah>45000){
			total =jumlah * 9/10;
			diskon = jumlah * 1/10;
		}
		cout<<"Struk Harga :\n"
			<<"Ayam goreng : "<<ag<<"\n"
			<<"Jumlah Bayar Ayam goreng : "<<ag*17000<<"\n"
			<<"Ayam Bakar : "<<ab<<"\n"
			<<"Jumlah Bayar Ayam Bakar : "<<ab*21000<<"\n"
			<<"Diskon : "<<diskon<<"\n"
			<<"Total Bayar : "<<total<<endl;


			return 0;
		}
