import java.util.Scanner ;
    public class basics3 {
        public static void main (String args[]) {
   
               
            int x,y,z;
            Scanner cin=new Scanner(System.in);
            
            
                    
            
                    System.out.println("enter x");
                    x=cin.nextInt();
            
                    if(x>5) 
                       System.out.println("X > 5");
                    else   
                        System.out.println("X <= 5");
                       
                   
                    
                    
                    System.out.println("enter x");
                    x=cin.nextInt();
           
                    System.out.println("enter y");
                    y=cin.nextInt();
            
                    if(x>5 && y <6)
                        System.out.println("true   x>5 && y <6 ");
                    else
                        System.out.println("true ELSE ");
                   
                   
                   
                    
                    
                    
                    
                    
                    System.out.println("enter x");
                    x=cin.nextInt();
           
                    System.out.println("enter y");
                    y=cin.nextInt();
            
                   if(x>5 || y <6)
                       System.out.println("true x>5 || y <6 ");
                   else
                       System.out.println("true ELSE ");
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   System.out.println("enter x");
                    x=cin.nextInt();
           
                    System.out.println("enter y");
                    y=cin.nextInt();
                    
                    System.out.println("enter z");
                    z=cin.nextInt();
            
                   if(x>5 || (y <6 && z>3))
                       System.out.println("true x>5 || (y <6 && z>3) ");
                   else
                       System.out.println("true ELSE ");
                   
                   
                   
                   
        }
    }