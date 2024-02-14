
/*  

    Objects --> Holds data 

    || DEPENDENCY
 
  Methods   --> NAME OF THE METHOD , Arguments 

  With data of an Single object what we can do 

  --> Compiler see any new memory allocation of objects 
      Constructor , copy constructor 

--> Compiler see any delalocation  of new memory allocation of objects 
    destructor

 --> Compiler see any any exisiting memory  of object  is overwritten 
      assignmnet operator methods

 --> Programmer works with exisiting value of object memory -->    setter , getter , logic methods    
     setter , getter , logic methods ,  validation methods
         
  1.  copy same data to another object 
  2. overwrite the data 
  3. deallocte the memory
  4. Logics on the data       
  5. get or return the data

*/

// 1. copy same data to another object   --> METHOD  automatically called
// 2. overwrite the data                 ---> METHOD  Programmer explicity call -- data 
// 3. deallocte the memory               ---> MEthod  automatically called 
// 4. Logics on the data                 ---> MEthod  Programmer explicity call -- data
// 5. get or return the data              --> MEthod  Programmer explicity call -- data

#include<stdio.h>

class Methods 
{

   int a;

public:
Methods()
{
    this->a=5;
   printf(" invoking constructor");
}

void set()
{
       this->a=6;
}
    

};

int main(){

Methods strustrup;

Methods venkatesh= strustrup;

strustrup.set();

venkatesh = strustrup;

}