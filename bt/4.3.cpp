#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class date;
class hang;
class date
{
	int d,m,y;
	friend class hang;
	friend void hangNam2017( hang h[], int n);
};
class hang
{
	private:
		char maHang[10];
		char tenHang[20];
		date ngaySX;
	public:
		void Nhap();
		void Xuat();
	friend void hangNam2017( hang h[], int n);		
};
void hang::Nhap()
{
	cout<<"NHAP MA HANG: "; fflush(stdin); gets(maHang);
	cout<<"NHAP TEN HANG: "; fflush(stdin); gets(tenHang);
	cout<<"NHAP NGAY SAN XUAT: ";
	cin>>ngaySX.d>>ngaySX.m>>ngaySX.y;
}
void hang::Xuat()
{
	cout<<setw(15)<<left<<maHang<<setw(20)<<tenHang<<ngaySX.d<<"/"<<ngaySX.m<<"/"<<ngaySX.y<<endl;
}
void title()
{
	cout<<setw(15)<<left<<"Ma Hang"<<setw(20)<<"Ten Hang"<<"Ngay San Xuat"<<endl;
}
void hangNam2017( hang h[], int n)
{
	title();
	for(int i=0; i<n; i++)
	{
		if(h[i].ngaySX.y==2017)
		h[i].Xuat();
	}
}	
int main()
{
	hang h[100];
	int n;
	cout<<"NHAP SO LUONG HANG HOA: ";	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Hang "<<i+1<<" : \n";
		h[i].Nhap();
	}
	cout<<"\n\n\t\t===============->CAC MAT HANG VUA NHAP<-================="<<endl;
	title();
	for(int i=0; i<n; i++)
	{
		h[i].Xuat();
	}
	cout<<"\n\n\t\t===============->CAC MAT HANG SAN XUAT NAM 2017<-================="<<endl;
	hangNam2017(h,n);
	system("pause");
return 0;
}

