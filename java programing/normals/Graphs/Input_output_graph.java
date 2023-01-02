import java.util.Scanner;
import java.util.ArrayList;
// import java.util.Collection;
// import java.lang.*;

class List {
    public void read(ArrayList<ArrayList<Integer>> a) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the rows and column");
        int V = sc.nextInt();// Number of vertices
        int E = sc.nextInt();// Number of edges
        for (int i = 0; i < V + 1; i++) {
            a.add(new ArrayList<Integer>());
        }
        System.out.println("Enteer the directed edges");
        for (int i = 0; i < E; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            a.get(u).add(v);
        }
        sc.close();
    }

    public void display(ArrayList<ArrayList<Integer>> a) {
        for (int i = 0; i < a.size(); i++) {
            System.out.println("the list for the vertex " + i);
            for (int j = 0; j < a.get(i).size(); j++) {
                System.out.print("->" + a.get(i).get(j));
            }
            System.out.println();
        }
    }
}

class Input_output_graph {
    public static void main(String args[]) {
        ArrayList<ArrayList<Integer>> a = new ArrayList<>();
        List obj = new List();
        obj.read(a);
        obj.display(a);
    }
}