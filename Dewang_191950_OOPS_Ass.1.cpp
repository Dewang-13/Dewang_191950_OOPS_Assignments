/* Assignment No.1
AIM:- Write a program to read a matrix of size m x n form the keyboard and display the same using function.
THEORY:- A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
ALGORITHM:- 
1.	Class is defined
2.	Define matrix in class
3.	Then define method
4.	Then Matrix is defined
5.	Take input from the user for the size of the matrix.
6.	Then take elements from the user
7.	Then print the matrix by defining “Display ” function
8.	Define the object in “Main” function of name “M”
9.	Call the Method*/

//Program 

#include<iostream>


using namespace std;

 class matrix
{
    int A[1000][1000],a,b,i,j;
    public :
        void values();
        void display();
};

void matrix::values()
{
    cout << "Enter number of rows: ";
    cin >> a;
    cout << "Enter number of columns: ";
    cin >> b;
    cout << "Enter elements of matrix [A]"<<endl;
    for (i=1; i<=a; i++)
    {
        for ( j=1; j<=b; j++)
        {
            cout<<"A"<<"["<<i<<"]["<<j<<"] : ";
            cin >> A[i][j];
        }
    }
}

void matrix::display()
{
    cout<<"Elements of matrix [A]: \n";
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<" "<<A[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    matrix m;
    m.values();
    m.display();
    return 0;
}