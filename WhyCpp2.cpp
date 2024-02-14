#include<stdio.h>
#include<string.h>

struct CPP
{
  int version;
  char *p;
};

void method( struct CPP *this1 )
{
    // methods will not have  owners to any memory variables
   // methods will have address of owner variables -version 2. pointer p
   // methods have pointer-this1 that has ownership

    this1->version =10;      // intalising 10 to an address 
    this1->p= new char[10];   
    strcpy( this1->p ,"hapy coders");

}
int method1( struct CPP *this1 )
{
   return  this1->version;   //copy data of variable to another memory 
}

void method2( struct CPP *this1 )
{
  printf(" %d ",this1->version ); // copy data to function printf 
}

void method3( struct CPP *this1 )
{
    delete this1->p;
}

int main()
{

struct CPP venkatesh;   
//  venkatesh is allocating memory for owner variable - version ,- p

method(&venkatesh  ); //purpose : intalise 
method1(&venkatesh ); // purpose :return a value
method2(&venkatesh ); // purpose :to display value
method3(&venkatesh); // purpose : deallocate 

return 0;
}


