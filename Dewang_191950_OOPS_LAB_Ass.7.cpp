/* EXPERIMENT - 7
AIM - Create the class TIME to store time in hours and minutes. Write a friend function to add two TIME objects.
THEORY - A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.*/

#include<iostream>

using namespace std;

class Time{
	
	int hour ;
	int minutes;
	public:
		void settime(int h,int m){
			hour = h;
			minutes = m;
		}
		
		void display(){
			
			cout<<hour<<" hours and "<<minutes<<" minutes";
		}
		
	 void totaltime(Time ,Time);
};

void  Time ::  totaltime(Time t1,Time t2){

minutes  = t1.minutes + t2.minutes;
hour    = minutes/60;
minutes = minutes%60;
hour   = t1.hour + t2.hour + hour;	

}



int main()
{
	Time t1,t2,t3;
	t1.settime(2,30);
	t2.settime(4,55);
	t3.totaltime(t1,t2);
	t3.display();
	
}