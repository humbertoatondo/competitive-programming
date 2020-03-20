import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

class Main {

    static Date toDate(int d, int m, int y) throws ParseException {
        String dateStr = d + "-" + m + "-" + y;
        SimpleDateFormat formatter = new SimpleDateFormat("dd-MM-yyyy");
        Date date = formatter.parse(dateStr);
        return date;
    }

    static Date getNextDate(Date date) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTime(date);
        calendar.add(Calendar.DAY_OF_YEAR, 1);
        Date tomorrow = calendar.getTime();
        return tomorrow;
    }

    public static void main(final String[] args) {
        int n, d, m, y, c;
        final Scanner scanner = new Scanner(System.in);

        while ((n = scanner.nextInt()) != 0) {
            Date dates[] = new Date[1010];
            int costs[] = new int[1010];
            for (int i = 0; i < n; i++) {
                d = scanner.nextInt();
                m = scanner.nextInt();
                y = scanner.nextInt();
                c = scanner.nextInt();

                try {
                    Date date = toDate(d, m, y);
                    dates[i] = date;
                    costs[i] = c;
                } catch (ParseException e) {
                    e.printStackTrace();
                }
            }

            int days = 0;
            long consumption = 0;
            for (int i = 1; i < n; i++) {
                if (getNextDate(dates[i - 1]).equals(dates[i])) {
                    days++;
                    consumption += costs[i] - costs[i - 1];
                }
            }
            System.out.println(days + " " + consumption);
        }

        scanner.close();
    }
}

/*
5
9 9 1979 440
29 10 1979 458
30 10 1979 470
1 11 1979 480
2 11 1979 483
3
5 5 2000 6780
6 5 2001 7795
7 5 2002 8201
8
28 2 1978 112
1 3 1978 113
28 2 1980 220
1 3 1980 221
5 11 1980 500
14 11 2008 600
15 11 2008 790
16 12 2008 8100
0
*/