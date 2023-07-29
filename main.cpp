#include "simple_vector.h"
#include <iostream>
// Tests
#include "tests.h"
#include <string>

#include <vector>

using namespace std;
int main() {
    Test1();
    Test2();

    TestReserveConstructor();
    TestReserveMethod();

    
    std::cout << " -- OK --- " << std::endl;
    return 0;
}