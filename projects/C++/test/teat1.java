// import java.lang.reflect.Constructor;
// import java.lang.reflect.Field;
// import java.lang.reflect.Method;


// class PrimitiveMan{
//     public PrimitiveMan() {
//     }
//     public void eat(){
//     System.out.println("Eating");
//     }
//     public int sleep(int a,int b){
//           System.out.println("Sleeping");
//           return 0;
//     }
// }
// class Human extends PrimitiveMan{
//    public Human() {
//    }
//   public void appearance(){
//           System.out.println("Good-looking");
//    }
// } 
// public class teat1 {
//    public static void main(String[] args) {
//          Class c=new Human().getClass();
//          Constructor[] constructors=c.getConstructors();
//          Method[] methods=c.getMethods();
//          Field[] fields=c.getFields();
//          System.out.println("Number of methods: "+methods.length);
//          System.out.println("Number of constructors: "+constructors.length);
//          System.out.println("Number of fields: "+fields.length);
//   }
// }
class Vehicle{
}
class Car extends Vehicle{
}
public class teat1 {
            public static void main(String[] args) {
                           Vehicle vehicle1=new Vehicle();
                           Vehicle vehicle2=(Vehicle)new Car();
                           Class c1=vehicle1.getClass();
                           System.out.println(c1);
                           Class c2=vehicle2.getClass();
                           System.out.println(c);
                           if(c1==c2){
                               System.out.println("Both objects are equal....");        
                           }
                           else{
                                       System.out.println("Both objects are not equal...");
                           }
               }
}