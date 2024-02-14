#include<stdio.h>
#include<string.h>

class CPP
{

  private:  // Encapuslation :object cannot access owner variables 1.version 2. p

  int version;  
  char *p;

  public:  // Abstraction : Acessing  object variable using address not owner variables

  // FOCUS ON METHODNAME & METHODARGUMENTS & EXECUTION OF METHODS   

 CPP( )
{
    // methods will not have  owners to any memory variables
   // methods will have address of owner variables -version 2. pointer p
   // methods have pointer-this1 that has ownership

   printf(" hi i am fan to cpp \n ");
    this->version =10;      // intalising 10 to an address 
    this->p= new char[10];   
    strcpy( this->p ,"hapy coders");

}

 CPP( int v , char * p1 )
 {
     printf(" hi i am fan to cpp arguments constructor \n ");
         this->version =v;  // local variable data copied using this pointer via address
         this->p= new char[10];   
         strcpy( this->p ,p1); //  local variable data copied using this pointer via address
 }

int get( )
{
   return  this->version;   //copy data of variable to another memory 
}

void display(  )
{
  printf(" %d %s ",this->version , this->p ); // copy data to function printf 
}

 ~CPP( )
{
    delete this->p;
    printf(" hi i am gobi cpp coder \n");
}


};



int main()
{

 CPP venkatesh;    // purpose to call method CPP  : intalise   
//  venkatesh is allocating memory for owner variable - version ,- p

 CPP Pradeep(45,"c crazy developer");  // purpose to call method CPP  : intalise   
 // 2 argumnets cpp method is invoked


venkatesh.get( ); // purpose :return a value
venkatesh.display( ); // purpose :to display value
 
 Pradeep.display( );
 // purpose : call to ~CPP  deallocate 

return 0;
}


