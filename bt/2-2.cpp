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
		void FindMax();
		void FindMin();	
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
void mang::FindMax(){
    int Max;
    Max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>Max){
            Max=a[i];
        }
    }
    cout<<"\n Max = "<<Max;
}
void mang::FindMin(){
    int Min;
    Min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<Min){
            Min=a[i];
        }
    }
    cout<<"\n Min = "<<Min;
}
int main()
{
	mang x;
	cout<<"Nhap mang: \n\n";
	x.Nhap();
	cout<<"Mang vua nhap la: \n\n";
	x.Xuat();
	x.FindMax();
	x.FindMin();
return 0;
}
