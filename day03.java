import java.util.*;

// factorial of numbers 
    // public class day03 {
    //     public int factorial(int n){
    //         if(n <= 1){
    //             return 1;
    //     }
    //         return n * factorial(n-1);
    //     }
    //     void main(){
    //         int result = factorial(5);
    //         System.out.println(result);
    //     }
    // }

// fibonacci series
    //  public class day03 {
    //     public static int fibonacci(int n) {
    //     if (n <= 1) {
    //         return n;
    //     }
    //     return fibonacci(n - 1) + fibonacci(n - 2);
    // }
    //  void main() {
    //     int n = 6; 
    //     System.out.println("Fibonacci number at position " + n + " is: " + fibonacci(n));
    // }
    //  }

// palindrome Number    
    public class day03 {
        public boolean ispalindrome(int n){
            n = Math.abs(n);
            String str = String.valueOf(n);
            return check(str,0,str.length() -1);
        }

        boolean check(String str, int l,int r){
            if(l >= r){
                return true;
            }
            if(str.charAt(l)!= str.charAt(r)){
                return false;
            }
            return check(str, l+1, r-1);
        }

        void main(){
            boolean result = ispalindrome(123321);
            System.out.println(result);
        }
    }