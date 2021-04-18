#include <stdio.h>
#include <conio.h>
#include<string.h>

struct Student
{

        int id;
        char name[30];
        char gender;
};

typedef struct Student student;

void main()
{

        student students[10];
        int flag=0;
        int temp=0;

        // FEATURES:
        // 1. Add a new student - error if the student is already exist
        // 2. Give the id of the sudent to print the details of the student
        // 3. print all the information about all of the students.
        // 4. quit the program.

        short int n = 0, i = 0;

do
{
        




        printf("***** Enter a choice *****\n");
        printf("1. Add a New student details\n");
        printf("2. Extract the details of the student\n");
        printf("3. Print the information about all the students.\n");
        printf("4. Terminate the Program\n");

        scanf("%d", &n);

        //printf("%d",n);

        switch (n)
        {
        case 1:
                /* code */
                 
                 printf("\n Enter the Id ");
                // for(int k=0;k<i;k++)
                // {
                //         if(" ")
                // }
             
                 scanf("%d", students[i].id);
                 
             
 

                printf("\n Enter the name of the student: ");
                
                gets(students[i].name);
                printf("\n Enter the Gender 'M' or 'F' ");
                scanf("%c", students->gender);
                printf("\n  ");


                i++;
                break;

        case 2:
                /* code */
                printf("\n Enter the Id of the student ");
                break;

        default:
                printf("\n Invalid choice!!! \n");
                break;
        }




} while (1);


        getch();
}