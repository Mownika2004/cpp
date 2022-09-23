#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"choice 1.addition\n2.subraction\n3.product\n4.division\n5.modular \n";
	cout<<"enter the two numbers  ";
	cin>>a>>b;
	cout<<"select the choice";
	cin>>c;
	switch(c)
	{
		case 1 :
			cout<<"sum is "<<a+b;
			break;
		case 2 :
			cout<<"sub is "<<a-b;
			break;
		case 3 :
			cout<<"prod is "<<a*b;
			break;
		case 4 :
			cout<<"div is "<<a/b;
			break;
		case 5 :
			cout<<"mod is "<<a%b;
			break;
		default :
			cout<<"Select valid choice";
			
    }
}
