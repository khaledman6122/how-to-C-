import java.util.Scanner;
public class basics5 {
  
    
    //methodd in the same class    must be static
    public static void  multiplied(int A[])   //Error---> public void  must be "public static void"
             {
                int total=1 ;
                    for(int i=0;i<A.length;i++)
                      total*=A[i];
                    
                    System.out.println("multiplied = "+total);
                        
             }
      
    
    
  public static void main (String args[])
        {
            Scanner cin=new Scanner (System.in);
            
            int size,size2,size3,size4;
            
            int total =0;          //by default intiallized with 0 
            
            //////////////////////////////////////////////////////////////////////////
            System.out.println("array1 size : ");
            size=cin.nextInt();
            int arr []=new int [size];
            System.out.println("array1 elements : ");
            
            for(int i=0;i<size;i++)                 // for(int i=0;i<arr.length;i++) 
                arr[i]=cin.nextInt();
        
            for(int i=0;i<size;i++)                // for(int i=0;i<arr.length;i++)      
                System.out.print(arr[i]+" ");       
            
             System.out.print("\n");       
              multiplied(arr);
             
             /////////////////////////////////////////////////////////////////////////
            
             int arr2 []={10,20,30,40,50};
             System.out.print("array2 size = "+arr2.length+"\n");            
             for(int i:arr2)                          // Error  ---> for(int i=0:arr2)   'i' intiallized by zero dont intiallized it             
             {
              System.out.print(i+" ");               // Error  ---> System.out.print(arr2[i]+" ");  you are dealing and working with a Variable 'i' not arr2[i]                      
               total+=i;                              // Error  ---> total+=arr2[i];
             }
             System.out.println("\nTotal arr2 = "+total);       
            
              multiplied(arr2);
             
            //////////////////////////////////////////////////////////////////////////
            
             
            System.out.println("array3 size : "); 
            size3=cin.nextInt();
            int arr3 [][]=new int [size3][size3];
            
            System.out.println("array3 elements : ");
            for(int i=0;i<size3;i++)
            {
              for(int j=0;j<size3;j++)
                {
                arr3[i][j]=cin.nextInt();
                }
            }
        
            for(int i=0;i<size3;i++)                
            {
               for(int j=0;j<size3;j++)
            {
                System.out.print(arr3[i][j]+" ");            
            }
               System.out.print("\n");            
            }   
        
            
          
             //////////////////////////////////////////////////////////////////////////
            //try array of char 
             /*
             System.out.println("array4 size : ");
            size4=cin.nextInt();
            char arr4 []=new char [size];
            System.out.println("array4 elements : ");
            
            for(int i=0;i<size4;i++)                 // for(int i=0;i<arr.length;i++) 
                
        
            for(int i=0;i<size4;i++)                // for(int i=0;i<arr.length;i++)      
                System.out.print(arr4[i]+" ");       
            
             System.out.print("\n");       
    
             */
             /////////////////////////////////////////////////////////////////////////
           


        }

        
}
