import java.util.*;


// SUM OF DIGITS(in this problem need to find sum of the digiits like for ex. 123 the output is sum is 6)
// public class day02 {
//     int SumDigits(int n){
//         if(n == 0){
//             return 0;
//         }
//         return (n % 10) + SumDigits(n / 10);
//     }
//     void main(){
//         int number = 12234;
//         int result = SumDigits(number);
//         System.out.println("The sum digits: "+ result);
//     }
// }
 
// Power(x, n) PROBLEM 
// THIS PROBLEM HAS TWO CASE 
// 1. time complexity = O(n) 
// 2. time complexity = O(log n)

 // 1. approach o(n)
    // public class day02 {
    //     double Power(double x, int n){
    //         //BASE CASE 
    //         if(n == 0){
    //             return 1;
    //         }
    //         return x * Power(x,n-1);
    //     }
    //     void main(){
    //     double result = Power(2, 5);
    //     System.out.println(result);
    //     }
    // }

// 2. approach O(log n)
    // public class day02 {
    //     double power(double x, int n){
    //         if(n == 0){
    //             return 1;
    //         }
    //         double halfPower = power(x, n/2);
    //         if(n % 2 == 0){
    //             return halfPower * halfPower;
    //         }
    //         else{
    //             return x * halfPower * halfPower;
    //         }
    //     }
    //     void main(){
    //         double result = power(2, 8);
    //         System.out.println(result);
    //     }
    // }

    // nCr problem 
//     public class day02 {
//       int nCr(int n, int r) {
//     // Base cases
//     if (r == 0 || r == n) {
//         return 1;+
//     }

//     return nCr(n - 1, r - 1) + nCr(n - 1, r);
// }
//         void main(){    
//             int result = nCr(5,2 );
//             System.out.println(result);
//         }
//     }