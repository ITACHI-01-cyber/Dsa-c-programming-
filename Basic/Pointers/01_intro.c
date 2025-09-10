#include<stdio.h>
#include<stdlib.h>

// Print the address of a variable using a pointer.

    // int main(){
    //     pointer();
    // }
    // int pointer(int a){
    //       a = 80;
    //     int*p = & a;
    //     printf("the value of a: %d\n",a);
    //     printf("the adress of a in p %p",p);
    // }

    // int point(){
    //     int *p,*q;
    //     int a = 10;
    //     int b =30;
    //     p = &a;
    //     q = &b;
    //     printf("the adress of a is: %p\n",p);
    //     printf("the adress of b is: %p\n",q);
    // }
    // int main(){
    //     point();
    // }

// Swap two numbers using pointers.


    void swap(int *a, int *b) {
          int temp = *a;   
             *a = *b;      
             *b = temp;       
        }

   int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}