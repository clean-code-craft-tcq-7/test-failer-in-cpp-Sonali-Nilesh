#include <iostream>
#include <assert.h>
#include "tshirts.hpp"
#include "tshirts.cpp"

void tshirts_test()
{
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'M');
    assert(size(42) == 'M');
    std::cout << "Hi\n";
   
}
