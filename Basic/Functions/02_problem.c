#include<stdio.h>
#include<stdlib.h>

// CHECKING THE DUPLICATE IN AN ARRAY USING FUNCTION

        // int main(){
        //     duplicate();
        // }

        // int duplicate(){
        //     int arr[100];
        //     int size;
        //     printf("ENTER THE SIZE OF AN ARRAY:");
        //     scanf("%d",&size);
        //     printf("ENTER ELEMENTS FOR AN ARRAY:");
        //     for (int i = 0; i < size; i++)
        //     {
        //         scanf("%d",&arr[i]);
        //     }
        //     printf("ARRAY IS:");
        //     for (int i = 0; i < size; i++)
        //     {
        //         printf("%d\t",arr[i]);
        //     }
        //     for(int i =0; i < size; i++){
        //         for(int j = i + 1; j < size; j++){
        //             if (arr[i] == arr[j])
        //             {
        //                 printf("duplicat found is:%d\n",arr[i]);
        //                 break;
        //             }    
        //         }
        //     }
        // }

// CHECK AND COUNT NO FO DUPTLICATE IN AN ARRAY

//         int main(){
//             duplicate();
//         }


//         int duplicate(){
//             int arr[100];
//             int size;
//             int count = 0;
//             printf("ENTER THE SIZE OF AN ARRAY:");
//             scanf("%d",&size);
//             printf("ENTER ELEMENTS FOR AN ARRAY:");
//             for (int i = 0; i < size; i++)
//             {
//                 scanf("%d",&arr[i]);
//             }
//             printf("ARRAY IS:");
//             for (int i = 0; i < size; i++)
//             {
//                 printf("%d\t",arr[i]);
//             }
//             printf("\n");
//             for(int i =0; i < size; i++){
//                 for(int j = i + 1; j < size; j++){
//                     if (arr[i] == arr[j])
//                     {
//                         printf("duplicat found is:%d\n",arr[i]);
//                         break;
//                     }    
//                 }
//             }
//  // COUNT 
//             for(int i =0; i < size; i++){
//                 for(int j = i + 1; j < size; j++){
//                     if(arr[i] == arr[j]){
//                     count++;
//                     break;
//                 }
//                 }
//             }
//             printf("the no of duplicates are: %d",count);
//         }

// Remove the duplicate 

    //     int main(){
    //         duplicate();
    //     }


    //     int duplicate(){
    //         int arr[100];
    //         int size;
    //         int count = 0;
    //         printf("ENTER THE SIZE OF AN ARRAY:");
    //         scanf("%d",&size);
    //         printf("ENTER ELEMENTS FOR AN ARRAY:");
    //         for (int i = 0; i < size; i++)
    //         {
    //             scanf("%d",&arr[i]);
    //         }
    //         printf("ARRAY IS:");
    //         for (int i = 0; i < size; i++)
    //         {
    //             printf("%d\t",arr[i]);
    //         }
    //         printf("\n");
    //         for(int i =0; i < size; i++){
    //             for(int j = i + 1; j < size; j++){
    //                 if (arr[i] == arr[j])
    //                 {
    //                     printf("duplicat found is:%d\n",arr[i]);
    //                     break;
    //                 }    
    //             }
    //         }
    //          for (int i = 0; i < size; i++) {
    //             for (int j = i + 1; j < size; j++) {
    //                  if (arr[i] == arr[j]) {
    //             for (int k = j; k < size - 1; k++) {
    //                 arr[k] = arr[k + 1];
    //             }
    //             size--; 
    //             j--;    
    //         }
    //     }
    // }
    // printf("THE ARRAY AFTER REMOVE:");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\t",arr[i]);
    // }
    //     }
// n average cases with fewer duplicates, the complexity might be better, but asymptotically, it remains O(n^3).

// fabonacci Serires using Function 

    int main(){
        int n;
        printf("enter the term:");
        scanf("%d", &n);
        printFibonacci(n);
    }

    int printFibonacci(int n){
        int t1 = 0, t2 = 1, nextTerm;
        printf("Fibonacci Series: %d, %d", t1, t2);
        for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
      }
    }
