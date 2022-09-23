#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int age;
	cout<<"enter age:";
	cin>>age;
	{
		if(age>=18)
		{
			cout<<"eligible to vote";
		}
		else if(age>='a' && age<='z' || age>='A' && age<='Z')
		{
			cout<<"invalid input";
		}
		else if(age=='#')
		{
			cout<<"invalid input";
		}
		else
		{
			cout<<"you are allowed to vote after "<<18-age<<" years";
		}
	}
}
