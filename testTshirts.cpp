#pragma once
#include <assert.h>
#include "testTshirts.h"
#include <iostream>



void Tshirts::testforTshirtSizes()
{
    assert(size(37) == 'S');
    assert(size(38) == 'S');
    assert(size(40) == 'M');
    assert(size(42) == 'M');
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
}
