#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class DATE
{
	private:	
		int Day;
		int Month;
		int Year;
	public:
		void NHAP();
		void XUAT();
};
class nhanSu
{
	private:
		char MaNhanSu[10];
		char Hoten[30];
		DATE NS;		
	public:
		void NHAP();
		void XUAT();
};
void nhanSu::NHAP()
{
	cout<<"Nhap ma nhan su: ";			fflush(stdin);			gets(MaNhanSu);	
	cout<<"Nhap Ho va Ten: ";			fflush(stdin);			gets(Hoten);	
}
void DATE::NHAP()
{
	cout<<"Ngay : ";	cin>>Day;
	cout<<"Month : ";	cin>>Month;
	cout<<"year : ";	cin>>Year;
}
void DATE::XUAT()
{
	cout<<"\nNAM SINH : "<<Day<<"/"<<Month<<"/"<<Year;
}	
void nhanSu::XUAT()
{
	cout<<"\nMA NHAN SU : "<<MaNhanSu;
	cout<<"\nHO VA TEN : "<<Hoten;
}				
int main()
{
	nhanSu x;
	DATE y;
	x.NHAP();
	y.NHAP();
	x.XUAT();
	y.XUAT();
return 0;
}

