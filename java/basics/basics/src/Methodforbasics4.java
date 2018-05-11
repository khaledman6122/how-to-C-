public class Methodforbasics4
    {
     private String name;
/*
    //costructor (the costructor name must be the same as the class name  Methodforbasics4) 
     public Methodforbasics4(String name_from_basics4)
     {
         name= name_from_basics4;
     }
  */   
     
    //method
    public void take_name(String name_from_basics4)
    {
    name=name_from_basics4;  
     }
    
    
    //method
    public void output_name()
    {
    // %s  to call second argument (calling function)
    System.out.printf("void method output : %s", pass_name_to_output_method()) ;
    
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