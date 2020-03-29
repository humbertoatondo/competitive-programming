import java.math.BigInteger;
import java.util.HashMap;
import java.util.Scanner;

class Main
{
    public static void main(final String[] args)
    {
        HashMap<Integer, BigInteger> numbers = new HashMap<>();
        BigInteger p = new BigInteger("1");
        for (int i = 1; i <= 100; i++)
        {
            p = p.multiply(new BigInteger(String.valueOf(i)));
            numbers.put(i, p);
        }
        final Scanner scanner = new Scanner(System.in);
        Integer n, m;
        while ((n = scanner.nextInt()) != 0 && (m = scanner.nextInt()) != 0)
        {
            BigInteger div = numbers.get(n - m).multiply(numbers.get(m));
            BigInteger res = numbers.get(n).divide(div);
            System.out.println(n + " things taken " + m + " at a time is " + res + " exactly.");
        }
        scanner.close();
    }
}