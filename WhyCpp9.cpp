
// Layer1 -> C++
// compiler looks at the developer 
// 1. new memory allocation done by programer  call methods
// 2. help in  method calls  & inside method provide this pointer
// 3. help in method calls --> virtual methods


// Layer2 -->Programmer -  memory  of the object can be various types
// array , heap array malloc calloc new  ,
// array of objects ,  string ,static variable 
// class object , class pointer , pointer to same class type 


//  Layer3 -->Programmer -  data of the object 
//  Methods -> intialisation , copy data , copy address ,
// overwrite , get , display , pass data to another method 
// logic , validation 



// Layer4 -- memory acessing
// MEmory allocation  int arr[5]; int *p =new int[5] ,char *p ="netapp pradeep"
// memory acessing     arr[0], p[0] ,  *(p+0)

// Layer 5  C++ Compiler 
// Inside Object -> Pointer vptr --> call  methods


#include<stdio.h>

class holiday
{

  public:

   int a;
   int b;
   char *p;

  
  holiday()
  {
    printf("%d %d %s ",this->a,this->b , this->p);
    
    a=1;
    b=2;
    p=new char;
    
        printf("%d %d %u ",this->a,this->b , this->p);
  }
  
};

int main()
{

holiday sankranthi;



}