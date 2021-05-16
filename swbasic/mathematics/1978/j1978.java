import java.util.*;

public class j1978 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (isPrime(a[j])) {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }

    public static boolean isPrime(int a) {
        int i = 2;
        boolean iPrime = true;
        if (a == 1) {
            iPrime = false;
            return iPrime;
        }
        while (i < a) {
            if (a % i == 0) {
                iPrime = false;
                break;
            }
            i += 1;
        }
        return iPrime;
    }
}