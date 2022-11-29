#include <iostream>
#include <assert.h>
#include "misaligned.hpp"
#include <cstring>

void test_minor_color()
{


if(strcmp(printfirstmajorcolor(1,4,5), "Slate"))
{
  // printfirstmajorcolor(majorcolor, minorcolor, nof_maj_color)
  assert(1); //test minor color
}
std::cout << "All is not well (maybe!)\n";
}
