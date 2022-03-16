#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,hsl;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi : "<<endl;
	cout<<"1.Penambahan"<<endl;
	cout<<"2.Pengurangan"<<endl;
	cout<<"3.Perkalian"<<endl;
	cout<<"4.Pembagian"<<endl;
	cout<<"Pilihan Menu no :"; cin>>a;
	cout<<"Bilangan Pertama :"; cin>>b;
	cout<<"Bilangan :"; cin>>c;
	
	if(a == 1)
	{
		hsl = b+c;
		cout<<" Hasil " <<b<< " + "<<c<<" = "<<hsl;
	}
	if(a == 2)
	{
		hsl = b-c;
		cout<<" Hasil " <<b<< " - "<<c<<" = "<<hsl;
	}
	if(a == 3)
	{
		hsl = b*c;
		cout<<" Hasil " <<b<< " x "<<c<<" = "<<hsl;
	}
	if(a == 4)
	{
		hsl = b/c;
		cout<<" Hasil " <<b<< " / "<<c<<" = "<<hsl;
	}
}
