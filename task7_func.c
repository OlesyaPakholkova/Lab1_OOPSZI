#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

double x, result;

void f()
{
    result = (pow(x,2) + 2*x - 3 + (x+1) * sqrt(pow(x,2)-9))/(pow(x,2) - 2*x - 3 + (x+1) * sqrt(pow(x,2)-9));
}
