import java.util.Scanner ;

class mathclass
{
    
   public int factorial(int y)
   {
   int num=1;
   for(int i=1;i<=y;i++)
   num*=i;
   if(y<=0) return 0;
   else return num ;    
    }
           
   
   public char relation(int a,int b)
   {
       if(a>b) 
       {
       System.out.println("x > y");
       return '>' ;
       }
       if(b>a) 
       {
       System.out.println("y > x");
       return '<' ;    
       }
       if(a==b)
       {
       System.out.println("y == x");
       return '=' ;
       }
       else return '!' ;
   }

   public int abs(int a,int b)
   {
       if(a<0) 
       {
       System.out.print("abs X = ");
       return a ;
       }
       if(b<0) 
       {
       System.out.print("abs Y = ");
       return b ;
       }
       else 
       {
       System.out.println("Nothing done here");
       return 0 ;
       }
       
}

}




public class basics4_1
{
    public static void main (String args[])
    {
    Scanner cin=new Scanner (System.in);
    
    int x,y;
    mathclass opject1=new mathclass();
    
    System.out.println("enter numbr x");
    x=cin.nextInt();
    System.out.println("enter numbr y");
    y=cin.nextInt();
    
    System.out.printf("factorial x =%s \n",opject1.factorial(x));
   
    
    System.out.println(opject1.abs(x, y));
    
    System.out.println(opject1.relation(x, y));
    
    }
}





