import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

public class CopyFile {
    public static void main(String[] args) throws Exception {
        InputStream is = new FileInputStream("a.txt");
        OutputStream os = new FileOutputStream("b.txt");
        int c;
        while ((c = is.read()) != -1) {
            System.out.print((char) c);
            os.write(c);
        }
        is.close();
        os.close();
    }
}
