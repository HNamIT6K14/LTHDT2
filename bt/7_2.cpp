#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class School
{
	char sName[50];
	char sDate[20];
	friend class Faculty;
};
class Faculty
{
	char fName[30];
	char fDate[20];
	School x;
	public:
		void input();
		void output();
	friend class Student;	
};
void Faculty::input()
{
	cout<<"\nEnter Faculty Name: "; fflush(stdin); gets(fName);
	cout<<"Enter Faculty Date:   ";	fflush(stdin); gets(fDate);
	cout<<"Enter School Name:    "; fflush(stdin); gets(x.sName);		
	cout<<"Enter Faculty Date:   ";	fflush(stdin); gets(x.sDate);
}
void Faculty::output()
{
	cout<<"Faculty Name:   "<<fName<<endl; 
	cout<<"Faculty Date:   "<<fDate<<endl;	
	cout<<"School Name:    "<<x.sName<<endl; 		
	cout<<"Faculty Date:   "<<x.sDate<<endl;
}
class Person
{
	protected:
		char Name[20];
		char Birth[20];
		char Address[30];
	public:
		void input();
		void output();
		Person(){}
};
void Person::input()
{
	cout<<"\nEnter Name:   ";   fflush(stdin); gets(Name);
	cout<<"Enter Birth:    ";	fflush(stdin); gets(Birth);		
	cout<<"Enter Address:  ";	fflush(stdin); gets(Address);	
}
void Person::output()
{
	cout<<"\nEnter Name:   "<<Name<<endl;  
	cout<<"Enter Birth:    "<<Birth<<endl;	
	cout<<"Enter Address:  "<<Address<<endl;	
}
class Student : public Person
{
	private:
		Faculty y;
		char Class[20];
		float Score;
	public:
		void input();
		void output();	
		Student(){}
};
void Student::input()
{
	y.input();	
	cout<<"\nEnter Class: "; fflush(stdin); gets(Class);
	cout<<"Enter Score:  "; cin>>Score;	
	Person::input();
}
void Student::output()
{
	y.output();
	cout<<"\nEnter Class: "<<Class<<endl;
	cout<<"Enter Score:  "<<Score<<endl;
	Person::output();
}		
int main()
{
	Student A;
	A.input();
	cout<<"\n\n=======>>INFO OF STUDENT<<=========\n\n";
	A.output();
system("pause");	
return 0;
}

