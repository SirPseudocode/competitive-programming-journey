// <<<<< My own version
// import java.util.Scanner;
// import java.util.Vector;

// public class C{
//     public static void main(String[] args){
//         var myObj = new Scanner(System.in);

//         Vector<String> db = new Vector<>();
//         Vector<Integer> counterDb = new Vector<>();

//         int n = myObj.nextInt();

//         while(n > 0){
//             String inp = myObj.next();

//             boolean duplicate = false;
//             for(int i = 0 ; i < db.size() ; i++){
//                 if(db.get(i).equals(inp)){
//                     duplicate = true;
//                     counterDb.set(i, (counterDb.get(i) + 1));

//                     System.out.println(inp + counterDb.get(i));
//                     break;
//                 }
//             }

//             if(!duplicate){
//                 db.add(inp);
//                 counterDb.add(0);

//                 System.out.println("OK");
//             }
//             n--;
//         }
//     }
// }

// ===== Active Version by Gemini 3.8 Flash
import java.util.Scanner;
import java.util.HashMap;

public class C {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        
        HashMap<String, Integer> db = new HashMap<>();

        int n = myObj.nextInt();

        while (n > 0) {
            String inp = myObj.next();

            if (db.containsKey(inp)) {
                int count = db.get(inp) + 1;
                db.put(inp, count);          
                System.out.println(inp + count);
            } else {
                db.put(inp, 0);
                System.out.println("OK");
            }
            n--;
        }
        myObj.close();
    }
}
// >>>>> END Alternative Solutions