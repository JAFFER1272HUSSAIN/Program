#include<iostream>
using namespace std;
bool isprime(int V)
{
	if (V<2)
	{
		return false;
	}
	for(int d=2;d<V;d++)
	{
		if(V%d==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int V;
	cout<<"Enter a number: ";
	cin>> V;
	if(isprime(V))
	{
		cout<<V<<" is a prime number";
	}
	else
	    cout<<V<<" is not a prime number";
	    return 0;
}
