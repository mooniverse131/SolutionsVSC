import java.util.*;

class j10430 {
    public static void main(String[] args) {
        int A = 0, B = 0, C = 0;
        Scanner scanner = new Scanner(System.in);
        A = scanner.nextInt();
        B = scanner.nextInt();
        C = scanner.nextInt();
        System.out.println((A + B) % C);
        System.out.println(((A % C) + (B % C)) % C);
        System.out.println((A * B) % C);
        System.out.println(((A % C) * (B % C)) % C);
        scanner.close();
    }
}
