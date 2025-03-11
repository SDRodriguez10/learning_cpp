// foward declarations
#include "io.h"

int main()
{
    int firstVal { readNumber() };

    int seconVal { readNumber() };

    writeAnswer(firstVal + seconVal);

    return 0;
}
