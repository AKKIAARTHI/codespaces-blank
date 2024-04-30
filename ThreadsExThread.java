class MyThread1 extends Thread {
    @Override
    public void run() {
        System.out.println("Thread-1 Running...");
        System.out.println(getName());
    }
}

class MyThread2 extends Thread {
    @Override
    public void run() {
        System.out.println("Thread-2 Running...");
        System.out.println(getName());
    }
}

public class ThreadsExThread {
    public static void main(String[] args) {
        MyThread1 thread1 = new MyThread1();
        MyThread2 thread2 = new MyThread2();
        thread1.start();
        thread2.start();
    }
}
