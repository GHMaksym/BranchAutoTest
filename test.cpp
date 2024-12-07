#include <iostream>
#include "MyClass.h"

void test_func() {
    MyClass obj;
    if (obj.FuncA(3) == 1) {
        std::cout << "Test passed\n";
    } else {
        std::cout << "Test failed\n";
    }
}

int main() {
    test_func();
    return 0;
}
