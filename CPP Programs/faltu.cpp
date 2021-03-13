#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class student
{
public:
    int Roll = 0;
 string name;



 void pri()
   {

    cout << this->name <<endl<<this->Roll;


   }



protected:
    string pass[8];


  


};

int main()

{

    student s1;

    s1.Roll = 85;
    s1.name = "ritik";

cout<<"enter the Name of s1"<<endl;
cin>>s1.name;

cout<<"enter the Roll of s1"<<endl;
cin>>s1.Roll;



    s1.pri();


   // cout<<sizeof(string);

    return 0;
}