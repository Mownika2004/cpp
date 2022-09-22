#include <iostream>
#include<string.h>
using namespace std;
void swap(string *x,string *y)
{
	string swap;
	swap=*x;
	*x=*y;
	*y=swap;
}
int main()
{
	string x,y;
	cout<<"enter the value of x is:";
	cin>>x;
	cout<<"enter the value of y is:";
	cin>>y;
	swap(&x,&y);
	cout<<"value of x is:"<<x<<endl;
	cout<<"value of y is:"<<y<<endl;
	return 0;
}

