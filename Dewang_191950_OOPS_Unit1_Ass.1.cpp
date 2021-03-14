/* AIM:- Write a program using recurcive function to calculate the factorial of a given number. */



#include<iostream>
using namespace std ;

int ProR(int n)
{
	if(n==0)
	{
		return 1;
	}
	
	int prevPro = ProR(n-1);	
	return n * prevPro ;
}
int main ()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<"The factorial of number is"<<endl;
	cout<<ProR(n)<<endl;
}
