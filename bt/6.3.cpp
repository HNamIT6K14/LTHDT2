#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class complexNum
{
	float phanThuc;
	float phanAo;
	public:
		complexNum(){}
		complexNum(float a, float b)
		{
			phanThuc=a;
			phanAo=b;
		}
	friend ostream& operator <<(ostream& out, complexNum sp);
	complexNum operator + (complexNum sp)
		{	
			complexNum temp;
			temp.phanThuc =phanThuc + sp.phanThuc;
			temp.phanAo =phanAo + sp.phanAo;
			return temp;	
		}
	complexNum operator - (complexNum sp);	
};
ostream& operator <<(ostream& out, complexNum sp)
{
	cout<<sp.phanThuc<<" + "<<sp.phanAo<<"i"<<endl;
	return out;
}	
complexNum complexNum :: operator - (complexNum sp)
{
	complexNum temp;
	temp.phanThuc = phanThuc - sp.phanThuc;
	temp.phanAo = phanAo - sp.phanAo;
	return temp;
} 
int main()
{
	complexNum sp1(1,2), sp2(3,4);
	complexNum sp3 = sp1+sp2;
	cout<<"tong hai so phuc: ";
	cout<<sp3;
	cout<<"hieu hai so phuc: ";
	complexNum sp4 = sp2-sp1;
	cout<<sp4;
return 0;
}

