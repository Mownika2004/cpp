#include<iostream>
using namespace std;
class student
{
	int m1,m2,m3,reg;
	char name[30];
	float avg,total;
	public:
		void getdata();
		void grade();
		void display();
};
void student::getdata()
{
	cout<<"enter the name : "<<endl;
	cin>>name;
	cout<<"enter the reg no : ";
	cin>>reg;
	cout<<"enter the marks "<<endl;
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	avg=total/3;
}
	void student::display()
	{
	   if(avg>90)
	   cout<<"S grade";
	   else if(avg<90&&avg>=80)
	   cout<<"A garde";
	   else if(avg<80&&avg>=70)
	   cout<<"B grade";
	   else if(avg<70&&avg>=60)
	   cout<<"C garde";
	   else if(avg<60&&avg>=50)
	   cout<<"D grade";
	   else
	   cout<<"FAIL";
	   cout<<"total marks = "<<total;
	   cout<<"\naverage marks = "<<avg;
	}
	int main()
	{
		student s;
		s.getdata();
		s.display();
	}
