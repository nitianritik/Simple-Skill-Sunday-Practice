// PROGRAM FOR INSERTIONT SORT BY FUNCTION

#include <stdio.h>
#include <conio.h>

void sort(int a[], int l);

int main()
{

  // in insertion sort we start from the second element considering first as sorted
  // we put elemnt from second to their right position

  // making an array
  int l, a[] = {1, 7, 5, 3, 9, 6, 3, 6, 4, 8, 0, 4, 5, 3};
  // calculating the size of array
  l = sizeof(a) / sizeof(a[0]); // l=size
  //printf("size of array is = %d",l);

  // printing unsorted array
  for (int i = 0; i < l; i++)
  {
    printf(" %d ", a[i]);
  }

  printf(" \n\a");
  // we will call a funtioon *accepts and returns=array pointer
  sort(a,l);
  //_______________________



  // int temp;
  // for (int i = 1; i < l; i++)
  // {
  //    temp = a[i];
  //    int count=0;
  //   for (int j = i; j >= 0; j--)
  //   {
  //      if (a[j] > temp)
  //     {
  //       printf("\n %d <--> %d ", i, j);
      
  //       a[j+1]=a[j];
       

  //      count++;
  //       // temp = a[i];
  //       // a[i] = a[j];
  //       // a[j] = temp;
  //     }

  //   }
  //   a[i-count]=temp;
  //   printf("\n______\n");
  // }



  //_______________________
  // printing the sorted array after calling the function
  for (int i = 0; i < l; i++)
  {
    printf(" %d ", a[i]);
  }

  return 0;
}
//________________________________________________________
void sort(int a[], int l)
{
  // we have perform the insertion sort here
  // total size of the array is l here 1 up than the index
   int temp;
  for (int i = 1; i < l; i++)
  {
     temp = a[i];
     int count=0;
    for (int j = i; j >= 0; j--)
    {
       if (a[j] > temp)
      {
        printf("\n %d <--> %d ", i, j);
      
        a[j+1]=a[j];
       

       count++;
        
      }

    }
    a[i-count]=temp;
    printf("\n______\n");
  }

 



}