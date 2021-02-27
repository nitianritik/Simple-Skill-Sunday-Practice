// SORTING THE ARRAY WITH THE BUBBLE SORT ALGORITHM 

#include <stdio.h>
#include <conio.h>

void sort(int a[],int l);

void main()

{
    int a[] = {3, 8, 0, 7, 6, 5, 6, 7, 6, 4, 6, 7, 9, 6};
    int l = sizeof(a) / sizeof(a[0]);

    printf("\n\n*** THIS IS THE UNSORTED ARRAY ***\n\n");
    for (int i = 0; i < l; i++)
    {
        printf(" %d ", a[i]);
    }


sort(a,l);  // CLALLING THE SORT FUNCTION
    
    printf("\n\n*** SORTED THIS ARRAY WITH BUBBLE SORT ALGORITHM ***\n\n");
    for (int i = 0; i < l; i++)
    {
        printf(" %d ", a[i]);
    }

    getch();
}

void sort(int  a[],int  l)
{

int temp;
    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <l; j++)
        {


            if (a[j] > a[j + 1])
            {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    
    }


}