import java.util.*;

class InvalidEmpidException extends Exception {
    public String toString() {
        return "InvalidEmpidException: Employee id should be given between 1000 - 3000";
    }
}

class InvalidAgeException extends Exception {
    public String toString() {
        return "InvalidAgeEXception: You cannot become an employee because of your age";
    }
}

class Employee {
    private int empid;
    private String name;
    private int age;

    public void setEmpid(int empid) throws InvalidEmpidException {
        if (empid < 1000 || empid > 3000) {
            throw new InvalidEmpidException();
        }
        this.empid = empid;
    }

    public int getEmpid() {
        return empid;
    }

    public void setAge(int age) throws InvalidAgeException {
        if (age < 18 || age > 60) {
            throw new InvalidAgeException();
        }
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

class Creating_exceptions {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Employee e = new Employee();
        System.out.println("Hey Employee welcome,\nRegister yourself by providing your details.");
        Boolean flag = true;
        int empid;
        String Name;
        int age;

        // For name
        System.out.print("Enter your name: ");
        Name = s.nextLine();
        e.setName(Name);

        // For Employee Id
        while (flag) {
            try {
                System.out.print("Enter your Employee Id: ");
                empid = s.nextInt();
                e.setEmpid(empid);
                flag = false;
            } catch (InvalidEmpidException e1) {
                System.out.println(e1);
            }
        }

        // For age
        System.out.println("Enter your age: ");
        age = s.nextInt();
        try {
            e.setAge(age);
            System.out
                    .println("Thank you for providing your details " + e.getName() + ".\nHave a nice day of work ^_^");
        } catch (InvalidAgeException e2) {
            System.out.println(e2);
        }

    }
}