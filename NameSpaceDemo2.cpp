#include <iostream>
using namespace std;

namespace one
{
    int exampleVariable = 20;

    void HelloWorld()
    {
        cout << "Hello World!!" << endl;

    }

}
int main()
{
    cout << one::exampleVariable << endl;
    one::HelloWorld();
    
    return 0;
}