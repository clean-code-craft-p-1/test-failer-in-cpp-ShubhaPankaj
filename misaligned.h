#pragma once

namespace Misaligned {
	static const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
	static const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

	int findPairNumber(int majorCol, int minorCol);

	int printColorMap();
}