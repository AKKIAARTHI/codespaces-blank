
interface Job {
    public void work();

    public void workplace();
}

class Mechanic implements Job {
    public void work() {
        System.out.println("Mechanicher repairs the vehiles");
    }

    public void workplace() {
        System.out.println("Works at garage");
    }

}

class Teacher implements Job {
    public void work() {
        System.out.println("Teacher teach students");
    }

    public void workplace() {
        System.out.println("Works at college");
    }
}

class pureabstraction {
    public static void main(String[] args) {
        Mechanic obj1 = new Mechanic();
        obj1.work();
        obj1.workplace();
        Teacher obj2 = new Teacher();
        obj2.work();
        obj2.workplace();
    }
}
