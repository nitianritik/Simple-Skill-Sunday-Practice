#include <iostream>
#include <string>
#include <conio.h>
#include<string.h>


using namespace std;

class student
{


    // this all below are the member of the class / object student in private protected and public
public:
    int Roll = 0;
 string name;
// this below is the example of the constructor

// student(string n, int r )
// {


// this->name=n;
// this->Roll=r;
// //this->pass=pas;



// }



// this below is the wxample of class method 

void get()
{

cout<<"Enter the name ";   // GETTING NAME
// cin>>this->name;

gets(this->name);

cout<<"Enter the name "; // GETTING ROLL
cin>>this->Roll;

cout<<endl<<endl;   // GETTING NAME

// cout<<"Enter the pass ";   // GETIIING PASS
// cin>>this->pass;




}

 void pri()
   {

    cout <<"NAME = "<< this->name <<endl<< "ROLL = "<<this->Roll;

cout<<endl<<endl;   // GETTING NAME

   }



protected:
    string pass[8];


  


};

int main()

{

    student s1[5];


//     s1.Roll = 85;
//     s1.name = "ritik";

// cout<<"enter the Name of s1"<<endl;
// cin>>s1.name;

// cout<<"enter the Roll of s1"<<endl;
// cin>>s1.Roll;

for(int i=0;i<5;i++)
{
 
    s1[i].get();
    s1[i].pri();



}



   // cout<<sizeof(string);

    return 0;
}