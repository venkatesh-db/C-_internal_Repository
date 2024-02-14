#include <iostream>
#include <thread>
using namespace std;
 
// A dummy function
void foo(int Z)
{
    for (int i = 0; i < Z; i++) {
        cout << "Thread using function"
                " pointer as callable\n";
    }
}

class A
{
    public:

     A() = default; 
};

int main()
{
  //  std::thread obj(foo ,34);
   
   A obj;
   return 0;
}