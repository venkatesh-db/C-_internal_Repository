#include<stdio.h>

// MEMORY SEGMENTS 
// CODE/TEXT
// STACK 
// DATA  ,  BSS , RODATA 
// HEAp

// ALL MEMORY ADDRESS  -> own this below address
// IMAGINE  41324516  41324517  41324518   41324519    -->  4 bytes 
// IMAGINE  12345678  12345679   12345680  12345681   -->  4 bytes 
// IMAGINE  17345678  17345679   17345680  17345681  -->  4 bytes 
// Owner of the memory : variables , pointer


// IMAGINE DS   41324516  41324517  41324518   41324519 -->  4 bytes 
 int global ;  // owner is variable global

void function();

void function()
{

 // IMAGINE stack  12345678  12345679   12345680  12345681   -->  4 bytes 
  int stacks; // owner is variable stacks

// IMAGINE HEAP  17345678  17345679   17345680  17345681  -->  4 bytes

  int *p= new int;  // owner is ?? address of first byte 17345678
                    // owner is pointer holds address of first byte 17345678


}

void Stacks(  );
void Stacks(  ) // variables , pointer --> stack
{
    // variables , pointer --> stack
 int a=12; 
 int b=13;

 char *p= new char; 
          // IMAGINE HEAP  17345667
          // heap memory has no owner

// p -> owner to a memory Stack memory 
// holds a address of 17345667

} // owner1. p owner2. b owner3.a deallocated


struct c 
{
       int a;    //  12345678  12345679  12345680 12345681
   char b;  //   12345682
};

void methods( );

void methods( )
{  // methods will not have  owners to any memory variables
   // methods will have address of owner variables
   // methods have pointer that has ownership 
}


void cmethods( struct c *venkat  , int a1)
{  // methods will not have  owners to any memory variables
   // methods will have address of owner variables
   // methods have pointer-venkat that has ownership 

   venkat->a=a1;
   venkat->b=23;

}


class Jolly
{
   int a;    //  12345678  12345679  12345680 12345681
   char b;  //   12345682

  public:
  void methods(int a1)
  {

  //  methods have  this pointer that has ownership 
  //  methods will have address of owner variables and access all owner 
  //  variables with address only
  //  a1 is stack owner variable copied to a of class variable  via address

      this->a=a1; // 12345678 -> 4 bytes  = 12
      this->b=13; // 12345678+4 =>12345682 -> 1 bytes = 13;
  }


};

int main()
{
   Stacks( ); // Line 37

   struct c  fantocpp;
   // object is allocated memory with owners a,b - unique address

   cmethods(&fantocpp , 35 );


   Jolly nithin;
   // object is allocated memory with owners a,b - unique address

   nithin.methods(23);
   //object is passing address which has owner is nithin to this pointer

   Jolly Pradeep;
  // object is allocated memory with owners a,b - unique address

  Pradeep.methods(45);
   //object is passing address which has owner is Pradeep to this pointer


   printf("%d %d ",sizeof(fantocpp) ,sizeof(Pradeep) );


   return 0;

}
