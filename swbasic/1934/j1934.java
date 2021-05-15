import java.util.*;

class j1934 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = 0, B = 0, count = 0;
        count = sc.nextInt();
        for (int i = 0; i < count; i++) {
            A = sc.nextInt();
            B = sc.nextInt();
            System.out.println(lcm(A, B));
        }
        sc.close();
    }

    public static int gcd(int a, int b) {
        int c;
        while (b != 0) {
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }

    public static int lcm(int a, int b) {
        int c = (a * b) / gcd(a, b);
        return c;
    }
}
