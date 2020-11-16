#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	private:
		char TenDoanhNghiep[20];
		char DiaChiDN[15];
		int SoNV;
		int DoanhThu;
	public:
		void Nhap();
		void Xuat();	
};
void DoanhNghiep::Nhap(){
	cout<<"\nTEN DOANH NGHIEP : "; 		fflush(stdin); 	gets(TenDoanhNghiep);
	cout<<"\nDIA CHI DOANH NGHIEP : "; 	fflush(stdin); 	gets(DiaChiDN);
	cout<<"\nSO NHAN VIEN : "; cin>>SoNV;
	cout<<"\nDOANH THU : ";  	 cin>>DoanhThu;
}
void DoanhNghiep::Xuat(){
	cout<<setw(20)<<TenDoanhNghiep<<setw(15)<<DiaChiDN<<setw(10)<<SoNV<<setw(15)<<DoanhThu<<endl;
}
int main()
{
	DoanhNghiep x[100];
	int n;	
	cout<<"\nNHAP SO  LUONG DOANH NGHIEP: ";
	cin>>n;
	for(int i=0; i<n; i++)
	x[i].Nhap();
	cout<<"\n\n\t\t========DANH SACH CAC DOANH NGHIEP============\n\n";
	cout<<setw(20)<<"TEN DN"<<setw(15)<<"DIA CHI DN"<<setw(10)<<"SO NV"<<setw(15)<<"DOANH THU"<<endl;
	for(int i=0; i<n; i++)
	x[i].Xuat();
return 0;
}

