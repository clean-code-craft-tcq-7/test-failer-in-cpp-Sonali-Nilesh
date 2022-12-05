#include <assert.h>
#include "alerter.cpp"

void alerttest(int alertFailureCount)
{
  if (assert(alertFailureCount == 1)
