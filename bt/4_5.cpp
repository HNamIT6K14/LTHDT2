#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class DATE{
	private:
		int d,m,y;
	friend class NhanSu;	
};
class NhanSu{
	private:
		char HoTen[20];
		DATE NS;
		char SoCMND[20];
	public:
		void Nhap();
		void Xuat();	
	friend 	void SapXep(NhanSu x[],int n);
};
void NhanSu::Nhap(){
	cout<<"\nENTER NAME : "; 		fflush(stdin);		gets(HoTen);
	cout<<"\nENTER BIRTHDAY : ";	cin>>NS.d>>NS.m>>NS.y;
	cout<<"\nENTER PERSON CODE :";	fflush(stdin);		gets(SoCMND);
}
void NhanSu::Xuat(){
	cout<<setw(20)<<left<<HoTen<<setw(20)<<left<<SoCMND<<setw(3)<<left<<NS.d<<setw(3)<<left<<NS.m<<setw(4)<<left<<NS.y<<endl;
}
void title(){
	cout<<setw(20)<<left<<"HO TEN"<<setw(20)<<left<<"SO CMND"<<setw(20)<<left<<"NGAY SINH"<<endl;
}
void SapXep(NhanSu x[],int n){
	for(int i=0; i<n-1; i++)
	for(int j=i+1; j<n; j++)
		if(strcmp(x[i].HoTen,x[j].HoTen)>0)
		swap(x[i],x[j]);
}	
int main()
{
	NhanSu x[100];
	int n;
	cout<<"\nENTER NUMBER OF EMPLOYEES : ";		cin>>n;
	for(int i=0; i<n; i++){
		x[i].Nhap();	
	}
	title();
	SapXep(x,n);
	for(int i=0; i<n; i++){
		x[i].Xuat();	
	}	

return 0;
}

