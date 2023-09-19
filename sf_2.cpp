#include<bits/stdc++.h>

using namespace std;

class Diem{
	float hd,td;
	public:
	Diem (){
		hd = 0 ; td =0;
	};
	friend istream &operator >> (istream & inp , Diem &d);
	friend ostream &operator <<(ostream &out, Diem d);
	Diem operator * (Diem d){
		Diem d1 ;
		d1.hd = this ->hd *d.hd;
		d1.td = this ->td *d.td;
		return d1;
	}
	float kc (Diem d){
		float kc = 0;
		kc = sqrt(pow(d.hd-this->hd,2) + pow(d.td - this ->td,2));
		return kc;
	}
};

istream &operator >> (istream &inp ,Diem &d){
	cout<<"Nhap hoanh do:";
	inp >> d.hd ;
	cout<<"Nhap tung do:";
	inp>> d.td;
	return inp;
}

ostream &operator <<(ostream &out,Diem d){
	out <<"("<<d.hd<<","<<d.td<<")"<<endl;
	return out;
}

int main(){
	Diem d1,d2,d3;
	cin >>d1;
	cin >>d2;
	cout<<d1;
	cout <<d2;
	d3 = d1 *d2 ;
	cout<<d3 ;
	cout<<d1.kc(d2);
	return 0;
}



