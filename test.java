interface X{
    public abstract void display();
}
class A{
    void show(){
          System.out.println("Show");
    }
}
class B extends A implements X{
    public void display(){
          System.out.println("Display");
    }
}
class Example<T extends A & X>{
   T obj;
   Example(T obj){
         this.obj=obj;
   }
   void show(){
         obj.display();
   }
}
public class test{
   public static void main(String[] args){
         Example<B> c=new Example<B>(new B());
         c.show();
   }
}

