#include<iostream>
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class xeHoi{
	private:
		char nhanHieu[10];
		char hangSX[10];
		char kieuDang[15];
		char mau[10];
		int namSX;
		char xuatSu[15];
		int giaBan;
	public:
		void Nhap();
		void Xuat();
	friend 	void swap(xeHoi xe[], int n);
	friend 	void toyota(xeHoi xe[], int n);
};
void xeHoi::Nhap(){
	cout<<"NHAN HIEU : ";		fflush(stdin);		gets(nhanHieu);
	cout<<"HANG SAN XUAT : ";	fflush(stdin);		gets(hangSX);
	cout<<"KIEU DANG : ";		fflush(stdin);		gets(kieuDang);
	cout<<"MAU : ";				fflush(stdin);		gets(mau);
	cout<<"NAM SAN XUAT : ";	cin>>namSX;
	cout<<"XUAT SU : ";			fflush(stdin);		gets(xuatSu);
	cout<<"GIA BAN : ";			cin>>giaBan;
}	
void xeHoi::Xuat(){
	cout<<setw(15)<<nhanHieu<<setw(15)<<hangSX<<setw(15)<<kieuDang<<setw(15)<<mau<<setw(15)<<namSX<<setw(15)<<xuatSu<<setw(15)<<giaBan<<endl;
}
void title(){	
	cout<<setw(15)<<"NHAN HIEU"<<setw(15)<<"HANG SX"<<setw(15)<<"KIEU DANG"<<setw(15)<<"MAU"<<setw(15)<<"NAM SX"<<setw(15)<<"XUAT SU"<<setw(15)<<"GIA BAN"<<endl;
}
void toyota(xeHoi xe[], int n)
{
	title();
	for(int i=0; i<n; i++)
	if(strcmp(xe[i].hangSX,"TOYOTA")==0)
	xe[i].Xuat();
}	
void swap(xeHoi xe[], int n){
	for(int i=0; i<n-1;i++)
	for(int j=i+1; j<n;j++)	
	if(xe[i].giaBan>xe[j].giaBan)
	{
		xeHoi xeTG=xe[i];
		xe[i]=xe[j];
		xe[j]=xeTG;	
	}
}

int main()
{	
	xeHoi xe[100];
	int n;
	cout<<"NHAP SO LUONG XE HOI : ";	cin>>n;
	cout<<"\n\n\t\t==========NHAP DANH SACH XE HOI============\n\n";
	for(int i=0; i<n; i++)
	xe[i].Nhap();
	cout<<"\n\n\t\t==============CAC XE HANG TOYOTA===========\n\n";
	toyota(xe,n);
	swap(xe,n);
	cout<<"\n\n\t\t========DANH SACH XE GIA TANG DAN==========\n\n";
	title();
	for(int i=0; i<n; i++)
	xe[i].Xuat();

return 0;
}

