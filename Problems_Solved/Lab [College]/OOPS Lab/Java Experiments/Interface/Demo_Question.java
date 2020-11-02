import java.util.*;

interface Event {
    void Expenditure();

    void Prizes();

    default void welcome_msg() {
        System.out.print("Welcome for the ");
    }

    static void Thank_you_msg() {
        System.out.println("Thank you for choosing this Event.");
    }
}

interface Invitation extends Event {
    private void design_invitation() {
        System.out.println("Designing invitation for " + this.getClass().getName());
    }

    void display_invitation();
}

class Birthday implements Invitation {
    int expense = 10000;

    @Override
    public void display_invitation() {
        System.out.println(this.getClass().getName() + "\nVenue: Chennai\nTime: 8pm");
    }

    @Override
    public void Expenditure() {
        System.out.println("The total expenditure was " + expense);
    }

    @Override
    public void Prizes() {
        System.out.println("All participants shall be given my birthday swag");
    }

}

class Symposium implements Invitation {
    int expense = 30000;

    @Override
    public void display_invitation() {
        System.out.println(this.getClass().getName() + "\nVenue: Chennai\nTime: 6pm");
    }

    @Override
    public void Expenditure() {
        System.out.println("The total expenditure was " + expense);
    }

    @Override
    public void Prizes() {
        System.out.println("All participants shall be given a T-shirt on behalf of the organizers.");
    }
}

public class Demo_Question {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int choice;
        System.out.println("Choose an event to get invitation and details:\n1.Birthday Party\n2.Symposium\n3.Exit");
        choice = s.nextInt();
        Invitation ch;
        while (choice != 3) {
            switch (choice) {
                case 1:
                    ch = new Birthday();
                    ch.welcome_msg();
                    ch.display_invitation();
                    ch.Expenditure();
                    ch.Prizes();
                    break;
                case 2:
                    ch = new Symposium();
                    ch.welcome_msg();
                    ch.display_invitation();
                    ch.Expenditure();
                    ch.Prizes();
                    break;
                default:
                    System.out.println("Wrong Choice... Try again.");
            }
            System.out
                    .println("\nChoose an event to get invitation and details:\n1.Birthday Party\n2.Symposium\n3.Exit");
            choice = s.nextInt();
        }
    }
}