#include<stdio.h>
#include<string.h>

struct CPP
{

  int version;
  char *p;

  public:

void method( )
{
    // methods will not have  owners to any memory variables
   // methods will have address of owner variables -version 2. pointer p
   // methods have pointer-this1 that has ownership

    this->version =10;      // intalising 10 to an address 
    this->p= new char[10];   
    strcpy( this->p ,"hapy coders");

}
int method1( )
{
   return  this->version;   //copy data of variable to another memory 
}

void method2(  )
{
  printf(" %d %s ",this->version , this->p ); // copy data to function printf 
}

void method3( )
{
    delete this->p;
}


};



int main()
{

struct CPP venkatesh;   
//  venkatesh is allocating memory for owner variable - version ,- p

venkatesh.method(  ); //purpose : intalise 
venkatesh.method1( ); // purpose :return a value
venkatesh.method2( ); // purpose :to display value
venkatesh.method3(); // purpose : deallocate 

return 0;
}


