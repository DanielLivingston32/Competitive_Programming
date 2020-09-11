import java.util.Scanner;

public class Experiment_4 {
    public static class Employee {
        String EmployeeName;
        String EmployeeId;
        int BasicPay;
        int Da;
        int Hra;
        int Deductions;
        int grossSalary;
        int netSalary;

        public Employee(String Employeename, String Employeeid, int Basicpay, int da, int hra, int deductions) {
            EmployeeName = Employeename;
            EmployeeId = Employeeid;
            BasicPay = Basicpay;
            Da = da;
            Hra = hra;
            Deductions = deductions;
        }

        public int grossPay() {
            grossSalary = BasicPay + Hra + Da + Deductions;
            return grossSalary;
        }

        public int netSalary() {
            netSalary = BasicPay + Da - Hra - Deductions;
            return netSalary;
        }

    };

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Employee Employee_array[] = new Employee[10];
        System.out.println(
                "Choose one of the option given below:\n1. Create Employee\n2. Calculate Gross Salary\n3. Calculate Net Salary\n4. Exit");
        int choice = s.nextInt();
        int cnt = 0;
        String EmployeeName;
        String EmployeeId;
        int BasicPay;
        int Da;
        int Hra;
        int Deductions;
        while (choice != 4) {
            s.nextLine();
            switch (choice) {
                case 1:
                    System.out.println("Enter the Employee Name");
                    EmployeeName = s.nextLine();
                    System.out.println("Enter the Employee ID");
                    EmployeeId = s.nextLine();
                    System.out.println("Enter the Basic Pay");
                    BasicPay = s.nextInt();
                    System.out.println("Enter the DA");
                    Da = s.nextInt();
                    System.out.println("Enter the HRA");
                    Hra = s.nextInt();
                    System.out.println("Enter the Deductions");
                    Deductions = s.nextInt();
                    Employee_array[cnt] = new Employee(EmployeeName, EmployeeId, BasicPay, Da, Hra, Deductions);
                    cnt++;
                    break;
                case 2:
                    System.out.println("Enter the Employee Id");
                    EmployeeId = s.nextLine();
                    boolean Proceed = false;
                    for (int i = 0; i < cnt; i++) {
                        if (EmployeeId.equals(Employee_array[i].EmployeeId)) {
                            System.out.println("The Gross Salary for the Employee " + Employee_array[i].EmployeeName
                                    + " is " + Employee_array[i].grossPay());
                            Proceed = true;
                        }
                    }
                    if (!Proceed) {
                        System.out.println("The Employee Id is not in the database");
                    }
                    break;
                case 3:
                    System.out.println("Enter the Employee Id");
                    EmployeeId = s.nextLine();
                    Proceed = false;
                    for (int i = 0; i < cnt; i++) {
                        if (EmployeeId.equals(Employee_array[i].EmployeeId)) {
                            System.out.println("The Gross Salary for the Employee " + Employee_array[i].EmployeeName
                                    + " is " + Employee_array[i].netSalary());
                        }
                    }
                    if (!Proceed) {
                        System.out.println("The Employee Id is not in the database");
                    }
                    break;
                default:
                    System.out.println("Wrong input......Try again");
            }
            System.out.println(
                    "Choose one of the option given below:\n1. Create Employee\n2. Calculate Gross Salary\n3. Calculate Net Salary\n4. Exit");
            choice = s.nextInt();
        }

    }
}
