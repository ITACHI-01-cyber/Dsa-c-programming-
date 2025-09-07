# include<stdio.h>
#include<stdlib.h>

// Finding Largest/Smallest Element: Traverse the array and compare each element.

    // int main(){
    //     int arr[100];
    //     int size;
    //     int max = arr[0];
    //     int min = arr[0];
    //     printf("ENTER SIZE OF ARRAY:");
    //     scanf("%d",& size);
    //     printf("ENTER ELEMENTS IN ARRAY:");
    //     for (int  i = 0; i < size; i++)
    //     {
    //         scanf("%d",& arr[i]);
    //     }
    //     printf("The Array is:");
    //     for(int i =0; i< size; i++){
    //         printf("%d\n ",arr[i]);
    //     }
    //     for(int i =0; i< size ; i++){
    //         if( max < arr[i] ){
    //             max = arr[i];
    //         }
    //     }
    //     printf("THE LARGEST ELEMENT IN ARRAY IS:%d\n", max);

    //     for (int  i = 1; i < size; i++)
    //     {
    //        if (arr[i] < min);
    //        {
    //         min = arr[i];
    //        }
    //     }
    //     printf("SMALLEST ELEMENT IN AN ARRAY IS:%d\n",min);
    //     return 0;
    // }

// Reverse an Array: Swap elements from both ends towards the center.

    // int main(){
    //     int arr[100];
    //     int size;
    //     int temp;
    //     int  i,j;
    //     printf("ENTER SIZE OF ARRAY:");
    //     scanf("%d",& size);
    //     printf("ENTER ELEMENTS IN ARRAY:");
    //     for (int  i = 0; i < size; i++)
    //     {
    //         scanf("%d",& arr[i]);
    //     }
    //     printf("The Array is:");
    //     for(int i =0; i< size; i++){
    //         printf("%d\n ",arr[i]);
    //     }
    //     i = 0;
    //     j = size - 1;
    // while (i < j) {
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    //     printf("REVERSE ARRAY IS:");
    //     for(int i = 0; i<size; i++){
    //         printf("%d\n",arr[i]);
    //     }
    // }

// Search Operations: Linear and binary search for an element’s position.
    //LINEAR SEARCH
        int main(){
            int arr[100];
        int size;
        int temp;
        int search;
        int i;
        printf("ENTER SIZE OF ARRAY:");
        scanf("%d",& size);
        printf("ENTER ELEMENTS IN ARRAY:");
        for (int  i = 0; i < size; i++)
        {
            scanf("%d",& arr[i]);
        }
        printf("The Array is:");
        for(i =0; i< size; i++){
            printf("%d\n ",arr[i]);
        }
        printf("ENETR A ELEMENT TO SEARCH:");
        scanf("%d",& search);

        for(int i =0; i < size; i ++){
            if(arr[i] == search){
                printf("The Element Found On Index:%d",i);
            }
        }
        }