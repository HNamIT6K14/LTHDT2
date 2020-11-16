#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class person
{
	protected:
	char hoTen[20];
	char ngaySinh[15];
	char que[20];
};
class kySu :public person
{	
	private:
		char nganh[20];
		int namTN;
	public:	
		void nhap();
		void xuat();	
	friend 	void xuatTN(kySu x[], int n);
};
void kySu::nhap()
{
	cout<<"\nHo va Ten: "; fflush(stdin); gets(hoTen);
	cout<<"Ngay Sinh: "; fflush(stdin); gets(ngaySinh);
	cout<<"Que: "; fflush(stdin); gets(que);
	cout<<"Nganh: "; fflush(stdin); gets(nganh);
	cout<<"Nam Tot Nghiep: "; cin>>namTN;
}
void title()
{
	cout<<setw(20)<<left<<"\nHo va Ten"<<setw(20)<<"Ngay Sinh"<<setw(20)<<"Que"<<setw(20)<<"Nganh"<<setw(20)<<"Nam Tot Nghiep"<<endl;
}
void kySu::xuat()
{
	cout<<setw(20)<<left<<hoTen<<setw(20)<<ngaySinh<<setw(20)<<que<<setw(20)<<nganh<<setw(20)<<namTN<<endl;
}
void xuatTN(kySu x[], int n)
{
	for(int i=0; i<n; i++)
	if(x[i].namTN=2020)
	x[i].xuat();	
}	
int main()
{
	int n;
	kySu x[100];
	cout<<"So ky su: "; cin>>n;
	for(int i=0; i<n; i++)
	x[i].nhap();
	title();
	for(int i=0; i<n; i++)
	x[i].xuat();
	cout<<"\n\nCac Ky Su Tot Nghiep Gan Day Nhat: \n\n\n";
	title();
	xuatTN(x,n);
return 0;
}

