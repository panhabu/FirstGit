#include<bits/stdc++.h>

using namespace std;

class TS{
	string ht;
	float diem;
	string msv;

	public:
		TS (){
		diem = 0; 
		ht = "";
		msv ="";
		}
	friend istream &operator >>(istream& cin , TS &a);
	friend ostream &operator <<(ostream &out, TS a);
	bool operator< (TS b); // phuong thuc cua ham nen chi can 1 doi so 
	float tk(TS *a,int n);
	float hl(TS *a,int n);
	void sxep(TS *a, int n);
};

istream &operator >> (istream &cin , TS &a){
		cout<<"Nhap ma sinh vien:";
		getline(cin,a.msv);
		cout<<"Nhap ten:";
		getline(cin,a.ht);
		cout<<"Nhap diem:";
		cin>>a.diem;
		cin.ignore();	
	return cin;
}

ostream  &operator << (ostream &out, TS a){
		out<<"Ma sinh vien: "<<a.msv<<endl;
		out<<"Ten sinh vien:"<<a.ht<<endl;
		out<<"Diem :"<<a.diem<<endl;
	return out;
}

float TS:: tk(TS *a,int n){
	int max = 0,pos = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(a[i].diem > max){
			pos  = i;
		}
	}
	return pos ;
}

float TS ::hl(TS *a,int n){
	int res = 0;
	for( int i = 0; i < n; i++){
		if(a[i].diem <4){
			res = i;	
		}
	}
	return res ;
}

bool TS :: operator < (TS a){
	return this->diem < a.diem ;
}
int main(){
	TS *a;
	int n ;
	cout<<"Nhap n:";
	cin >> n; 
	cin.ignore();
	a = new TS [n];
	for(int i = 0 ;i < n ; i++ ){
		cin >>a[i];
	}
	
	for(int i = 0; i < n ;i ++){
		cout<<a[i];
	}
	cout<<"Sinh vien co diem cao nhat:"<<endl;
	int pos = a->tk(a,n);
	cout<<a[pos];
	cout<<"Sinh vien hoc lai:"<<endl;
	int res = a->hl(a,n);
	if(res != 0){
	cout<<a[res];
	}else{
		cout<<"Khong co sinh vien hoc lai"<<endl;
	}
	cout<<"Sap xep tu be den lon:"<<endl;
	sort(a,a +n);
	for(int i = 0; i < n ;i ++){
		cout<<a[i];
	}
	
	return 0;
}