abstract class Job {
    abstract public void work();

    public void workplace() {
        System.out.println("Works in vizag");
    };
}

class Mechanic extends Job {
    public void work() {
        System.out.println("Mechanicher repairs the vehiles");
    }
}

class Teacher extends Job {
    public void work() {
        System.out.println("Teacher teach students");
    }
}

class partialAbstraction {
    public static void main(String[] args) {
        Mechanic obj1 = new Mechanic();
        obj1.work();
        obj1.workplace();
        Teacher obj2 = new Teacher();
        obj2.work();
        obj2.workplace();
    }
}
