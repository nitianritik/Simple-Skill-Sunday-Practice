
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the missingNumbers function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//
int *missingNumbers(int arr_count, int arr[], int brr_count, int brr[], int *result_count)
{

    printf("here we are");

    int count1 = 0, count2 = 0, temp = 0;
    static int ans[14];
    int a = 0;
    int flag;
    for (int i = 0; i < brr_count; i++)
    {
        flag = 1;
        count1 = 0;
        count2 = 0;

        temp = brr[i];

        for (int i = 0; i <= a; i++)
        {
            if (temp == ans[i])
            {
                printf("\n*********************\n");

                flag = 0;
            }
        }

        if (flag == 1)
        {
            printf("\n\n\n  loop 1 \n\n\n");

            for (int j = 0; j < arr_count; j++)

            {
                if (temp == arr[j])
                {
                    count1++;
                    printf("\n temp (%d) == arr[j](%d) -->> count 1=%d", temp, arr[j], count1);
                }
            }
            printf("\n\n\n  loop 2 \n\n\n");

            for (int j = 0; j < brr_count; j++)
            {
                if (temp == brr[j])
                {
                    printf("\n temp (%d) == brr[j](%d) -->> count 2=%d", temp, brr[j], count2);

                    count2++;
                }
            }
            if (count1 < count2)
            {
                printf("storage ans[%d]=%d ", a, temp);

                ans[a] = temp;
                a++;
            }

            printf("\n\n______________________");
        }
    }
    *result_count = a;

//sorting

if(a>4)
{

    int l = sizeof(ans[0] * a) / sizeof(ans[0]);
l=l+3;
    temp = 0;
    for (int i = 0; i < l; i++)

    {
        // temp=a[i+1];
        for (int j = i; j < l; j++)
        {

            if (ans[j] < ans[i])
            {

                temp = ans[j];
                ans[j] = ans[i];
                ans[i] = temp;
            }
        }
    }

}
if(a<=4)
{

    int l = sizeof(ans[0] * a) / sizeof(ans[0]);
l=l+1;
    temp = 0;
    for (int i = 0; i < l; i++)

    {
        // temp=a[i+1];
        for (int j = i; j < l; j++)
        {

            if (ans[j] < ans[i])
            {

                temp = ans[j];
                ans[j] = ans[i];
                ans[i] = temp;
            }
        }
    }

}

  //  int *pt = ans;

    return ans;
}

int main()
{

    //     10
    // 203 204 205 206 207 208 203 204 205 206
    // 13
    // 203 204 204 205 206 207 205 208 203 206 205 206 204

    // int arr[] = {11, 4, 11, 7, 13, 4, 12, 11, 10, 14};
    // int brr[] = {11, 4, 11, 7, 3, 7, 10, 13, 4, 8, 12, 11, 10, 14, 12};

    int arr[] = {203 ,204, 205, 206 ,207 ,208, 203, 204 ,205 ,206};
    int brr[] = {203 ,204 ,204 ,205 ,206 ,207 ,205 ,208 ,203 ,206 ,205 ,206 ,204};

    int arr_count = sizeof(arr) / sizeof(arr[0]);
    int brr_count = sizeof(brr) / sizeof(brr[0]);
    printf("%d %d", arr_count, brr_count);
    int result_count = 0;
    int *result = missingNumbers(arr_count, arr, brr_count, brr, &result_count);

    printf("\n\n\n result_count = %d \n\n\n", result_count);

    for (int i = 0; i < result_count; i++)
    {

        printf("\n - %d ", *(result + i));
    }

    return 0;
}
