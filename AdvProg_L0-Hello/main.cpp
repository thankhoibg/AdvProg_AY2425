#include <iostream>
#include "hello.h"

// why this code can not run ?
// because the function printGameOver() is not defined in hello.h
// so the compiler can not find the definition of the function

int main(){
    std::cout << printGameOver() << std::endl ;
}
