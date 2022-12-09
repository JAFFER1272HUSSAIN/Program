#include<iostream>
#include<iomanip>
using namespace std; 

int main()
{
 	 int a=56;
	 cout<<"value of a was"<<a<<endl;
	 a=78;
	 cout<<"value of a is"<<a<<endl;
	 const int g=3;
	 cout<<g<<endl;
	 int b=34,c=55;
	 int d=(((b*32)+c)-64)+45;
	 cout<<d<<endl;
	 int i=4,j=5,k=7686;
	 cout<<"value of i without setw is"<<i<<endl; 
	 cout<<"value of j without setw is"<<j<<endl;
	 cout<<"value of k without setw is"<<k<<endl;
	 cout<<"value of i is"<<setw(4)<<i<<endl;
	 cout<<"value of j is"<<setw(4)<<j<<endl;
	 cout<<"value of k is"<<setw(4)<<k<<endl;
	 return 0;
}
