#include<stdio.h>

/*

      C++ --> Layer 1
   --> new memory allocation objects are done by programmer

  --> Compiler see any new memory allocation of objects + data
      Constructor , copy constructor  - new memory allocation of objects from existing object

--> Compiler see any delalocation  of new memory allocation of objects + address 
    destructor

 --> Compiler see any any exisiting memory  of object  is overwritten from another object  + data
      assignmnet operator methods

 --> Programmer works with exisiting value of object memory -->  data    setter , getter , logic methods    
     setter , getter , logic methods ,  validation methods

   --> inside methods Constructor ,  copy constructor , assignmnet operator methods
     -->  if any new memory allocation ( heap memory ) are done by programmer 
     --> the owner of the memory is developer - programmer
     -->  allocation, intalisation , delloation , copy address , copy data
     
*/

class Methods 
{

   int *a;

public:

Methods()
{
    this->a= new int;
    *this->a=5;
   printf(" invoking constructor \n");
}

~Methods()
{
   // delete this->a;
    printf(" invoking destructor\n");
}

Methods(Methods &ref )
{

   // this->a =  ref.a;  //shallow copy

    this->a= new int;    // deep copy 
   *this->a =  *ref.a;
    printf(" invoking copy constructor\n");
}
void operator=(Methods &ref )
{

    *this->a= *ref.a;
    printf(" invoking operator constructor\n");
}

void set(int a1)
{
       *this->a=a1;
}

int* get (){
    return this->a;
}


int validation()
{
    if (this->a == NULL)
    {
        return -1; 
    }
    
    return 0;
}
    

};

int main(){

Methods strustrup;

Methods venkatesh= strustrup; // venkatesh.Methods(&venkatesh,strustrup)

strustrup.set(34);

venkatesh = strustrup;   // venkatesh.operator=(&venkatesh,strustrup)

strustrup.get();

strustrup.validation();

Methods *p = new Methods(); // new memory allocation invoke constructor

Methods *p1 = p ; // no new memory allocation no copy constructor 

// Pointer has address u want to copy addreess
// compiler new memory allocation or dealing data of object 

p1 ->set(34);

}