#include<stdio.h>
#include<iostream> 
#include<windows.h>
#include<string>
#include<string.h>

using namespace std;


class person{

public:

string name;
int age;


  person(string n,int a)
  {
    this->name=n;
    this->age;

  }
   person(int a,string n)
  {
    this->name=n;
    this->age;

  }



void print()
{

    cout<<"name is = "<<this->name<<endl;
    cout<<"age is = "<<this->age<<endl;
}



};


int main()

{

person p1={85,"kala saand"};


p1.print();


printf("\n\n%d",p1.age);


    system("pause");
    return 0;
}