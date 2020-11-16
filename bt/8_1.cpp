#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<fstream>
using namespace std;
class nhaCC
{
	private:
		char maNCC[15];
		char tenNCC[20];
		char diaChi[30];
	public:
		void Nhap();
		void Xuat();
};
void nhaCC::Nhap()	
{
	cout<<"\nMa Nha Cung Cap: ";	fflush(stdin); gets(maNCC);
	cout<<"Ten Nha Cung Cap: ";		fflush(stdin); gets(tenNCC);
	cout<<"Dia Chi: "; 				fflush(stdin); gets(diaChi);
}
void nhaCC::Xuat()
{
	cout<<endl<<setw(20)<<"Ma NCC: "<<setw(15)<<maNCC<<setw(30)<<"Ten NCC: "<<setw(20)<<tenNCC<<endl;	
	cout<<endl<<setw(20)<<"Dia Chi: "<<diaChi<<endl;
}
class hangHoa
{
	private:	
		char tenHang[20];
		float donGia;
		int soLuong;
	public:
		void Nhap();
		float thanhTien();
		void Xuat();
	friend class phieu;			
};
void hangHoa::Nhap()
{
	cout<<"\nTen Hang: "; fflush(stdin); gets(tenHang);
	cout<<"Dong Gia: "; cin>>donGia;
	cout<<"So Luong: "; cin>>soLuong;
}
float hangHoa::thanhTien()
{
	return soLuong*donGia;
}
void hangHoa::Xuat()
{
	cout<<setw(20)<<tenHang<<setw(20)<<donGia<<setw(20)<<soLuong<<setw(20)<<thanhTien()<<endl;
}	
class phieu
{
	private:
		char maPhieu[15];
		char ngayLap[15];
		nhaCC x;
		hangHoa a[100];
		int n;
		public:
		void Nhap();
		float tongTien();
		void Xuat();
};
void phieu::Nhap()
{
	cout<<"\nMa Phieu: "; fflush(stdin); gets(maPhieu);
	cout<<"Ngay Lap: "; fflush(stdin);	gets(ngayLap);
	x.Nhap();
	cout<<"So Luong Hang Hoa: "; cin>>n;
	for(int i=0; i<n; i++)
	{	
		cout<<"\nHang Hoa "<<i+1;
		a[i].Nhap();
	}	
}
float phieu::tongTien()
{	
	float Sum=0;
	for(int i=0; i<n; i++)
	{
		Sum+=a[i].thanhTien();
	}
	return Sum;
}
void title()
{
	cout<<endl<<setw(20)<<"Ten Hang"<<setw(20)<<"Don Gia"<<setw(20)<<"So Luong"<<setw(20)<<"Thanh Tien"<<endl;
}		
void phieu::Xuat()
{
	cout<<setw(20)<<"Ma Phieu: "<<setw(15)<<maPhieu<<setw(30)<<"Ngay Lap: "<<setw(15)<<ngayLap<<endl;
	x.Xuat();
	title();
	for(int i=0; i<n; i++)
	a[i].Xuat();
	cout<<setw(60)<<"Tong Thanh Tien"<<setw(20)<<tongTien()<<endl;
}			
int main()
{
	phieu p;
	p.Nhap();
	cout<<"\n\n==========================PHIEU NHAP HANG================================\n\n";
	p.Xuat();
	system("pause");
return 0;
}

