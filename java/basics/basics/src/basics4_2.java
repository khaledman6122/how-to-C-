import java.util.Scanner;
public class basics4_2 {

    public static void main (String args[])
    {
        Scanner cin=new Scanner(System.in);
        double x,y;
        
        System.out.print("enter X");
        x=cin.nextDouble();
        
        System.out.print("enter Y");
        y=cin.nextDouble();
        
       
        System.out.println("floor X = "+Math.floor(x));
        System.out.println("ceil Y = "+Math.ceil(y));
       
        
        
        System.out.println("X power 2= "+Math.pow(x,2));
        System.out.println("Y power 3= "+Math.pow(y,3));
        
        System.out.println("sqrt X = "+Math.sqrt(x));
        
        
        System.out.println("abs X = "+Math.abs(x));
        
        System.out.println("max  = "+Math.max(x,y));
        System.out.println("min  = "+Math.min(x,y));
        
    }
}
