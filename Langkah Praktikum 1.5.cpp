#include<iostream>
#include<conio.h>
using namespace std;

class hitung{
	friend ostream& operator<<(ostream&,const hitung&);
	friend istream& operator>>(istream&,hitung&);
public:
	hitung();
	void hitung_jumlahnya(){jumlah= (a+b+c);}
private:
	int a,b,c;
	int jumlah;
};

hitung::hitung(){
	cout<<"Program menghitung jumlah 3 integer\n";
	cout<<"Selamat berkarya\n";
}
istream& operator>>(istream& in, hitung& masukan){
	cout<<"Masukkan nilai a : ";
	cin>>masukan.a;
	cout<<"Masukkan nilai b : ";
	cin>>masukan.b;
	cout<<"Masukkan nilai c : ";
	cin>>masukan.c;
	return in;
}
ostream& operator<<(ostream&out,const hitung&keluaran){
	cout<<"Nilai a :"<<keluaran.a<<endl;
	cout<<"Nilai b :"<<keluaran.b<<endl;
	cout<<"Nilai c :"<<keluaran.c<<endl;
	cout<<"Jumlah 3 integer diatas:"<<keluaran.jumlah<<endl;
	return out;
}
int main(){
	hitung X;
	cin>>X;
	X.hitung_jumlahnya();
	cout<<X;
	getch();
	return 0;
}
