// PROGRAM TO IMPLEMENTATION OF LINEAR AND BINARY SEARCH

#include <stdio.h>
#include <conio.h>

void main()
{

  int  a[] = {1, 7, 5, 3, 9, 6, 3, 6, 4, 8, 0, 4, 5, 3,5,2,34,45,54,5454,54,6,6};
    int n=0, l = sizeof(a) / sizeof(int);
   
   int swap=0;

 

   printf("\n");

    for ( int i=0 ; i<l;i++)
{

    printf(" %d ",a[i]);
}

 

int i, j, increment, tmp;
    for(increment = l/2; increment > 0; increment /= 2)
    {
        for(i = increment; i < l; i++)
        {
            tmp = a[i];
            for(j = i; j >= increment; j -= increment)
            {
                if(tmp < a[j-increment])
                {
                    a[j] = a[j-increment];
                    swap++;
                }
                else
                    break;
            }
            a[j] = tmp;
        }
    }

printf("\n\n swap=%d\n",swap);

printf("\n*** AFTER SHELL SORT ***\n");

    for ( int i=0 ; i<l;i++)
{

    printf(" %d ",a[i]);
}  
    
    getch();
}
