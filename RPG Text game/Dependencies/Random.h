#pragma once
#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include "Range.h"

int Random(Range r)
{
	return r.mLow + rand() % ((r.mHigh + 1) - r.mLow);
}
int Random(int a, int b)
{
	return a + rand() % ((b + 1) - a);
}

#endif;
