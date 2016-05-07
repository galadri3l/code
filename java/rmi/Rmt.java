import java.rmi.*;
import java.rmi.server.*;
import java.io.*;

interface Rmt extends Remote{
  String sendString() throws RemoteException; //java.rmi.Naming bind rebind unbind lookup static methods
}

class SndString extends UnicastRemoteObject implements Rmt {
  public String sendString(){
    return "Hello World!";
  }

  SndString () throws RemoteException{
  }
}

class Test {
  public static void main(String a[])
  {
    try{
      SndString ob = new SndString();
      Naming.rebind("rmiString",ob);
      System.out.println("Server is running");
    }catch(Exception e){
      System.out.println(e);
    }
  }
}
