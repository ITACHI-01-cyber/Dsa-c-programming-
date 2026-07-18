import java.util.*;

// Print Factorial in java using recursion 
    // public class day01{

    //     public static int factorial(int n) {
    //     // 1. BASE CASE
    //     // If n is 0 or 1, we stop recursing and return 1.
    //     if (n <= 1) {
    //         return 1;
    //     }
        
    //     // 2. RECURSIVE CASE
    //     // Multiply n by the result of the factorial of n - 1.
    //     return n * factorial(n - 1);
    // }
    //     public static void main(String args[]){
    //         int number = 5;
    //         int result = factorial(number);
    //         System.out.println("The factorial of " + number + " is: " + result);
    //     }
    // }


// REVERSE A STRING 

    // public class day01{

    //     public static String reverseString(String str) {
    //     // 1. BASE CASE
    //     // If the string is empty or has only one character, it's already reversed.
    //     // We also check for null to prevent errors.
    //     if (str == null || str.length() <= 1) {
    //         return str;
    //     }
        
    //     // 2. RECURSIVE CASE
    //     // Reverse the substring (everything after the first letter), 
    //     // then append the first letter to the end.
    //     return reverseString(str.substring(1)) + str.charAt(0);
    // }

    //     public static void main(String args[]){
    //         String Original = "vivek";
    //         String reversed = reverseString(Original);

    //         System.out.println("ORIGINAL STRING: "+ Original);
    //         System.out.println("Reversed STRING: "+ reversed);
    //     }
    // }


// SUM OF NATURAL NUMBERS 

    // public class day01{
    //     public static int sum(int n) {
    //     // 1. BASE CASE
    //     // The sum of the first 1 natural number is just 1.
    //     // We use <= to protect against inputs like 0 or negative numbers.
    //     if (n <= 1) {
    //         return n;
    //     }

    //     // 2. RECURSIVE CASE
    //     // Add the current number 'n' to the sum of all numbers before it.
    //     return n + sum(n - 1);
    // }
    //     public static void main(String args[]){
    //         int number = 5;
    //         int result = sum(number);
    //         System.out.print("the sum is : "+ result);
    //     }
    // }

// print 1 to n 

// public class day01{
//     public static void number(int n){
//         if(n == 0){
//             return;
//         }
//         number(n-1);
//         System.out.println(n + " ");
//     }
//     void main(){
//         number(4);
//     }
// }

// PRINT N TO 1
// public class day01{
//     public static void number(int n){
//         if(n == 0){
//             return;
//         }
//         System.out.println(n + " ");
//         number(n-1);
//     }
//     void main(){
//         number(4);
//     }
// }
