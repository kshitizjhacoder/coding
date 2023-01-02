import java.util.Random;
// import java.util.random.*;

public class Tokenizer {
    static int randominteger;

    public static void main(String[] args) {
        System.out.println("Entering 10 random integer");
        Mythread1 thread1 = new Mythread1();
        thread1.start();
    }
}

class Mythread1 extends Thread {
    public void run() {
        int i = 0;
        try {
            while (i < 10) {
                Random ran = new Random();
                Tokenizer.randominteger = ran.nextInt(10);
                System.out.print((i + 1) + "the random integer is " + Tokenizer.randominteger);
                new Mythread2().start();
                new Mythread3().start();
                Thread.sleep(1000 * 1);
                System.out.println();
                i++;
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class Mythread2 extends Thread {
    public void run() {
        System.out
                .println(Tokenizer.randominteger + "the square is" + Tokenizer.randominteger * Tokenizer.randominteger);
    }
}

class Mythread3 extends Thread {
    public void run() {
        System.out.println(Tokenizer.randominteger + " the cube is "
                + Tokenizer.randominteger * Tokenizer.randominteger * Tokenizer.randominteger);
    }
}
