#include<stdio.h>

// int main(){
//     printf("hello,World!");
//     return 0;
// }

// // Revision topics loops , basic code
// input and output
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
// int main() {
//     int age;
//     char n;
//
//     printf("Enter your age: ");
//     scanf("%d", &age);
//
//     printf("Enter your name: ");
//     scanf("%s", n);
//
//     printf("Age: %d\n", age);
//     printf("Name: %s\n", n);
//
//     return 0;
// }

// Check whether a number is even or odd
    // int main() {
    //     int a;
    //     // a = 11;
    //     printf("ENTER A NUMBER A:");
    //     scanf("%d",& a);
    //     if (a % 2 == 0) {
    //         printf("a is even ");
    //     }
    //     else {
    //         printf("a is odd ");
    //     }
    // }

//Find the largest among three numbers
    // int main() {
    //     int a;
    //     int b;
    //     int c;
    //     printf("ENTER A:");
    //     scanf("%d", &a);
    //     printf("ENTER B:");
    //     scanf("%d", &b);
    //     printf("ENTER C:");
    //     scanf("%d", &c);
    //     if (a>b && a>c) {
    //         printf("a is bigger ");
    //     }
    //     if (b>a && b>c) {
    //         printf("b is bigger ");
    //     }
    //     if (c>a && c>b) {
    //         printf("c is bigger ");
    //     }
    // }

//Check whether an entered character is a vowel or consonant.
        // int main() {
        //     char ch;
        //     printf("Please enter a character: ");
        //     scanf("%c", &ch);
        //     if ( ch == 'a' || ch =='e'|| ch == 'i'|| ch == 'o' || ch == 'u' ) {
        //         printf("You entered an alphabet which is conataining vovel.\n");
        //     }
        //     else {
        //         printf("You entered an invalid character which does not contain vovel.\n");
        //     }
        //
        // }

//check whether a year is a leap yea
    // int main() {
    //     int year;
    //     year = 2018;
    //     if (year % 4 ==0 && year % 100 != 0 || year % 400 == 0) {
    //         printf("Year is a leap year\n");
    //     }
    //     else {
    //         printf("Year is not a leap year\n");
    //     }
    // }

// Print multiplication tables of a number.
     // int main() {
     //     int n = 5;
     //     int result = 0;
     //     for (int i = 0; i <= 10; i++) {
     //         result = n * i;
     //         printf("%d\n", result);
     //     }
     // }

// Calculate factorial of a number
   // int main() {
   //     int fact = 1;
   //     int n;
   //     printf("Enter a number: ");
   //     scanf("%d", & n);
   //
   //     for (int i = 1; i <= n; i++) {
   //         fact = fact * i;
   //     }
   //     printf("The factorial of %d is %d", n, fact);
   // }

// Display Fibonacci sequence up to N terms.
// int main() {
//     int n, i;
//     int t1 = 0, t2 = 1, nextTerm;
//
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//
//     printf("Fibonacci Series: ");
//
//     for(i = 1; i <= n; i++) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//
//     printf("\n");
//     return 0;
// }

// FUNCTION
    int addiotion(int a, int b) {
        return a + b;
    }
        int main() {
        int a;
        int b;
        printf("ENTER A NUMBER A:");
        scanf("%d", & a);
        printf("ENTER A NUMBER B:");
        scanf("%d", & b);
        int sum = addiotion(a, b);
        printf("SUM = %d\n", sum);
    }