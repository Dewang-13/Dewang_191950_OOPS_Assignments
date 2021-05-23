/* EXPERIMENT - 7
AIM - Create the class TIME to store time in hours and minutes. Write a friend function to add two TIME objects.
THEORY - A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.*/

#include <iostream>

using namespace std;
class Time{
  int hrs=00,min=00;
  public:
    void set_time(){
        cout<<"Enter the hours :- ";
        cin>>hrs;
        cout<<"Enter the minute :- ";
        cin>>min;
        if((hrs>=23 & min>60)|| (hrs>=24 & min<60) || (hrs<24 & min>60)){
            {
            cout<<"Invalid input. Try Again!\a";
            }
            
        }
        
    }
    friend int add_time(Time &t1,Time &t2);
    void get_time(){
        if(min==60){
            hrs++;
            min=0;
        }
        cout<<"Entered time in the form HH:MM :- "<<hrs<<":"<<min<<"\n";
    }
};
int add_time(Time &t1,Time &t2){
    Time temp;
    cout<<"Enter the Data for first time\nEnter the Hours :- ";
    cin>>t1.hrs;
    cout<<"Enter the minute :- ";
    cin>>t1.min;
    cout<<"Enter the Data for second time\nEnter the Hours :- ";
    cin>>t2.hrs;
    cout<<"Enter the minute :- ";
    cin>>t2.min;
    
    temp.hrs = t1.hrs + t2.hrs;
    temp.min = t1.min + t2.min;
    if(temp.min>60){
        temp.hrs++;
        temp.min = temp.min % 60;
    }
    if((temp.hrs>23)){
        cout<<"Invalid Data Entered";
        return 0;
    }
    else
     cout<<"Added time is HH:MM :- "<<temp.hrs<<":"<<temp.min<<"\n";
}


int main()
{
    cout<<"All the time related tasks in 24hrs.\n";
    Time t1,t2;
    int choice;
    while(1){
        cout<<"\n\n1. Save the time\n2. Add the time\n3. Display the time\n4. Exit\n\nEnter the choice :- ";
        cin>>choice;
        switch(choice){
            case 1:
                    t1.set_time();
                    break;
            case 2:
                    add_time(t1,t2);
                    break;
            case 3:
                    t1.get_time();
                    break;
            case 4:
                    cout<<"Have a nice day!";
                    return 0;
            default:
                    cout<<"Invalid input";
                    return 0;
        }
    }
    
    
    return 0;
}
