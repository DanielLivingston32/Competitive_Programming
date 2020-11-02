import java.util.*;

interface CreditCardInterface {
    void useCard();

    void payCredit();

    void increaseLimit();
}

interface CreditViewInterface {
    void viewCreditAmount();
}

abstract class SilverCardCustomer {
    String name;
    String cardnumber;
    int creditAmount = 0;
    int CreditLimit = 50000;

    SilverCardCustomer(String name, String cardnumber) {
        this.name = name;
        this.cardnumber = cardnumber;
    }

    public int getCreditAmount() {
        return creditAmount;
    }

    public void setCreditAmount(int creditAmount) {
        this.creditAmount = creditAmount;
    }

    public int getCreditLimit() {
        return CreditLimit;
    }

    public void setCreditLimit(int creditLimit) {
        CreditLimit = creditLimit;
    }
}

class Member extends SilverCardCustomer implements CreditCardInterface, CreditViewInterface {
    String name;
    String cardnumber;
    int creditAmount = 0;
    int CreditLimit = 50000;
    int cre_limit;
    int money;
    int count = 0;
    int p;

    public int getP() {
        return p;
    }

    public int getMoney() {
        return money;
    }

    public void setMoney(int money) {
        this.money = money;
    }

    Member(String name, String cardnumber) {
        super(name, cardnumber);
    }

    public void useCard() {
        System.out.println("Do you want to use the card (1 for yes , 0 for no):");
        int ch;
        Scanner s = new Scanner(System.in);
        ch = s.nextInt();
        if (ch == 1) {
            System.out.println("The available operations are :");
            System.out.println("1.Pay credit");
            System.out.println("2.Increase limit");
            int cho;
            System.out.println("Please enter your choice");
            cho = s.nextInt();
            switch (cho) {
                case 1:
                    payCredit();
                    break;
                case 2:
                    increaseLimit();
                    break;
            }
        } else {
            System.out.println("You have given your choice as no");
        }
    }

    public void usemoney() {
        System.out.println("You may use money up to the credit limit");
        System.out.println("How much amount you want to use now :");
        Scanner s = new Scanner(System.in);
        p = s.nextInt();
        setMoney(p);
        System.out.println("you have taken " + getMoney() + " from our bank");
        if (count > 0) {
            setMoney(getMoney());
            setMoney(p + getMoney());
        } else {
            setMoney(getP());
            count++;
        }

    }

    public void setP(int p) {
        this.p = p;
    }

    public void payCredit() {
        Scanner s = new Scanner(System.in);
        int choi;
        System.out.println("Do you want to repay the money(1 for yes, 0 for no) :");
        choi = s.nextInt();
        if (choi == 1) {
            System.out.println("The total amount which you have to repay is :" + getMoney());
            System.out.println("Do you want to repay the whole amount (1 for yes ,0 for no)");
            int choic;
            choic = s.nextInt();
            if (choic == 1) {
                setMoney(0);
                System.out.println("You have repayed your credit\nThank you");
            } else {
                System.out.println("How much money you want to repay now");
                int money2;
                money2 = s.nextInt();
                int money3 = money - money2;
                setMoney(money3);
                System.out.println("The balance amount you need to repay is :" + money3);
                System.out.println("You have repayed some amount Thankyou");
            }
        } else {

            System.out.println("You have given your choice as no and the money you have to repay is :" + getMoney());
        }
    }

    public void increaseLimit() {
        Scanner s = new Scanner(System.in);
        int option;
        System.out.println("Do you want to increase your credit limit(1 for yes ,0 for no)");
        option = s.nextInt();
        if (option == 1) {
            int annual_income;
            System.out.println(
                    "Please enter your annual income (updated credit limit will be 50 percent of annual income)");
            annual_income = s.nextInt();
            cre_limit = annual_income / 2;
            setCreditAmount(cre_limit);
            System.out.println("The credit limit has been updated ");
            System.out.println("The current credit limit is :" + cre_limit);
        }
    }

    public void viewCreditAmount() {
        System.out.println("The credit amount you have to repay is :" + getMoney());
    }
}

public class Bonus_Question {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String name;
        String cardnumber;
        System.out.println("Enter the Name:");
        name = s.next();
        System.out.println("Enter card number[must be a 16-digit number]");
        cardnumber = s.next();
        Member m = new Member(name, cardnumber);
        int choice;
        System.out.println(
                "Choose one option:\n1.Use Card\n2.Use money\n3.Pay Credit\n4.Increase Limit\n5.View Credit Amount\n6.Exit");
        choice = s.nextInt();
        s.nextLine();
        while (choice != 6) {
            switch (choice) {
                case 1:
                    m.useCard();
                    break;
                case 2:
                    m.usemoney();
                    break;
                case 3:
                    m.payCredit();
                    break;
                case 4:
                    m.increaseLimit();
                    break;
                case 5:
                    m.viewCreditAmount();
                    break;
                default:
                    System.out.println("Wrong Choice... Try again.");
            }
            System.out.println(
                    "Choose one option:\n1.Use Card\n2.Use money\n3.Pay Credit\n4.Increase Limit\n5.View Credit Amount\n6.Exit");
            choice = s.nextInt();
        }
    }
}