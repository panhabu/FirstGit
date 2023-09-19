#include<bits/stdc++.h>

using namespace std;

class DT{
	int n;
	float *a;
	public:
		friend istream &operator >>(istream &inp,DT &dt);
		friend ostream &operator <<(ostream &out,DT dt);
		float gia_tri(float x);
		void operator =(DT & dt){
			n =dt.n;
			a = new float [dt.n+1];
			for(int i = 0; i  <= n ; i++){
				  a[i] = dt.a[i];
			}
		}
};

istream &operator >>(istream &inp,DT &dt){
	cout<<"Nhap bac da thuc:";
	cin>>dt.n;
	dt.a = new float [dt.n+1];
	for(int i = 0; i <= dt.n ;i ++){
		cin >>dt.a[i];
	}
}

ostream &operator <<(ostream &out,DT dt){
	for(int i = 0; i  <= dt.n; i++){
		if(i==0){
		cout<<dt.a[i];
	}
	else cout<<"+"<<dt.a[i]<<"x^"<<i;
	}
	cout<<endl;
}

float DT::gia_tri(float x){
	float gt = 0 ;
	for(int i = 0; i <=n ;i++){
		gt += a[i] * pow(x,i);
	}
	return gt ;
}
int main(){
	DT a,b ;
	cin>>a;
	cout<<a;
	float x ;
	cout<<"Nhap x:";
	cin>>x;
	cout<<"Gia tri:"<<a.gia_tri(x)<<endl;
	b = a;
	cout<<"Da thuc:";
	cout<<b;
	return 0;
}