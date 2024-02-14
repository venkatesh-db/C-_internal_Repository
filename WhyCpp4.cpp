#include<stdio.h>
#include<string.h>

struct CPP
{
  int version;
  char *p;

  public:

  // FOCUS ON METHODNAME & METHODARGUMENTS & EXECUTION OF METHODS   

 CPP( )
{
    // methods will not have  owners to any memory variables
   // methods will have address of owner variables -version 2. pointer p
   // methods have pointer-this1 that has ownership

printf(" hi i am fan to cpp ");

    this->version =10;      // intalising 10 to an address 
    this->p= new char[10];   
    strcpy( this->p ,"hapy coders");

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
    printf(" hi i am gobi cpp coder");
}


};



int main()
{

struct CPP venkatesh;    // purpose to call method CPP  : intalise   
//  venkatesh is allocating memory for owner variable - version ,- p


venkatesh.get( ); // purpose :return a value
venkatesh.display( ); // purpose :to display value
 
 // purpose : call to ~CPP  deallocate 

return 0;
}


