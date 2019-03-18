#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

class Hitung{
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&,  Hitung&);
	
	public:
	Hitung();
	void hitung_jumlahnya(){
		jumlah=(a+b+c);
		kurang=(a-b-c);
		bagi=((a/b)/c);
		kali=(a*b*c);
	}
	
private:
float a, b, c;
int jumlah, kurang, kali;
float bagi;

};


Hitung::Hitung(){
		cout<<"Program menghitung jumlah 3 integer\n";
		cout<<"selamat berkarya\n";
	}
	
	istream& operator>>(istream& in, Hitung& masukan){
		cout<<"Masukkan Nilai A : ";
		in>>masukan.a;
		cout<<"Masukkan Nilai B : ";
		in>>masukan.b;
		cout<<"Masukkan Nilai C : ";
		in>>masukan.c;
		return in;
		
	}

	ostream& operator<<(ostream& out, const Hitung& keluaran){
		out<<"Nilai A : "<<keluaran.a<<endl;
		out<<"Nilai B : "<<keluaran.b<<endl;
		out<<"Nilai C : "<<keluaran.c<<endl;
		
		out<<"\nPenjumlahan 3 integer diatas : "<<keluaran.jumlah<<endl;
		cout<<"Pembagian 3 integer diatas : "<<keluaran.bagi<<endl;
		cout<<"Perkalian 3 integer diatas : "<<keluaran.kali<<endl;
		cout<<"Pengurangan 3 integer diatas : "<<keluaran.kurang<<endl;
		
		return out;
	}




int main()
{
	Hitung X;
	cin>>X;
	X.hitung_jumlahnya();
	cout<<X;
	
	getch();

	return 0;
}
