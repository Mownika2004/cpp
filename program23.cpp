#include<iostream>
#include<math.h>
using namespace std;
float area(float);
int area(int);
float area(float,float);
int area(int,int);
int main()
{
	int s,b,h;
	float r,lr,br;
	cout<<"Enter the radius for circle:";
	cin>>r;
	cout<<"Enter the value s for square:";
	cin>>s;
	cout<<"Enter the length of rectangle:";
	cin>>lr;
	cout<<"enter the breadth of rectangle:";
	cin>>br;
	cout<<"Enter the base value for triangle:";
	cin>>b;
	cout<<"enter the height value for triangle:";
	cin>>h;
	if(r=='#' || lr>='A' && lr<='Z' || br>='A' && br<='Z')
	{
		cout<<"enter positive integer";
	}
	cout<<"\nArea of circle:"<<area(r);
	cout<<"\nArea of square:"<<area(s);
	cout<<"\nArea of rectangle:"<<area(lr,br);
	cout<<"\nArea of triangle:"<<area(b,h);
}	
float area(float r)
{
	return(3.14*r*r);
}
int area(int s)
{
	return(s*s);
}
float area(float lr,float br)
{
	return(lr*br);
}
int area(int b,int h)
{
	return ((b*h)/2);
}

