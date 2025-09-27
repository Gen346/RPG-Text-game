#pragma once
#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
class Wizard
{
public:
	Wizard();
	Wizard(std::string name, int hitPoints, int magicPoints, int armor);
	~Wizard();

	void fight();
	void talk();
	void castSpell();

	int getArmor();
	void setArmor(int armor);

	private:
	std::string mName;
	int mHitPoints;
	int mMagicPoints;
	int mArmor;
};

#endif

