import java.util.*;

public class function {
    public static int calculateproduct(int a, int b) {
        return a * b;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        // int mul = calculateproduct(a, b);
        // System.out.println(mul);
        System.out.println(calculateproduct(a, b));

    }
