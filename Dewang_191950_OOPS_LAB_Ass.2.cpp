/*Assignment – 2
AIM :-  Write a function power() which raise a number m to a power n. The function takes double value of m and integer value of n and returns the result. Use the default value of n as 2.

THEORY:- A function that calls itself is known as a recursive function. And, this technique is known as recursion.
ALGORITHM :- 
Step1: Function named PowR by passing values m,n
Step2: Base condition if n=0 return 1 
Step3: Calling function recurresively till n become 1
Step4: Return m*stored value of function i.e. prevPow=PowR(m,n-1)*/


#include<iostream>
using namespace std ;
int PowR(double m , int n)
{
	if(n==0)
	{
		return 1;
	}
	
	int prevPow= PowR(m,n-1);
	return m*prevPow ;
}
int main ()
{
	double m;
	int n=2;
	cout<<"Enter the Base Number (m)"<<endl;
	cin>>m;
	cout<<"Calculated value is "<<endl<<PowR(m,n)<<endl;
}