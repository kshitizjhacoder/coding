import java.util.*;

class Node {
    int coeff;
    int pow;
    Node next;

    Node(int c, int p) {
        coeff = c;
        pow = p;
        next = null;
    }
}

class addpolynomial {
    // static void delete(Node prev, Node ptr) {
    // if (ptr.next == null)
    // ptr = null;
    // else if (prev == null) {
    // Node t = ptr;
    // ptr = ptr.next;
    // t = null;
    // } else {
    // prev.next = ptr.next;
    // ptr = ptr.next;
    // }
    // }

    static void comparepow(Node a, Node b, Node sum) {
        Node ptr = b;
        Node t = sum;
        while (ptr != null) {
            if (a.pow == ptr.pow) {
                a.coeff = a.coeff + ptr.coeff;
                a.pow = a.pow;
                ptr.coeff = 0;
                // delete(prev, ptr);
            }
            ptr = ptr.next;
        }
        sum = a;
        sum.next = t;
    }

    static void traverseb(Node st2, Node sum) {
        Node temp = st2;
        while (temp != null) {
            Node ptr = sum;
            if (temp.coeff != 0) {
                sum = temp;
                sum.next = ptr;
            }
            temp = temp.next;
        }
    }

    Node solution(Node st1, Node st2) {
        Node ptr = st1;
        Node sum = null;
        while (ptr.next != null) {
            comparepow(ptr, st2, sum);
            ptr = ptr.next;
        }
        if (ptr.next == null) {
            comparepow(ptr, st2, sum);
            traverseb(st2, sum);
        }
        return sum;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Node start1 = null, start2 = null, curr1 = null, curr2 = null;
        while (n-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            Node ptr = new Node(a, b);
            if (start1 == null) {
                start1 = ptr;
                curr1 = ptr;
            } else {
                curr1.next = ptr;
                curr1 = ptr;
            }
        }
        n = sc.nextInt();
        while (n-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            Node ptr = new Node(a, b);
            if (start2 == null) {
                start2 = ptr;
                curr2 = ptr;
            } else {
                curr2.next = ptr;
                curr2 = ptr;
            }
        }
        addpolynomial obj = new addpolynomial();
        Node sum = obj.solution(start1, start2);
        for (Node ptr = sum; ptr != null; ptr = ptr.next) {
            System.out.print(ptr.coeff + "x^" + ptr.pow);
            if (ptr.next != null)
                System.out.print("+");

        }
        System.out.println();
        sc.close();
    }
}