public class Methodforbasics4_constructor
    {
     private String name;
     private int number ;
     public int result = 1;  //for factorial method you have to intialize it by 1 do not ever leave it without intialization
   
     
     //costructor (the costructor name must be the same as the class name  Methodforbasics4) 
     public Methodforbasics4_constructor(String name_from_basics4)
     {
         name= name_from_basics4;
     }
     
     //costructor (int datatype) (the costructor name must be the same as the class name  Methodforbasics4) 
      public Methodforbasics4_constructor(int x)
     {
          number=x ;
     }
     
      public int factorial()
     {
     for(int i=1;i<=number;i++)
           result*=i;
        
        return result ;
     }
     
     
     
    //method   it has no influence in this class because you already get  the sting with the above constructor
    public void take_name(String name_from_basics4)
    {
    name=name_from_basics4;  
     }
    
    
    //method
    public void output_name()
    {
    // %s  to call second argument (calling function)
    System.out.printf("\n void method output : %s", pass_name_to_output_method()) ;
    
    //without %s  it will print the message only without calling function
    //System.out.printf("void method output ", pass_name_to_output_method()) ;
    }


    
    //a private variable returned by a private method to a Public method 
    private String pass_name_to_output_method() //it can be public and private because it has no influence on any other classes 
    {
        //only you can return name in its own class(this class only) because its a private variable
      return name ;
      }

    
    

        }