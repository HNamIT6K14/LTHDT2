#include<bits/stdc++.h>
using namespace std;
class mang{
	private:
		int n;
		int a[];
	public:
		void Nhap();
		void Xuat();
		void SX();	
};
void mang::Nhap(){
	cout<<"Nhap so luong phan tu: "; cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap a["<<i+1<<"] = ";
		cin>>a[i];
	}
}
void mang::Xuat(){
	for(int i=0; i<n;i++)
	{
		cout<<a[i]<<"\t";	
	}			
}
void mang::SX(){
	for(int i=0; i<n-1; i++)
	for(int j=i+1; j<n; j++)
	{
		if(a[i]>a[j])
		{	
			int temp = 0;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}		
}

int main()
{
	mang x;
	cout<<"Nhap mang: \n\n";
	x.Nhap();
	cout<<"Mang vua nhap la: \n\n";
	x.Xuat();
	x.SX();
	cout<<"\nMang sau khi sap xep: \n";
	x.Xuat();
return 0;
}

