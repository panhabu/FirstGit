#include<iostream>

using namespace std;

class SoPhuc{
	int pa,pt;
	public :
		SoPhuc(){
		};
		friend istream &operator >>(istream &inp,SoPhuc &p);
		friend ostream &operator <<(ostream &out,SoPhuc p);
		SoPhuc operator + (SoPhuc p){
			SoPhuc p2 ;
			//co the dung con tro this hoac k 
			p2.pa = pa + p.pa;
			p2.pt = pt + p.pt;
			return p2; 
		}
		//Gan lien tiep a= b=c khi dung gan thi khong cong duoc 
//	SoPhuc &operator = (SoPhuc &p){
//			this -> pa = p.pa;
//			this -> pt = p.pt;
//			return (*this);
//		}
	
		void operator = (const SoPhuc &p){//neu gan 2 phan tu voi nhau
			pa = p.pa;
			pt = p.pt;
		}
};

istream &operator >>(istream &inp,SoPhuc &p){
	cout<<"Nhap phan ao:";
	inp>>p.pa;
	cout<<"Nhap phan thuc:";
	inp>>p.pt;
	return inp;
}

ostream &operator <<(ostream &out,SoPhuc p){
	out<<"So phuc:"<<p.pa <<"i"<<p.pt<<endl;
	return out;
}

int main(){
	SoPhuc p1,p2;
	cin>>p1;
	cin>>p2;
	cout<<"Truoc khi gan:"<<endl;
	cout<<p1;
	cout<<p2;
	cout<<"Sau khi gan"<<endl;
	p1 = p2;
	cout<<p1;
	SoPhuc p3;
	p3 = p1 + p2;
	cout<<"Ket qua:";
	cout<<p3;
//	p1 = p2 = p3;
//	cout <<p1<<p2;
	return 0;
}