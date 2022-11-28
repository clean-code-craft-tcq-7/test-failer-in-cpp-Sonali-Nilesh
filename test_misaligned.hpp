#include <iostream>
#include <assert.h>
#include "misaligned.hpp"

void test_minor_color()
{
// printfirstmajorcolor(majorcolor, minorcolor, nof_maj_color)
assert(printfirstmajorcolor(1,4,5) == 'Slate'); //test minor color

std::cout << "All is not well (maybe!)\n";
}
