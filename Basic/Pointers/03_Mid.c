#include<stdio.h>

//Now you use pointers for arrays and simple manipulations.
    // int main(){
    //     arr();
    // }
    // int arr(){
    //     int arr[100];
    //     int size;
    //     int *ptr = arr;
    //     printf("Enter size of an array: ");
    //     scanf("%d",& size);
    //     printf("Enter the Elements of an array: ");
    //         for(int i =0; i < size; i++){
    //             scanf("%d",& arr[i]);
    //         }
        // printf("the array is: ");
        // for (int i = 0; i < size; i++)
        // {
        //     printf("%d \t",arr[i]);
        // }
    //     for (int i = 0; i < size; i++) {
    //    // printf("%d ", *(ptr + i));
    //   }

// doubling array values using pointers
    //   for (int i = 0; i < size; i++)
    //   {
    //     *ptr = *ptr * 2;
    //     ptr++;
    //   }
    //   printf("THe Double elmetns are: ");
    //   for (int i = 0; i < size; i++)
    //   {
    //     printf("%d \t",arr[i]);
    //   }
    // }

// Access array elements using pointers (no indexing).

    // int main(){
    //     arr2();
    // }
    // int arr2(){
    //     int arr[100];
    //     int size;
    //     int *ptr = arr;
    //     printf("Enter size of an array: ");
    //     scanf("%d",& size);
    //     printf("Enter the Elements of an array: ");
    //         for(int i =0; i < size; i++){
    //             scanf("%d",& arr[i]);
    //         }

    //     for (int i = 0; i < size; i++)
    //     {
    //         printf("%d \t", *(ptr+i));
    //     }
    // }

// Find the largest and smallest element in an array using pointers.

//     int Find(){
//         int arr[100];
//         int size;
//         int min = arr[0];
//         int max = arr[0];
//         int *ptr = arr;
//         printf("Enter size of an array: ");
//         scanf("%d",& size);
//         printf("Enter the Elements of an array: ");
//             for(int i =0; i < size; i++){
//                 scanf("%d",& arr[i]);
//             }
// // Maximumm
//                 for (int i = 0; i < size; i++) {
//         if (*(ptr + i) > max) {
//             max = *(ptr + i);
//         }
// //Minumumm
//         if (*(ptr + i) < min) {
//             min = *(ptr + i);
//         }
//     }
//     printf("the smallest in an array is: %d\n", min);
//     printf("Largest in an array is: %d\n", max);
//     }
     
//     int main(){
//         Find();
//     }

//Reverse an array using pointers.

//     void reverseArray(int *arr, int size) {
//     int *startPtr = arr;
//     int *endPtr = arr + size - 1;
//     int temp;
//     while (startPtr < endPtr) {
//         temp = *startPtr;
//         *startPtr = *endPtr;
//         *endPtr = temp;
//         startPtr++;
//         endPtr--;
//     }
// }
//     int main(){
//         int arr[100];
//         int size;
//         printf("Enter size of an array: ");
//         scanf("%d",& size);
//         printf("Enter the Elements of an array: ");
//             for(int i =0; i < size; i++){
//                 scanf("%d",& arr[i]);
//             }
//     reverseArray(arr, 6);
//     printf("Reversed Array: ");
//     for (int i = 0; i < 6; i++) {
//         printf("%d ", arr[i]);
//     }
//     }