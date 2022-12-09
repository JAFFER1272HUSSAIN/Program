#include<iostream>
using namespace std;
bool Isfibonacci(int V)
{
	if(V==0 || V==1)
	{
		return true;
	}
	int p=0, c=1, n;
	for(;n<V;)
	{
		n=p+c;
		p=c;
		c=n;
	}
	return (n==V);
	    
}
int main( )
{
	int V;
	cout<<"Enter a Number:"<<endl;
	cin>> V;
	if (Isfibonacci(V))
	{
		cout<<V<<" is Fibonacci number";
	}
	else 
	    cout<<V<<" is Not a Fibonacci number";
	
	return 0;    
}

