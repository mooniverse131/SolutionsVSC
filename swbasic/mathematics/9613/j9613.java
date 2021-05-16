import java.util.*;

public class j9613 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();

            int[] a;
            a = new int[n];

            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
            }

            long sum = 0;

            for (int k = 0; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    sum += gcd(a[k], a[l]);
                }
            }
            System.out.println(sum);
        }
        sc.close();
    }

    public static int gcd(int a, int b) {
        if (a % b == 0) {
            return b;
        }
        return gcd(b, a % b);
    }
}