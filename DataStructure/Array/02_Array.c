#include<stdio.h>


//Sorting: Arrange elements in order (Bubble, Selection, Insertion sort).
//BUBBLE SORT
    // int main(){
    //     int arr[100];
    //     int size;
    //     printf("ENTER THE SIZE OF ARRAY:");
    //     scanf("%d",& size);
    //     printf("ENTER THE ELEMENTS OF ARRAY:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         scanf("%d",& arr[i]);
    //     }
    //     printf("THE ARRAY IS:");
    //     for (int  i = 0; i < size; i++)
    //     {
    //         printf("%d\t",arr[i]);
    //     }

    // //Sorting
    //     for(int i = 0; i< size - 1;i++){
    //         for(int j = 0; j< size - i - 1;j++ ){
    //             if (arr[j] > arr[j+1])
    //             {
    //                 int temp = arr[j];
    //                 arr[j] = arr[j+1];
    //                 arr[j+1] = temp;
    //             }
    //         }
    //     }
    //     printf("Sorted array is:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         printf("%d\t" ,arr[i]);
    //     }
    //     return 0;
    // }

//Selection Sorting

    // int main(){
    //     int arr[100];
    //     int size;
    //     printf("ENTER THER SIZE OF AN ARRAY:");
    //     scanf("%d",& size);
    //     printf("ENTER THE ELEMENTS OF AN ARRAY:");
    //     for(int i =0; i< size;i++){
    //         scanf("%d",& arr[i]);
    //     }
    //     printf("THE ARRAY IS :");
    //     for(int i =0; i< size ; i++){
    //         printf("%d\t",arr[i]);
    //     }

    //     //_______________________________________________
    //     // for(int i =0; i< size-1;i++){
    //     //     int minindex = i;
    //     //     for(int j = i + 1; j< size; j++){
    //     //         if (arr[j] < arr[minindex]);
    //     //         {
    //     //          minindex = j;
    //     //         }
    //     //         int temp = arr[minindex];
    //     //         arr[minindex] = arr[i];
    //     //         arr[i] = temp;
    //     //     }
    //     // }
    //    // _______________________________________________

    //    //Sorting
        
    // for(int i = 1; i < size; i++) {
    //     for(int j = i; j > 0; j--) {
    //         if(arr[j - 1] > arr[j]) {
    //             int temp = arr[j];
    //             arr[j] = arr[j - 1];
    //             arr[j - 1] = temp;
    //         } else {
    //             break;
    //         }
    //     }
    // }
    //     printf("THE SORTED ARRAY IS:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         printf("%d\t", arr[i]);
    //     }
    //     return 0;
    // }

// Merge sort

      int main() {
    int arr[] = {1,32,12,10,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];


    for (int curr_size = 1; curr_size <= n-1; curr_size = 2*curr_size) {
        for (int left_start = 0; left_start < n-1; left_start += 2*curr_size) {
   int mid = left_start + curr_size - 1;
     int right_end = (left_start + 2*curr_size - 1) < (n-1) ? (left_start + 2*curr_size - 1) : (n - 1);
            int i = left_start, j = mid + 1, k = left_start;
            while (i <= mid && j <= right_end) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                } else {
                    temp[k++] = arr[j++];
                }
            }
            while (i <= mid) {
                temp[k++] = arr[i++];
            }
            while (j <= right_end) {
                temp[k++] = arr[j++];
            }
            for (i = left_start; i <= right_end; i++) {
                arr[i] = temp[i];
            }
        }
    }


    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d \t", arr[i]);

    return 0;
}

