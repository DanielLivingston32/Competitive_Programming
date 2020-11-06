import java.util.*;

class T1 extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Good Morning");
            try {
                sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class T2 extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Good Afternoon");
            try {
                sleep(2000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class T3 extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Good Evening");
            try {
                sleep(3000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class T4 extends Thread {
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Good Night");
            try {
                sleep(4000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class Thread1 {
    public static void main(String[] args) {
        T1 t1 = new T1();
        T2 t2 = new T2();
        T3 t3 = new T3();
        T4 t4 = new T4();
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        try {
            t1.join();
            t2.join();
            t3.join();
            t4.join();
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("GOOD BYE");
    }
}
