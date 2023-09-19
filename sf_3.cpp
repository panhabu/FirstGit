#include<bits/stdc++.h>

using namespace std;

class DT{
	int n;
	float *a;
	public:
		void nhap();
		void xuat();
		float gia_tri(float x);
		void operator =(float dt[]){
			for(int i = 0; i  < n ; i++){
				dt[i] = a[i];
			}
		}
};

void DT::nhap(){
	cout<<"Nhap bac da thuc:";
	cin>>n;
	a = new float [n+1];
	for(int i = 0; i <= n ;i ++){
		cin >>a[i];
	}
}

void DT::xuat(){
	for(int i = 0; i  <= n; i++){
		if(i==0){
		cout<<a[i];
	}
	else cout<<"+"<<a[i]<<"x^"<<i;
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
	a.nhap();
	a.xuat();
	float x ;
	cout<<"Nhap x:";
	cin>>x;
	cout<<"Gia tri:"<<a.gia_tri(x)<<endl;
	b = a;
	cout<<"Da thuc:";
	b.xuat();
	return 0;
}