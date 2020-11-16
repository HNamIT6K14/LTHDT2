#include<bits/stdc++.h>
using namespace std;
class CanBo
{
	private:
		char macanbo[12];
		char hovaten[20];
		char ngaysinh[15];
		int songaylam;
	public:
	 void nhap();
	 int tinhLuong();
	 void xuat();
};
void CanBo::nhap()
{
	cout<<"Nhap ma can bo: ";	fflush(stdin);	gets(macanbo);
	cout<<"Nhap Ho va Ten: ";	fflush(stdin);	gets(hovaten);
	cout<<"Nhap ngay sinh: ";	fflush(stdin);	gets(ngaysinh);
	cout<<"Nhap so ngay lam trong 1 thang: ";	cin>>songaylam;
}
int CanBo::tinhLuong()
{
	return songaylam*250000;
}
void CanBo::xuat()
{
	cout<<"\n"<<setw(12)<<macanbo;
	cout<<setw(20)<<hovaten;
	cout<<setw(15)<<ngaysinh;
	cout<<setw(15)<<songaylam;
	cout<<setw(15)<<tinhLuong()<<endl;
}	
int main()
{
	CanBo x;
	x.nhap();
	cout<<"\n\n\t\t===============TIEN LUONG===============\n\n";
	cout<<setw(12)<<"Ma can bo"<<setw(20)<<"Ho va Ten"<<setw(15)<<"Ngay sinh"<<setw(15)<<"So ngay lam"<<setw(15)<<"Luong\n";
	x.xuat();
return 0;
}

