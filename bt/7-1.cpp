#include<bits/stdc++.h>
using namespace std;
class NSX{
	char tenNSX[20];
	char diaChi[20];
	public:
		void Nhap();
		void Xuat();
};	
void NSX::Nhap(){
	cout<<"TEN NHA SX: "; fflush(stdin);	gets(tenNSX);
	cout<<"DIA CHI: "; fflush(stdin);	gets(diaChi);	
}
void NSX::Xuat(){
	cout<<setw(20)<<"TEN NHA SX"<<setw(20)<<"DIA CHI"<<endl;
	cout<<setw(20)<<tenNSX<<setw(20)<<diaChi<<endl;
}
class date{
	int d,m,y;
	public:
		void Nhap();
		void Xuat();
};
void date::Nhap(){
	cout<<"NHAP NGAY THANG NAM NHAP: ";
	cin>>d>>m>>y;
}
void date::Xuat(){
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
class hang{
	public:
		char tenHang[20];
		NSX x;
		int donGia;
	void Nhap();
	void Xuat();
	Hang(){}
};
void hang::Nhap(){
	cout<<setw(20)<<"TEN HANG"<<setw(20)<<"NGAY NHAP"<<setw(15)<<"DON GIA"<<endl;
	COUT<<setw(20)<<tenHang<<setw(20)<<x.<<	
}
class TV:public hang{
	int kichThuoc;
	date ngayNhap;
	public:
		void Nhap();
		void Xuat();
		TV(){}
};
int main()
{
	


return 0;
}

