#include <iostream>
#include "misaligned.h"

int Misaligned::findPairNumber(int majorCol, int minorCol)
{
    return majorCol * 5 + minorCol;
}

int Misaligned::printColorMap()
{    
    int i = 0, j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            std::cout << findPairNumber(i, j)<< " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}
