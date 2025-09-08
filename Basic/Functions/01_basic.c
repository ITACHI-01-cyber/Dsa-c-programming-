#include<stdio.h>
#include<stdlib.h>

//Prototype>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//    int Sum(){
//         int a,b,sum;
//         printf("ENTER THE VALUE FOR A:");
//         scanf("%d",&a);
//         printf("ENTER THE VALUE FOR B:");
//         scanf("%d",&b);
//         sum = a+b;
//         printf("THE SUM IS :%d\n",sum);
//     }
//     void main(){
//         Sum();
//     }

// function declaration>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    // int main(){
    //     sum();
    // }

    // void sum(){
    //     int a, b, add;
    //     printf("ENTER THE VALUE FOR A:");
    //     scanf("%d",&a);
    //     printf("ENTER THE VALUE FOR B:");
    //     scanf("%d",&b);
    //     add = a + b;
    //     printf("the sum is:%d\n",add);
    // }

// Function call by refrence and call by refrence
        // void fun(int,int);
        // void main(){
        //     int x = 5;
        //     int y = 7;
        //     fun(x,y);
        //     printf("x = %d y = %d", x,y);
        // }
        // void fun(int x,int y){
        //     x = 7;
        //     y = 5;
        //     printf("x = %d\n,y =%d\n",x,y);
        // }

// Function in array
    // int arr() { // declation
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
    // }
    // int main(){ // calling
    //     arr();
    // }

// finding largest and min in an array

    void findMinMax(int arr[], int n) {
    int min = arr, max = arr;
        printf("ENTER SIZE OF ARRAY:");
        scanf("%d",& n);
        printf("ENTER ELEMENTS IN ARRAY:");
        for (int  i = 0; i < n; i++)
        {
            scanf("%d",& arr[i]);
        }
        printf("The Array is:");
        for(int i =0; i< n; i++){
            printf("%d\n ",arr[i]);
        }
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Largest element is : %d\n", max);
    printf("Smallest element is : %d\n", min);
}

int main() {
    int arr[100];
    int n = sizeof(arr) / sizeof(arr);
    findMinMax(arr, n);
    return 0;
}
