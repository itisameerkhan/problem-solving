import java.util.*;

public class circularPrime {
    public static boolean checkPrime(int n) {
        for(int i=2;i<=Math.sqrt(n);i++) {
            if(n%i==0) return false;
        }
        return true;
    }
    public static boolean checkCircularPrime(int n) {
        int num = n;
        int count = (int)Math.log10(n) + 1;
        int temp = count;
        while(checkPrime(num)) {
            int remainder = num % 10;
            int dividend = num / 10;
            num = (int)Math.pow(10, count - 1) * remainder + dividend;
            temp--;
            if(temp == 0) return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int minRange = sc.nextInt();
        int maxRange = sc.nextInt();
        int result = 0;
        for(int i=minRange;i<=maxRange;i++) {
            if(checkCircularPrime(i)) {
                // System.out.println("--- " + i + " ---");
                result += i;
            }
        }
        System.out.println(result);
        sc.close();
    }
}