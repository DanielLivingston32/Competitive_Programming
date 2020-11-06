import java.util.*;

class count implements Runnable {
    Scanner s = new Scanner(System.in);
    String paragraph;
    int cnt_a = 0;
    int cnt_z = 0;

    count() {
        System.out.println("Enter the paragraph");
        paragraph = s.nextLine();
    }

    public void run() {
        String ThreadName = Thread.currentThread().getName();
        if (ThreadName.equals("first")) {
            for (int i = 0; i < paragraph.length(); i++) {
                if (paragraph.charAt(i) == 'a') {
                    System.out.println(ThreadName + " : " + "a");
                    cnt_a += 1;
                }
            }
        } else if (ThreadName.equals("second")) {
            for (int i = 0; i < paragraph.length(); i++) {
                char ch = paragraph.charAt(i);
                if (ch == 'b') {
                    System.out.println(ThreadName + " : " + ch);
                }
                if (ch == 'z') {
                    cnt_z += 1;
                }
            }
        }
    }
}

public class Thread2 {
    public static void main(String[] args) {
        count c = new count();
        Thread t1 = new Thread(c);
        t1.setName("first");
        t1.start();
        Thread t2 = new Thread(c);
        t2.setName("second");
        t2.start();
        try {
            t1.join();
            t2.join();
        } catch (Exception e) {
            System.out.println(e);
        }
        System.out.println("No of 'a' in paragraph is " + c.cnt_a + "\nNo of 'z' in paragraph is " + c.cnt_z);
    }
}
