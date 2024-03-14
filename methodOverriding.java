class Job {
    void work() {
        System.out.println("Doing some job");
    };
};

class Mechanic extends Job {
    void work() {
        System.out.println("Mechanicher repairs the vehiles");
    }
}

class Teacher extends Mechanic {
    void work() {
        System.out.println("Teacher teaches to students");
    }
}

class methodOverriding {
    public static void main(String[] args) {
        Teacher sir = new Teacher();
        Mechanic Mechanicher = new Mechanic();
        sir.work();
        Mechanicher.work();
    }
}
