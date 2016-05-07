import java.rmi.*;
import java.rmi.server.*;
class Client {
  public static void main(String a[]){
    try{
      Rmt intf = (Rmt) Naming.lookup("rmi://localhost:1099/rmiString");
       System.out.println(intf.sendString());
    }catch(Exception e){
      System.out.println(e);
    }


  }
}
