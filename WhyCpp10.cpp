
// Layer1 -> C++ Compiler 
// compiler looks at the developer code design of class
// 1. new memory allocation done by programer  - compiler call methods
// 2. help in  method calls  & inside method provide this pointer
// 3. help in method calls --> virtual methods


// Layer2 -->Programmer decide  memory  of the object can be various types
// array , heap array malloc calloc new  ,
// array of objects ,  string ,static variable 
// class object , class pointer , pointer to same class type 


//  Layer3 -->Programmer -  variables of the object 
// variables of the object  is same for every object of same class
// some variables , pointer or objects  can be copied , pass address
//  Methods -> intialisation , copy data , copy address ,
// overwrite , get , display , pass data to another method 
// logic , validation 


// Layer4 -->Programmer -- memory acessing
// MEmory allocation  int arr[5]; int *p =new int[5] ,char *p ="netapp pradeep"
// memory acessing     arr[0], p[0] ,  *(p+0), this->a , this->strustrup.heros


// Layer 5  -> programmer
//--> Programmer works with exisiting value of object memory -->
// with methods  constructor , copy constructor , assigmnet operator ,
// destructor,  setter , getter , logic methods    
//     setter , getter , logic methods ,  validation methods


// Layer 6 C++ Compiler 
// Inside Object -> Pointer vptr  --> call  methods


struct cppheros
{
    int heros;

};

class CPPLayer{

char arr[30];
char *p;
cppheros strustrup;

 public:

 CPPLayer()
 {
    strcpy(arr,"cpp completed");
    p =new char[15];
    strcpy(p,"cpplove");
    strustrup.heros =1;
 }

  CPPLayer(CPPLayer &ref )
  {
       strcpy(arr,ref.arr);
     //  this->p = ref.p; // shallow copy

       this->p=  new char[15];
       strcpy(p,ref.p);
       strustrup.heros = ref.strustrup.heros;

  }

  ~CPPLayer()
 {
    
 }

}

int main(){


CPPLayer giri;

CPPLayer jamesbond =giri;


}
