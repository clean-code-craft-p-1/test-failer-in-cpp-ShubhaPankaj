#pragma once
#include <assert.h>
#include "testMisaligned.h"
#include <iostream>


void Misaligned::testForMisalignment()
{
    int result = Misaligned::printColorMap();
    assert(Misaligned::findPairNumber(0, 0) == 1);
    assert(Misaligned::findPairNumber(5,5) == 25);
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
}
