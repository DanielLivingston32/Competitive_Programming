import java.util.*;

interface Transaction {
    void deposit(String accNo, int amt);

    void withdraw(String accNo, int amt);

    void viewBalance(String accNo);
}

interface Displayable {
    void display(String accNo);
}

abstract class Account {
    private String[] AccountName = new String[100];
    private String[] AccountNo = new String[100];
    private int[] Balance = new int[100];
    int accounts = 0;

    public void createAccount(String accName, String accNo, int Bal) {
        this.AccountName[accounts] = accName;
        this.AccountNo[accounts] = accNo;
        this.Balance[accounts] = Bal;
        accounts++;
    }

    public void setAccountName(String accountName, int AccIdx) {
        AccountName[AccIdx] = accountName;
    }

    public void setAccountNo(String accountNo, int AccIdx) {
        AccountNo[AccIdx] = accountNo;
    }

    public void setBalance(int balance, int AccIdx) {
        Balance[AccIdx] = balance;
    }

    public String getAccountName(int AccIdx) {
        return AccountName[AccIdx];
    }

    public int getBalance(int AccIdx) {
        return Balance[AccIdx];
    }

    public String getAccountNo(int AccIdx) {
        return AccountNo[AccIdx];
    }

    public int findAccIdx(String accNo) {
        for (int i = 0; i < accounts; i++) {
            if (AccountNo[i].equals(accNo)) {
                return i;
            }
        }
        return -1;
    }

}

class Bank extends Account implements Transaction, Displayable {
    int idx;
    int temp;

    @Override
    public void deposit(String accNo, int amt) {
        idx = findAccIdx(accNo);
        if (idx == -1) {
            System.out.println("Account No not present. Enter a valid one.");
            return;
        }
        temp = getBalance(idx);
        setBalance(temp + amt, idx);
        System.out.println("New Balance: " + getBalance(idx));
    }

    @Override
    public void withdraw(String accNo, int amt) {
        idx = findAccIdx(accNo);
        if (idx == -1) {
            System.out.println("Account No. not present Enter a valid one.");
            return;
        }
        temp = getBalance(idx);
        if (temp - amt >= 0) {
            setBalance(temp - amt, idx);
        } else {
            System.out.println("Insufficent Balance. Transaction has been cancelled.");
            return;
        }
        System.out.println("New Balance: " + getBalance(idx));
    }

    @Override
    public void viewBalance(String accNo) {
        idx = findAccIdx(accNo);
        if (idx == -1) {
            System.out.println("Account No not present. Enter a valid one.");
            return;
        }
        System.out.println("Balance: " + getBalance(idx));
    }

    @Override
    public void display(String accNo) {
        idx = findAccIdx(accNo);
        if (idx == -1) {
            System.out.println("Account No. not present Enter a valid one.");
            return;
        }
        System.out.println(
                "Account Name: " + getAccountName(idx) + "\nAccount No: " + accNo + "\nBalance: " + getBalance(idx));
    }
}

public class Banking {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int choice;
        System.out.println(
                "Choose one option:\n1.Create Account\n2.Deposit Amount\n3.Withdraw Amount\n4.View Balance\n5.Display Account Info\n6.Exit");
        choice = s.nextInt();
        s.nextLine();
        Bank centralBank = new Bank();
        String tempStr;
        int tempInt;
        String AccountNo = "100";
        int AccountIdx = 0;
        while (choice != 6) {
            switch (choice) {
                case 1:
                    System.out.println("Enter Account Name for the new account:");
                    tempStr = s.nextLine();
                    System.out.println("Your Account No is " + AccountNo + AccountIdx);
                    System.out.println("Enter Initial Deposit Amount: ");
                    tempInt = s.nextInt();
                    centralBank.createAccount(tempStr, AccountNo + Integer.toString(AccountIdx), tempInt);
                    AccountIdx++;
                    break;
                case 2:
                    System.out.println("Enter Account No to deposit: ");
                    tempStr = s.nextLine();
                    System.out.println("Enter the amount to be deposited: ");
                    tempInt = s.nextInt();
                    centralBank.deposit(tempStr, tempInt);
                    break;
                case 3:
                    System.out.println("Enter Account No to Withdraw: ");
                    tempStr = s.nextLine();
                    System.out.println("Enter the amount to be Withdrawn: ");
                    tempInt = s.nextInt();
                    centralBank.withdraw(tempStr, tempInt);
                    break;
                case 4:
                    System.out.println("Enter Account No to view Balance: ");
                    tempStr = s.nextLine();
                    centralBank.viewBalance(tempStr);
                    break;
                case 5:
                    System.out.println("Enter Account No to view Info: ");
                    tempStr = s.nextLine();
                    centralBank.display(tempStr);
                    break;
                default:
                    System.out.println("Wrong Choice... Try again.");
            }
            System.out.println(
                    "\nChoose one option:\n1.Create Account\n2.Deposit Amount\n3.Withdraw Amount\n4.View Balance\n5.Display Account Info\n6.Exit");
            choice = s.nextInt();
            s.nextLine();
        }
    }
}