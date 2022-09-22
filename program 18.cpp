#include<bits/stdc++.h>
using namespace std;

int calculateEvensum(int n)
{
	if (n<=0)
	   return 0;
	int fibo[2*n+1];
	fibo[0]=0,fibo[1]=1;
	int sum=0;
	for (int i=2;i<=2*n;i++){
		fibo[i]=fibo[i-1] +fibo[i-2];
		if (i%2==0)
		    sum+=fibo[i];
	}
	  return sum;
}
int main()
{
	int n=8;
	cout<<"even indexed fibonacci sum upto"
	    <<n<<"terms:"
	    <<calculateEvensum(n)<<endl;
	return 0;
}
