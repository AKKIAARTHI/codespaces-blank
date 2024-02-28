//Base Class
class College {
    College() {
        System.out.println("College");
    }
}

// Simple Inheritance
class Department extends College {

    Department() {
        System.out.println("Department inherits College");
    }
}

// Multilevel Inheritance
// Here Student class inherits Department class(Hierarchical Inheritance)
class Student extends College {

    Student() {
        System.out.println("Student inherits college");
    }
}

// Here Teacher class inherits Department class(Hierarchical Inheritance)
class Teacher extends College {
    Teacher() {
        System.out.println("Teacher inherits college");
    }
}

class InheritanceTypes {
    public static void main(String[] args) {
        System.out.println("****Simple Inheritance****");
        Department simple = new Department();
        System.out.println();
        System.out.println("****Multilevel Inheritance****");
        Student Multilevel = new Student();
        System.out.println();
        System.out.println("****Hierarchical Inheritance****");
        Student hierarchical1 = new Student();
        Teacher hierarchical2 = new Teacher();
    }
}
