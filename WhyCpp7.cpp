#include<stdio.h>

/*

    C++ -- Layer 1
    
  --> Compiler see any new memory allocation of objects + data
      Constructor , copy constructor  - new memory allocation of objects from existing object

--> Compiler see any delalocation  of new memory allocation of objects + address 
    destructor

 --> Compiler see any any exisiting memory  of object  is overwritten from another object  + data
      assignmnet operator methods

 --> Programmer works with exisiting value of object memory -->  data    setter , getter , logic methods    
     setter , getter , logic methods ,  validation methods

*/

class Methods 
{

   int a;

public:

Methods()
{
    this->a=5;
   printf(" invoking constructor \n");
}

~Methods()
{
 printf(" invoking destructor\n");
}

Methods(Methods &ref )
{
   this->a= ref.a;
    printf(" invoking copy constructor\n");
}
void operator=(Methods &ref )
{
    this->a= ref.a;
    printf(" invoking operator constructor\n");
}

void set(int a1)
{
       this->a=a1;
}

int get (){
    return this->a;
}


int validation()
{
    if (this->a < 0)
    {
        return -1; 
    }
    
    return 0;

}
    

};

int main(){

Methods strustrup; // encapsulation

Methods venkatesh= strustrup;

strustrup.set();

venkatesh = strustrup;

strustrup.get();

strustrup.validation();

Methods *p = new Methods(); // new memory allocation invoke constructor

Methods *p1 = p ; // no new memory allocation no copy constructor 

p1 ->set(34);

}