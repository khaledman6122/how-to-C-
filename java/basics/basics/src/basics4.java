import java.util.Scanner ;
 
public class basics4
{
    public static void main (String args[])
        {
                
            //using  two different constructors for the same class 
            // used classes ( Methodforbasics4 , Methodforbasics4_constructor)
            
                String word ;
                System.out.println("enter name :");
                
                Scanner cin=new Scanner(System.in);
                word=cin.nextLine();                 
                
                /*
                //try substr
                //word=word.substring(0,5);               //try different numbers  (theres an error here)
                //word=word.replaceAll("a", "Z");        // change first argument by the second argument                
                 */
                
                
                //creat an opject to deal with the "methofforbasic4"
                // opject name is  :  m_f_c1_opject
                Methodforbasics4 m_f_b4_opject=new Methodforbasics4();
                
                //calling functions in another class (methodforbasics4)
                m_f_b4_opject.take_name(word);
                m_f_b4_opject.output_name();
                
                
                
                ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                
                
                
                //creat an opject that pass string directly by the constructor to another class ( Methodforbasics4_constructor )
                Methodforbasics4_constructor M_C_opject=new Methodforbasics4_constructor("khaled adel (constructor)\n");
                M_C_opject.output_name();
                
                
                //////////////////////////////////////////////////////////////////////////////////////////////////////
                Methodforbasics4_constructor M_C_opject2=new Methodforbasics4_constructor( 4 );
                System.out.printf("factorial = %s",M_C_opject2.factorial()) ;
                
                
        }
 
}

