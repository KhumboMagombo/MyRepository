#include <iostream>
using namespace std;
namespace one{
    int exampleVariable;

    void HelloWorld();
}

using namespace one;

int main(){
    exampleVariable = 20;

    HelloWorld();

    return 0;
}
