import java.util.*;


// SUM OF DIGITS(in this problem need to find sum of the digiits like for ex. 123 the output is sum is 6)
public class day02 {
    int SumDigits(int n){
        if(n == 0){
            return 0;
        }
        return (n % 10) + SumDigits(n / 10);
    }
    void main(){
        int number = 12234;
        int result = SumDigits(number);
        System.out.println("The sum digits: "+ result);
    }
}
