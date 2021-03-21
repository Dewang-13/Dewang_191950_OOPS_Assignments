/*WAP to raise a number x raise to the power y by using of Inline function.*/


#include<iostream>
#include<math.h>

using namespace std;
inline int power1(int a,int b)
{
    return pow(a,b);
}
int main()
{
    int x,y;
    cout<<"Enter base number : " <<endl;
    cin>>x;
    cout<<"Enter exponent number : " <<endl;
    cin>>y;
    
    cout<<"Answer is : " <<power1(x,y);
}