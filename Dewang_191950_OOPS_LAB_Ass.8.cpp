/* EXPERIMENT - 48
AIM - Create two classes DM and DB. DM stores the distance in metres and centimetres and DB stores the distance in feet and inches. Write a program to add object of DM with the object of DB class.
THEORY - A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.*/

#include<iostream>

using namespace std;

class DB; //forward declaration

class DM{
	  
	  double meter;
	  double centi;
	  public:
	  	void setvalue(double m, double c){
	  		
	  		meter = m;
	  		centi = c;
	  		
		  }
		friend void Add(DM , DB);  
};

class DB{
	  
	  double feet;
	  double inch;
	  public:
	  	void setvalue(double f , double i){
	  		
	  		feet = f;
	  		inch = i;
	  		
		  }
		  
		friend void Add(DM , DB);   
};

 
 void Add(DM d1, DB d2){
 	
 	
 	double d = (d1.meter*100+d1.centi + d2.feet*30.48+d2.inch*2.45);
 	
 	if(d>=100){
 		cout<<"Distance(in meter ) = "<<d/100<<"\n";
 		cout<<"Distance(in Centimeter ) = "<<d<<"\n";
 		
	 }
	 else{
	 	cout<<"Distance(in meter ) = "<<0<<"\n";
 		cout<<"Distance(in Centimeter ) = "<<d<<"\n";
	 }
 	
 	
 }


int main()
{
	DM m1;
	double meter,centi;
	cout<<"Enter distance in meter and centimeter : ";
	cin>>meter>>centi;
	m1.setvalue(meter,centi);
	
	double feet , inch;
	cout<<"Enter distance in feet and inch : ";
	cin>>feet>>inch;
	DB m2;
	m2.setvalue(feet,inch);
	
	
	Add(m1,m2);
	return 0;
}