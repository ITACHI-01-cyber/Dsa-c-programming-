import java.util.*;

// Sum of array elements
// public class day04 {

//     public static int sum(int[] arr, int index) {
//         if (index == arr.length) {
//             return 0;
//         }
//         return arr[index] + sum(arr, index + 1);
//     }

//     public static void main(String[] args) {
//         int[] arr = {10, 20, 30, 04};
//         System.out.println(sum(arr, 0));
//     }
// }

// find min and max in an array 

//     public class day04 {
//         public static int FindMax(int[] arr,int index){
//             if(index == arr.length -1){
//                 return arr[index];
//             }
//             return Math.max(arr[index], FindMax(arr, index+1));
//         }
//         public static int FindMin(int[] arr,int index){
//             if(index == arr.length -1){
//                 return arr[index];
//             }
//             return Math.min(arr[index], FindMin(arr, index+1));
//     }
//         void main(){
//         int[]arr = {12,32,4,65,1};
//         System.out.println(FindMax(arr, 0));
//         System.out.println(FindMin(arr, 0));
//     }
//  }

 // CHECKING ARRAY IS SORTED OR NOT 
    // public class day04 {
    
    //     public static boolean isSorted(int[] arr,int index){
    //         if(index == arr.length-1|| arr.length == 0){
    //             return true;
    //         }
    //         if(arr[index] > arr[index + 1]){
    //             return false;
    //         }
    //         return isSorted(arr, index + 1);
    //     } 
    //     void main(){
    //         int[] SORTED = {1,2,3,4,5,6};
    //         int[] UNSORTED = {2,6,1,4,9,3};
    //         System.out.println(isSorted(SORTED, 0));
    //         System.out.println(isSorted(UNSORTED, 0));
    //     }
    // }

// Mean in Array 

    // public class day04 {
    //     public static double findMean(int[] arr, int n) {
    //     // Base Case: only one element to consider
    //     if (n == 1) {
    //         return (double) arr[n - 1];
    //     }
        
    //     // Recursive Step: (Mean of n-1 elements * (n-1) + current element) / n
    //     double previousMean = findMean(arr, n - 1);
    //     return ((previousMean * (n - 1)) + arr[n - 1]) / n;
    // }

    // public static void main(String[] args) {
    //     int[] arr = {2, 4, 6, 8, 10};
    //     System.out.println("Mean of array: " + findMean(arr, arr.length));
    // }
    // }

// FIRST UPPERCASE LETTER 
    // public class day04 {
    //     public static char firstUppercase(String str, int i) {
    //     if (i == str.length()) {
    //         return '\0'; 
    //     }
    //     if (Character.isUpperCase(str.charAt(i))) {
    //         return str.charAt(i);
    //     }
    //     return firstUppercase(str, i + 1);
    // }

    // public static void main(String[] args) {
    //     String input = "vivEKBhardw";
    //     char result = firstUppercase(input, 0);
    //     System.out.println("First uppercase in '" + input + "': " + result);
    // }
    // }

// decimal to binary 
    // public class day04 {
    //     public static String decToBin(int n) {
    //     if (n == 0) return "0";
    //     if (n == 1) return "1";
    //     return decToBin(n / 2) + (n % 2);
    // }

    // public static void main(String[] args) {
    //     int input = 6;
    //     System.out.println("Decimal: " + input);
    //     System.out.println("Binary: " + decToBin(input));
    // }
    // }

// Binary to grey 
    // public class day04 {
    //     public static int binToGray(int binary) {
    //     if (binary == 0) {
    //         return 0;
    //     }
    //     int lastBit = binary % 10;
    //     int secondLastBit = (binary / 10) % 10;
    //     int grayBit = lastBit ^ secondLastBit;    // XOR 
        
    //     return binToGray(binary / 10) * 10 + grayBit;
    // }

    // public static void main(String[] args) {
    //     int input = 101; 
    //     System.out.println("Binary: " + input);
    //     System.out.println("Gray Code: " + binToGray(input));
    // }
    // }

// fibonacci 

public class day04 {

    double fibonacci(double n){
        if(n <= 1){
            return n;
        }
        return fibonacci(n-1)+ fibonacci(n-2);
    }
    void main(){
        double terms = 1500;
        for(int i =0; i< terms;i++){
            System.out.print(fibonacci(i) + " ");
        }
        System.out.println();
    }
}