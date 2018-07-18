#include <iostream>
using namespace std;

class jarak_tempuh{
	private :
		double t;
		int kg=1000;
	public:
		double v, wb, wt, s, tb;


void isi(){
	cout<<"\t\tGo-Send"<<endl;
	cout<<"============================================"<<endl;
	cout<<"Masukkan Kecepatan Rata-Rata (km/s) = "; cin>>v;
	cout<<"Masukkan Waktu berangkat	= "; cin>>wb;
	cout<<"Masukkan Waktu tiba		= "; cin>>wt;
	}

int rumus(){
	t=wt-wb; //waktu tempuh
	s=v*t; //jarak tempuh
	tb=s*kg; //harga
	}

void tampil (){
	cout<<endl<<"====================================="<<endl;
	cout<<"Waktu Tempuh =  "<<t<<"  jam"<<endl;
	cout<<"Jarak Tempuh =  "<<s<<"  km"<<endl;
	cout<<"Total Bayar  = Rp "<<tb<<endl;
	}
	
};

int main(){
jarak_tempuh JT;
JT.isi();
JT.rumus();
JT.tampil();
}

