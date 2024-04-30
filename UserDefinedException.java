import java.util.Scanner;

class myException extends Exception {
    public myException(String str) {
        super(str);
    }
}

public class UserDefinedException {
    static void validateAge(int a) throws myException {
        if (a < 18) {
            throw new myException("Invalid age, Min age required is 18");
        } else {
            System.out.println("You are welcome!");
        }
    }

    public static void main(String[] args) {
        try (Scanner scan = new Scanner(System.in)) {
            int age;
            System.out.print("Enter your age : ");
            age = scan.nextInt();
            validateAge(age);
        } catch (myException ex) {
            System.out.println(ex.getMessage());
        }
    }
}
