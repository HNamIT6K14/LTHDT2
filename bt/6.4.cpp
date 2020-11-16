#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class TTB2{
	float a,b,c;
	public:
		TTB2(){}
		TTB2(float hs1, float hs2, float hs3){
			a=hs1;
			b=hs2;
			c=hs3;
		}
	friend 	ostream& operator << (ostream& out , TTB2 tt);
	TTB2 operator * ();
	TTB2 operator + (TTB2 tt2);
	TTB2 operator - (TTB2 tt2);
};
ostream& operator << (ostream& out , TTB2 tt)
{
	cout<<tt.a<<"X^2 + "<<tt.b<<"X + "<<tt.c<<endl;
	return out;
}
TTB2 TTB2::operator * (){
	TTB2 temp;
	temp.a = -a;
	temp.b = -b;
	temp.c = -c;
	return temp;
} 
TTB2 TTB2::operator + (TTB2 tt2){
	TTB2 tt3;
	tt3.a = this->a + tt2.a;
	tt3.b = this->b + tt2.b;
	tt3.c = this->c + tt2.c;
	return tt3;
}
TTB2 TTB2::operator - (TTB2 tt2){
	TTB2 tt3;
	tt3.a = this-> a - tt2.a;
	tt3.b = this->b - tt2.b;
	tt3.c = this->c - tt2.c;
	return tt3;
}
int main()
{
	TTB2 A(2,2,2),B(3,3,3),C(1,2,3);
	cout<<"\n\n\t\tDOI DAU TAM THUC BAC 2 A : "<<*A<<endl;
	cout<<"\t\tTAM THUC BAC 2 B : "<<B<<endl;
	cout<<"\t\t==>TAM THUC BAC 2 C : "<<C<<endl;
	cout<<"\t\t==>TONG B VA C = "<<B+C<<endl;
	cout<<"\t\t==>HIEU B VA C = "<<B-C<<endl;
return 0;
}

