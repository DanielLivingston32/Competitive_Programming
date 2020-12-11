import java.util.*;

class Even extends Thread {
    static int x;

    Even(int no) {
        x = no;
    }

    public void run() {
        if (x % 2 == 0) {
            System.out.println("Given no is even.");
        } else {
            System.out.println("Given no is odd.");
        }
    }
}

class Leap extends Thread {
    static int year;

    Leap(int x) {
        year = x;
    }

    public void run() {
        boolean leap = false;

        if (year % 4 == 0) {

            if (year % 100 == 0) {
                if (year % 400 == 0)
                    leap = true;
                else
                    leap = false;
            } else
                leap = true;
        }

        else
            leap = false;

        if (leap)
            System.out.println(year + " is a leap year.");
        else
            System.out.println(year + " is not a leap year.");

    }
}

public class Thread1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the number x: ");
        int x = s.nextInt();
        Even t1 = new Even(x);
        Leap t2 = new Leap(x);
        t1.start();
        t2.start();

        try {
            t1.join();
            t2.join();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
