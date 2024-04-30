public class MuteImMute {
    public static void main(String[] args) {
        int i = 10;
        System.out.println("i ID before modification : " + System.identityHashCode(i));
        i += 20;
        System.out.println("i ID after modification  : " + System.identityHashCode(i));
        String str = "Hello";
        System.out.println("str ID before modification : " + System.identityHashCode(str));
        str += "Ajay";
        System.out.println("str ID after modification  : " + System.identityHashCode(str));
        StringBuilder Obj = new StringBuilder("Hello");
        System.out.println("Obj ID before modification : " + System.identityHashCode(Obj));
        Obj.append(" World");
        System.out.println("Obj ID after modification  : " + System.identityHashCode(Obj));
    }
}
