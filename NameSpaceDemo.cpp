#include <iostream>
using namespace std;

namespace one
{
    int exampleVariable;

    void HelloWorld();
}


int main()
{
  one::exampleVariable = 20;
  
  one::HelloWorld();

  return 0;

}

void one::HelloWorld()
{
    cout << "Hello World!" << endl;

    cout << exampleVariable << endl;
}