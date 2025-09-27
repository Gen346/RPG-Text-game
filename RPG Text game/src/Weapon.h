#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include "../Dependencies/Range.h"
#include <string>

struct Weapon
{
	std::string mName;
	Range mDamageRange;
};

#endif // !WEAPON_H

