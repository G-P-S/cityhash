
#include "city.h"
#include <stdio.h>

static char buff[5*1024];

int main (int argc, char** argv)
{
    int numIter = 1000;
    int i;

    if (argc > 1)
    {
        numIter = atoi(argv[1]);
    }
    printf("Running %d iterations of CityHash\n", numIter);

    for (i = 0; i < numIter; i++)
    {
        uint128 hashData = CityHash128(buff, sizeof(buff));
    }
    printf("DONE!!\n");
}
