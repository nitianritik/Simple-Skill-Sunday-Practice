// program to implement structure within a structure and menu driven program

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

struct fullname
{
    char firstname[20];
    char midname[20];
    char lastname[20];
};

typedef struct fullname fullname;

struct student
{

    int roll;
    fullname name;
    int gender;

};



void insert(student);

void main()
{

    // printf("Enter no. of student = ");
    //  unsigned short int n; // 2 bytes of unsigned short integer range is 66,535
    // scanf("%d",&n);

    char c;
    while (1)
    {
        printf("\n\nEnter Your Choice = ");
        scanf("%c", & c);

        switch (c)
        {
        case 'i':
        //    insert();
            break;

        case 's':
          //  insert();
            break;

        case 'p':
          //  insert();
            break;

        case 'q':
            exit(0);
            break;

        default:
            printf(" Re-Enter the coice NOW !!!");
            break;
        }
    }

    getch();
}

void insert(student)
{

  printf("\tInsert student  Roll = ");
  scanf("%d",&student.roll);




}