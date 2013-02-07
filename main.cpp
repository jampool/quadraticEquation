#include <iostream>
#include "quadratic.h"


using namespace std;

int main()
{
    int Determinant=0;
    quadratic q;
    q.assigncoefficient();
    q.valuex(1);
    q.solveroot(Determinant);
    q.solveextremum();

    return 0;

}
