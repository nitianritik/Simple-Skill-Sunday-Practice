// PROGRAM TO IMPLEMENTATION OF LINEAR AND BINARY SEARCH

#include <stdio.h>
#include <conio.h>

void main()
{

    // we created an array to implenet the binary search
    // the array contains numbers from 1 to 20
    int a[] = {3, 8, 4, 6, 16, 17, 8, 16, 19, 10, 8, 9};

    int n=0, l = sizeof(a) / sizeof(int);
   printf("\n\nEnter the number b/w 1-20 to search in the array  = ");
   scanf("%d", &n);

    int flag = 0;

    // LINEAR SEARCH
    //_______________________
    for (int i = 0; i < l; i++)
    {

        if (a[i] == n)
        {
            printf("\n WE FOUND THE \n ELEMENT %d  AT INDEX = %d \a", a[i], i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n SORRY!!! Element %d not found", n);
    }
    //_______________________

 

 
   //  FIRST WE WILL SORT THE ARRAY BY SHELL SORT

   printf("\n");

    for ( int i=0 ; i<l;i++)
{


    printf(" %d ",a[i]);
}

 


// int i, j, increment, tmp;
//     for(increment = l/2; increment > 0; increment /= 2)
//     {
//         for(i = increment; i < l; i++)
//         {
//             tmp = a[i];
//             for(j = i; j >= increment; j -= increment)
//             {
//                 if(tmp < a[j-increment])
//                     a[j] = a[j-increment];
//                 else
//                     break;
//             }
//             a[j] = tmp;
//         }
//     }








// printf("\n*** AFTER SHELL SORT ***\n");

//     for ( int i=0 ; i<l;i++)
// {


//     printf(" %d ",a[i]);
// }


    // BINARY SEARCH
    //_______________________
   // int index    

    
    
    
    
    
    getch();
}