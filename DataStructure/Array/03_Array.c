// Duplicate Handling: Identify, count, or remove duplicates in an array.

#include<stdio.h>
#include<stdlib.h>

// Identify
    // int main(){
    //     int arr[100];
    //     int n = sizeof(arr) / sizeof(arr[0]);
    //     printf("ENTER SIZE OF ARRAY:");
    //     scanf("%d",& n);
    //     printf("ENTER ELEMENTS IN AN ARARAY :");
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d",& arr[i]);
    //     }
    //     printf("The Array is:");
    //     for(int i =0; i < n;i++){
    //         printf("%d \t",arr[i]);
    //     }
    //     printf("\n");

    // //duplicate identification

    //     for (int  i = 0; i < n; i++){
    //        for(int j = i + 1; j < n; j++){
    //        if (arr[i] == arr[j]) {
    //             printf("The Duplicate number is :%d \t ", arr[i]);
    //             break;
    //         }
    //        }
    //     }    
    // }

//duplication count 

    //  int main(){
    //     int arr[100];
    //     int n = sizeof(arr) / sizeof(arr[0]);
    //     printf("ENTER SIZE OF ARRAY:");
    //     scanf("%d",& n);
    //     printf("ENTER ELEMENTS IN AN ARARAY :");
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d",& arr[i]);
    //     }
    //     printf("The Array is:");
    //     for(int i =0; i < n;i++){
    //         printf("%d \t",arr[i]);
    //     }
    //     printf("\n");
    // // ducplication count 
    //     int count = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for(int j = i + 1; j < n ; j++){
    //             if(arr[i] == arr[j]){
    //                 count++;
    //                 break;
    //             }
    //         }
    //     }
    //     printf("the duplicate count is:%d",count);
    //  }
        
// remove duplicates

        int main(){
        int arr[100];
        int n = sizeof(arr) / sizeof(arr[0]);
        printf("ENTER SIZE OF ARRAY:");
        scanf("%d",& n);
        printf("ENTER ELEMENTS IN AN ARARAY :");
        for (int i = 0; i < n; i++)
        {
            scanf("%d",& arr[i]);
        }
        printf("The Array is:");
        for(int i =0; i < n;i++){
            printf("%d \t",arr[i]);
        }
        printf("\n");

        // Remove duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left to remove duplicate
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  // Decrease array size
                j--;     // Adjust index after shift
            }
        }
    }
    printf("Array after removing duplicates:");
    for (int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    }