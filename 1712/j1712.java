import java.util.Scanner;
public class j1712{
    public static void main(String[] args){
        int a, b, c;
        Scanner scan = new Scanner(System.in);
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        System.out.println(func(a, b, c));
    }
    public static int func(int a, int b, int c){
        return a / (c - b) + 1;
    }
}