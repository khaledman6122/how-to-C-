//import java .util.Scanner;
import java.util.Random;
public class basics4_3 {
       public static void main(String args [])
       {
           //try char and string random generator 
           Random dice =new Random();      //Random generator 
       
           
           //////////////////////////////////////////////////////////////////////////////
           
              System.out.println("6 random options from 0 : 5");
            for(int i=1;i<=10;i++)
           {
               int number =dice.nextInt(6);        // from 0 to (0+6-1)=5  
               System.out.print(number+" ");
           }
          
            System.out.println("\n");
            ////////////////////////////////////////////////////////////////////////////
           
              System.out.println("6 random options from 1 : 6");
            for(int i=1;i<=10;i++)
           {
               int number =dice.nextInt(6)+1;         // from 1 to (1+6-1)=6  
               System.out.print(number+" ");
           }
           
           System.out.println("\n");
          
           ////////////////////////////////////////////////////////////////////////////
       
             System.out.println("3 random options from 1 : 3");
            for(int i=1;i<=10;i++)
           {
               int number =dice.nextInt(3)+1;           // from 1 to (1+3-1)=3        
               System.out.print(number+" ");
           }
           
           System.out.println("\n");
           
           ////////////////////////////////////////////////////////////////////////////
        
             System.out.println("4 random options from 10 : 13");
            for(int i=1;i<=10;i++)
           {
               int number =dice.nextInt(4)+10;           // from 10 to (10+4-1)=13  
               System.out.print(number+" ");
           }
           
           System.out.println("\n");
           
           ////////////////////////////////////////////////////////////////////////////
       
             System.out.println("6 random options from 15 : 20");
            for(int i=1;i<=10;i++)
           {
               int number =dice.nextInt(6)+15;         // from 15 to (15+6-1)=20  
               System.out.print(number+" ");
           }
           
           System.out.println("\n");
           
           ////////////////////////////////////////////////////////////////////////////
       
             System.out.println("3 random options from 1 : 3");
            for(int i=1;i<=10;i++)
           {
               int number =dice.nextInt(3)+1;            // from 1 to (1+3-1)=3  
               System.out.print(number+" ");
           }
           
           System.out.println("\n");
           
           ////////////////////////////////////////////////////////////////////////////
       
       
       
       
       
       
       
       
       
       
           
       }
}