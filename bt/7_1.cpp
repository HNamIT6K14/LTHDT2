#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Date
{
	int d,m,y;
	public:
		void Nhap();
		void Xuat();
};
void Date::Nhap()
{
	cout<<"\nNhap ngay thang nam: ";
	cin>>d>>m>>y;
}
void Date::Xuat()
{
	cout<<"Ngay Nhap: "<<d<<"/"<<m<<"/"<<y<<endl;
}
class NSX
{
	char tenNSX[20];
	char diaChi[20];
	public:
		void Nhap();
		void Xuat();
};
void NSX::Nhap()
{
	cout<<"\nTen Nha San Xuat: "; fflush(stdin); gets(tenNSX);
	cout<<"Dia Chi: ";		      fflush(stdin); gets(diaChi);
}
void NSX::Xuat()					
{
	cout<<"Ten Nha San Xuat: "<<tenNSX<<endl;
	cout<<"Dia Chi: "<<diaChi<<endl;
}
class Hang
{
	protected:
		char tenHang[20];
		NSX x;
		float donGia;
	public:
		void Nhap();
		void Xuat();
		Hang(){}	
};
void Hang::Nhap()
{
	cout<<"\nTen Hang: "; fflush(stdin); gets(tenHang);
	x.Nhap();
	cout<<"Don Gia: "; cin>>donGia;
}
void Hang::Xuat()
{
	cout<<"Ten Hang: "<<tenHang<<endl;
	x.Xuat();
	cout<<"Don Gia: "<<donGia<<endl;	
}
class Tivi : public Hang 
{
	int kichThuoc;
	Date ngayNhap;
	public:
		void Nhap();
		void Xuat();
		Tivi(){}
};
void Tivi::Nhap()
{
	cout<<"\nKich Thuoc: "; cin>>kichThuoc;
	ngayNhap.Nhap();
	Hang::Nhap();
}	
void Tivi::Xuat()
{
	cout<<"\nKich Thuoc: "<<kichThuoc<<endl;
	ngayNhap.Xuat();
	Hang::Xuat();
}	
int main()
{
	Tivi TV;
	TV.Nhap();
	cout<<"\n\n========>>THONG TIN TIVI<<==========\n\n";
	TV.Xuat();
system("pause");
return 0;
}

