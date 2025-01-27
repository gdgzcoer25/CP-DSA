//https://codeforces.com/contest/26/problem/A
code:-
 import java.util.Scanner;

public class AlmostPrimeNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count = 0;

        for (int i = 2; i <= n; i++) {
            if (countPrimeDivisors(i) == 2) {
                count++;
            }
        }

        System.out.println(count);
    }

    public static int countPrimeDivisors(int num) {
        int divisors = 0;

        for (int i = 2; i <= num; i++) {
            if (num % i == 0 && isPrime(i)) {
                divisors++;
            }
        }

        return divisors;
    }

    public static boolean isPrime(int num) {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return num > 1;
    }
}
// Testcases:-
//   Input
// 10
// Output
// 2
// Input
// 21
// Output
// 8
