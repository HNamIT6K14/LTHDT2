#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class printer
{
	protected:
		int trongLuong;
		char hangSX[20];
		int namSX;
		int tocDo;
};
class dotprinter : public printer 
{
	private:
		int matDoKim;
	public:
		void nhap();
		void xuat();	
};
void dotprinter::nhap()	
{
	cout<<"\nTrong Luong: "; cin>>trongLuong;
	cout<<"Hang SX: "; fflush(stdin); gets(hangSX);
	cout<<"Toc Do: "; cin>>tocDo;
	cout<<"Mat Do Kim: "; cin>>matDoKim;
}
void dotprinter::xuat()	
{
	cout<<"\nTrong Luong: "<<trongLuong;
	cout<<"\nHang SX: "<<hangSX;
	cout<<"\nToc Do: "<<tocDo;
	cout<<"\nMat Do Kim: "<<matDoKim;
}
class laserprinter : public printer
{
	private:
		int doPhanGiai;
	public:
		void nhap();
		void xuat();
};
void laserprinter::nhap()	
{
	cout<<"\nTrong Luong: "; cin>>trongLuong;
	cout<<"Hang SX: "; fflush(stdin); gets(hangSX);
	cout<<"Toc Do: "; cin>>tocDo;
	cout<<"Do Phan Giai: "; cin>>doPhanGiai;
}	
void laserprinter::xuat()	
{
	cout<<"\nTrong Luong: "<<trongLuong;
	cout<<"\nHang SX: "<<hangSX;
	cout<<"\nToc Do: "<<tocDo;
	cout<<"\nDo Phan Giai: "<<doPhanGiai;
}
int main()
{
	dotprinter a;
	laserprinter b;
	cout<<"Nhap thong tin dotPRINTER:";
	a.nhap();
	cout<<"Nhap thong tin laserPRINTER:";
	b.nhap();
	cout<<"\n\n======THONG TIN dotPRINTER==========";
	a.xuat();
	cout<<"\n\n======THONG TIN laserPRINTER==========";
	b.xuat();
return 0;
}

