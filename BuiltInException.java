import java.util.InputMismatchException;
import java.util.Scanner;

class BuiltInException {
    public static void main(String[] args) {
        int x, y, index;
        int arr[] = { 1, 2, 3, 4, 5 };
        try (Scanner scan = new Scanner(System.in)) {
            System.out.print("Enter numerator : ");
            x = scan.nextInt();
            System.out.print("Enter denominator : ");
            y = scan.nextInt();
            int result = x / y;
            System.out.println("x/y = " + result);
            System.out.println("Array contains five elements");
            System.out.print("Enter index to access element in array : ");
            index = scan.nextInt();
            System.out.println("The array element at index " + index + " is " + arr[index]);
        } catch (ArithmeticException e1) {
            System.out.println("Denominator can't be zero");
        } catch (InputMismatchException e2) {
            System.out.println("Only integers allowed!");
        } catch (ArrayIndexOutOfBoundsException e3) {
            System.out.println("Max array size is 5, Array index must be less than 5!");
        } finally {
            System.out.println("Program terminates...");
        }
    }
}
