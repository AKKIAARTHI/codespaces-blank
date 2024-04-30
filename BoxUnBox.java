public class BoxUnBox {
    public static void main(String[] args) {
        int num = 10;
        Integer num1 = Integer.valueOf(num);// Boxing
        Integer num2 = num; // Auto-Boxing
        System.out.println("int(num) : " + num);
        System.out.println("Integer(num1) : " + num1);
        System.out.println("num1 type : " + num1.getClass());
        System.out.println("Integer(num2) : " + num2);
        System.out.println("num2 type : " + num2.getClass());
        int num3 = num1; // UnBoxing
        System.out.println("UnBoxing(num1) : " + num3);
    }
}
