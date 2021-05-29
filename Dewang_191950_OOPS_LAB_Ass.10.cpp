/*Experiment - 10
AIM - Write a program to show multiple inheritance.*/

#include<iostream>

using namespace std;

class A{
	protected:
		int a;
		public:
			void set_a(int);
			void display(void);
};

class B{
	protected:
		int b;
		public:
			void set_b(int);
			void display(void);
};

void A :: set_a(int x){
	a = x;
}

void A :: display(){
		cout<<"A : "<<a<<endl;
}

void B :: set_b(int y){
	b = y;
}

class p : public A,public B{
	
	public:
	void display(void);
};


void  p :: display()
{
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	cout<<"A*B : "<<a*b<<endl;
 } 
 
 
 int main()
 {
    p a1;
    a1.set_a(20);
    a1.set_b(30);
	a1.display();   
 	
 }
