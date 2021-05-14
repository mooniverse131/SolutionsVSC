import java.util.Scanner;

public class j2609 {
    public static void main(String[] args) {
        int a, b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println(gcd(a, b) + "\n" + lcm(a, b));
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