#include "Wizard.h"

Wizard::Wizard()
{
	mName = "DefaultName";
	mHitPoints = 0;
	mMagicPoints = 0;
	mArmor = 0;
}
Wizard::Wizard(std::string name, int hitPoints, int magicPoints, int armor)
{
	mName = name;
	mHitPoints = hitPoints;
	mMagicPoints = magicPoints;
	mArmor = armor;
}
Wizard::~Wizard(){}


void Wizard::fight()
{
	std::cout << "Fighting." << std::endl;
}
void Wizard::castSpell()
{
	std::cout << "Cast spell." << std::endl;
}
void Wizard::talk()
{
	std::cout << "Talking." << std::endl;
}

int Wizard::getArmor()
{
	return mArmor;
}
void Wizard::setArmor(int armor)
{
	if (armor >= 0)
	{
		mArmor = armor;
	}
}

