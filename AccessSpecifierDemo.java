public class AccessSpecifierDemo {
    private int priVar;
    protected int proVar;
    public int pubVar;

    public void setVar(int priValue, int proValue, int pubValue) {
        this.priVar = priValue;
        this.proVar = proValue;
        this.pubVar = pubValue;
    }

    public void getVar() {
        System.out.println("Private variable: " + priVar);
        System.out.println("Protected variable: " + proVar);
        System.out.println("Public variable: " + pubVar);
    }

    public static void main(String[] args) {
        AccessSpecifierDemo demo = new AccessSpecifierDemo();

        // Assign values to the member variables
        demo.setVar(10, 20, 30);

        // Display the values of the member variables
        demo.getVar();
     }
}
