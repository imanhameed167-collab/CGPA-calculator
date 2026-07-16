#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int total_marks,PF,FE,ICT,SLGY,ISL,CVS,credit_hours;
	float perentage,CGPA,grade_points;
	cout<<"Enter marks of Programming fundamentals: =  "<<endl;  //PF= Programming fundamentals
	cin>>PF;
	
    cout<<"Enter marks of Functional English:= "<<endl;   // FE = Functional English
	cin>>FE;
	
	cout<<"Enter marks of ICT:= "<<endl;   
	cin>>ICT;
	
	cout<<"Enter marks of Sociology:= "<<endl;    //SLGY = Sociology: 
	cin>>SLGY;
	
	cout<<"Enter marks of Islamic Studies:= "<<endl;  //ISL = Islamic Studies:
	cin>>ISL;
	
	cout<<"Enter marks of Civics:= "<<endl;   //CVS = Civics
	cin>>CVS;
	
	// Total marks of all Subjects
	
	total_marks= PF+FE+ICT+SLGY+ISL+CVS;
	cout<<"total_marks"<<total_marks<<endl;
	
	cout<<"Credit hours:";
	cin>>credit_hours;
	
	perentage=(total_marks/600.0)*100;
	cout<<"perentage"<<perentage<<endl;
	
	if(perentage>=85)
	{
		grade_points = 4.0;
	}
	else if(perentage>=75)
	{
		grade_points = 3.5;
	}
	else if(perentage>=65)
	{
		grade_points = 3.0;
	}	    
	else if(perentage>=55)
	{
		grade_points = 2.5;
	}
	else if(perentage>=45)
	{
		grade_points = 2.0;
	}
	else if(perentage>=35)
	{
		grade_points = 1.5;
	}
	else if(perentage>=25)
	{
		grade_points = 1.0;
	}
	else
	    grade_points = 0.0;

	CGPA=grade_points;
	
	cout<<"CGPA:"<<CGPA<<endl;
	    return 0;
}
