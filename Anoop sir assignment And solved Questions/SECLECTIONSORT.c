// PROGRAM TO IMPLEMENT THE SELECTION SORT

#include <stdio.h>
#include <conio.h>

void sort(int a[], int l);

void main()
{

    // Making an array
    int a[] = {2, 7, 4, 6, 0, 4, 6, 1, 5, 9, 3};
    // calculating the size of the array
    int l = sizeof(a) / sizeof(a[0]);
    // l = size & l-1= last index

    printf("\n*** UNSORTED ARRAY *** \n");
    printf("\n");
    for (int i = 0; i < l; i++)

    {

        printf(" %d ", a[i]);
    }

    sort(a, l); // CLLING OF THE SORT FUNCTION

    printf("\n");
    printf("\n\a*** SORTED THIS ARRAY WITH THE HELP OF SELECTION SORT ALGORITHM *** \n");

    printf("\n");
    for (int i = 0; i < l; i++)

    {

        printf(" %d ", a[i]);
    }

    getch();
}

void sort(int a[], int l)
{

    int temp = 0;
    for (int i = 0; i < l; i++)

    {
        // temp=a[i+1];
        for (int j = i; j < l; j++)
        {

            if (a[j] < a[i])
            {

                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}