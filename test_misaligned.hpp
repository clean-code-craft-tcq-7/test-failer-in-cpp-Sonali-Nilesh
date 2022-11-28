#include <iostream>
#include <assert.h>
#include "misaligned.hpp"
#include "printminorcolors.cpp"

test_minor_color(){
// printfirstmajorcolor(majorcolor, minorcolor, nof_maj_color)
assert(printfirstmajorcolor(2,4,5) == "Brown"); //test minor color

std::cout << "All is not well (maybe!)\n";
}
