#include<iostream>
#include<conio.h>
using namespace std;

class hitung{ 
	friend ostream& operator<<(ostream&,const hitung&);
	friend istream& operator>>(istream&,hitung&);
	private:
		string nama;
		int jml,menu[10];
		int ayamgeprek, ayamgoreng, udanggoreng, cumigoreng, ayambakar,ayamgep,ayamgor,udanggor,cumigor,abak;
		float jarak,subtotal,ongkir,ongkir_akhir,diskon,total,totalakhir;
	public :
		void hitung_pilihan();
		void hitung_pesanan();
		void hitung_diskon();
};
	istream& operator>>(istream& in,hitung& masukan)
	{
		cout<<"Nama Pemesan : ";
		in>>masukan.nama;
		cout<<"-----------------------"<<endl;
		cout<<"\t\tMENU MAKANAN "<<endl;
		cout<<"-----------------------"<<endl;
		cout<<"1. Ayam Geprek  : Rp.21000 "<<endl;
		cout<<"2. Ayam Goreng : Rp.17000 "<<endl;
		cout<<"3. Udang Goreng : Rp. 19000"<<endl;
		cout<<"4. Cumi Goreng : Rp.20000"<<endl;
		cout<<"5. Ayam Bakar : Rp.25000"<<endl;
		cout<<"-----------------------"<<endl;
	}
	void hitung::hitung_pilihan(){
	cout<<"Inputkan 5 untuk seluruh jenis makanan yg ada : ";
	cin>>jml;
		for(int i=0; i<jml; i++){
		cout<<"Menu yang diinginkan : "; 
		cin>>menu[i];

		if(menu[i]==1){
			cout<<"Jumlah pesanan Ayam Geprek : ";
			cin>>ayamgep;
		}
		else if(menu[i] == 2){
			cout<<"Jumlah pesanan Ayam Goreng : ";
			cin>>ayamgor;
		}
		else if(menu[i] == 3){
			cout<<"Jumlah pesanan Udang Goreng : ";
			cin>>udanggor;
		}
		else if(menu[i] == 4){
			cout<<"Jumlah pesanan Cumi Goreng : ";
			cin>>cumigor;
		}
		else if(menu[i] == 5){
			cout<<"Jumlah pesanan Ayam Bakar : ";
			cin>>abak;
		}
	}
		cout<<"Masukan jarak dari lokasi (km):";
		cin>>jarak;
		
		if(jarak<3){
			ongkir =15000;
		}else{ongkir=25000;
		}
	}
	void hitung::hitung_pesanan(){
		ayamgeprek = (ayamgep * 21000) ;
		ayamgoreng = (ayamgor * 17000) ;
		udanggoreng = (udanggor * 19000) ; 
		cumigoreng = (cumigor * 20000) ;
		ayambakar = (abak * 25000) ;
		subtotal = ayamgeprek+ ayamgoreng+ udanggoreng+ cumigoreng+ ayambakar;
	}
	void hitung::hitung_diskon(){
		if(subtotal>50000){
			diskon = subtotal*0,15;
			ongkir_akhir= ongkir-5000;
			total = subtotal-diskon;
			totalakhir = ongkir_akhir+total;
		}
		else if(subtotal>150000){
			diskon = subtotal*0,35;
			ongkir_akhir= ongkir-8000;
			total = subtotal-diskon;
			totalakhir = ongkir_akhir+total;
		}
	}
	ostream& operator<<(ostream&, const hitung& keluaran)
	{
		cout<<"STRUK PEMBAYARAN\n"
			<<"====================\n";
		
		cout<<"Jumlah Pesanan setelah Diskon : Rp."<<keluaran.total<<endl;
		cout<<"Ongkir : Rp."<<keluaran.ongkir<<endl;
		cout<<"Ongkir Sesudah potongan : Rp."<<keluaran.ongkir_akhir<<endl;
		cout<<"Total Pembayaran Akhir : Rp."<<keluaran.totalakhir<<endl;
	}
	main()
	{
		hitung x;
		cin>>x;
		x.hitung_pilihan();
		x.hitung_pesanan();
		x.hitung_diskon();
		cout<<x;
		getch();
	}
