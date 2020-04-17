import java.math.BigInteger;
import java.util.Scanner;

class Main {

    public static String revStr(String str) {
        StringBuilder builder = new StringBuilder();
        builder.append(str);
        builder = builder.reverse();
        return builder.toString();
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while (n-- > 0) {
            String a = scanner.next();
            String b = scanner.next();
            a = revStr(a);
            b = revStr(b);
            BigInteger bigA = new BigInteger(a);
            BigInteger bigB = new BigInteger(b);
            BigInteger bigC = bigA.add(bigB);
            System.out.println(new BigInteger(revStr(bigC.toString())));
        }
        scanner.close();
    }
}