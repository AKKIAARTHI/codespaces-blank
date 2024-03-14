class A {
    public void mul(int a, int b) {
        System.out.println(a + " X " + b + " = " + (a * b));
    }

    public void mul(int a, int b, int c) {
        System.out.println(a + " X " + b + " X " + c + " = " + (a * b * c));
    }

    public void mul(double a, double b) {
        System.out.println(a + " X " + b + " = " + (a * b));
    }

    public void mul(double a, double b, double c) {
        System.out.println(a + " X " + b + " X " + c + " = " + (a * b * c));
    }
}

class methodOverloading {
    public static void main(String[] args) {
        A obj = new A();
        obj.mul(3, 4);
        obj.mul(3.4, 2.6);
        obj.mul(9.2, 2.1, 6.3);
    }
}
