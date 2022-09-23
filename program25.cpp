#include<iostream>  
#include<string.h>
using namespace std;    
void swap(string *x, string *y)  
{  
 string swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 string x, y;
 cout<<"enter the value of X is:";
 cin>>x;
 cout<<"enter the value of Y is:";
 cin>>y;    
 swap(&x, &y);    
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}
