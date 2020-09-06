import java.util.Scanner;

public class Experiment_4 {
    public class Employee {
        String EmployeeName;
        int EmployeeId;
        int BasicPay;
        int Da;
        int Hra;
        int Deductions;
        int grossSalary;
        int netSalary;

        Employee(String EmployeeName, int EmployeeId, int BasicPay, int Da, int Hra, int Deductions) {
            this.EmployeeId = EmployeeId;
            this.EmployeeName = EmployeeName;
            this.BasicPay = BasicPay;
            this.Da = Da;
            this.Hra = Hra;
            this.Deductions = Deductions;
        }

        public int grossPay() {
            grossSalary = BasicPay + Hra + Da + Deductions;
            return grossSalary;
        }

        public int netSalary() {
            netSalary = BasicPay + Da - Hra - Deductions;
            return netSalary;
        }

    }

    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        Employee Employee_array[]  = new Employee[10];
        Sweitch;lpkm,nm,l

    }
}
