#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class hinhthang{
	public:
		float day_lon;
		float day_nho;
		float chieu_cao;
		void nhap();
		void xuat();
		float dien_tich();	
};
void hinhthang::nhap(){
	cout<<"Day lon = "; cin>>day_lon;
	cout<<"Day nho = "; cin>>day_nho;
	cout<<"Chieu cao = "; cin>>chieu_cao;
}
void hinhthang::xuat(){
	cout<<"\nDay lon : "<<day_lon;
	cout<<"\nDay nho : "<<day_nho;
	cout<<"\nChieu cao : "<<chieu_cao;	
}
float hinhthang::dien_tich(){
	return (day_lon+day_nho)*chieu_cao*1/2;
}
int main()
{
	hinhthang hinhthang1;
	hinhthang1.nhap();
	system("cls");
	cout<<"\n\n";
	hinhthang1.xuat();
	cout<<"\nDien tich cua hinh thang la: "<<hinhthang1.dien_tich();
return 0;
}

