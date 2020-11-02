import java.util.Scanner;

public class Shapes {
    public static class Shape {
        private double height;
        private double width;

        public void setValues(double height, double width) {
            this.height = height;
            this.width = width;
        }

        public double getHeight() {
            return height;
        }

        public double getWidth() {
            return width;
        }

        public double getArea() {
            return height * width;
        }
    };

    public static class Rectangle extends Shape {
        public double getArea() {
            return getHeight() * getWidth();
        }
    };

    public static class Triangle extends Shape {
        public double getArea() {
            return (getHeight() * getWidth()) / 2;
        }
    };

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("What do you want to choose:\n1) Rectangle\n2) Triangle\n3) exit");
        int choice = s.nextInt();
        int height, width;
        Shape shape_container;
        while (choice != 3) {
            switch (choice) {
                case 1:
                    System.out.println("You have chosen Rectangle");
                    System.out.println("Enter height:");
                    height = s.nextInt();
                    System.out.println("Enter width:");
                    width = s.nextInt();
                    shape_container = new Rectangle();
                    shape_container.setValues(height, width);
                    System.out.println("The area of the rectangle is: " + shape_container.getArea());
                    break;
                case 2:
                    System.out.println("You have chosen Triangle");
                    System.out.println("Enter base:");
                    width = s.nextInt();
                    System.out.println("Enter height:");
                    height = s.nextInt();
                    shape_container = new Triangle();
                    shape_container.setValues(height, width);
                    System.out.println("The area of the Triangle is: " + shape_container.getArea());
                    break;
                default:
                    System.out.println("Wrong choice input... Please choose a no between 1 to 3");
            }
            System.out.println("What do you want to choose:\n1) Rectangle\n2) Triangle\n3) Exit");
            choice = s.nextInt();
        }
    }
}
