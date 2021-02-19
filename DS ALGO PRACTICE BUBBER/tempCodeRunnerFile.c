#include <stdio.h>
#include <conio.h>
#include<time.h>

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 


void main()
{

int n;
enteragain:
printf("Enter a number greater than 77 = ");
scanf("%d",&n);
if (n>77)
{}
else 
{
    goto enteragain; 
}

for(int i=0;i<n;i++)
{

printf("%c\n",7);

delay(1); 

}

getch();

}