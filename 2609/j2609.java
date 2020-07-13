import java.util.Scanner;
public class j2609{
    public static void main(String[] args){
        int a, b, lcm;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        lcm = (a * b) / gcd(a,b);
        System.out.println(gcd(a,b) + "\n" + lcm);
    }
    public static int gcd(int a, int b){
        int c;
        while(b != 0){
            c = a % b;
            a = b;
            b = c;
        }
        return a;
    }
}