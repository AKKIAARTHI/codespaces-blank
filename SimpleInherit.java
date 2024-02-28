class college {
    String collegeName = "MVGR";
    int collegeCode = 33;
}

class student extends college {
    String name = "Ajay";
    int roll = 123;
}

class SimpleInherit {
    public static void main(String[] args) {
        student student1 = new student();
        System.out.println(student1.name);
        System.out.println(student1.roll);
        System.out.println(student1.collegeName);
    }
}
