#include "Weapon.h"
#include "Wizard.h"

int main()
{
	Weapon dagger;

	dagger.mName = "Dagger";
	dagger.mDamageRange.mLow = 1;
	dagger.mDamageRange.mHigh = 4;

	std::cout << dagger.mDamageRange.mHigh << std::endl;

}