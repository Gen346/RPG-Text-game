#include "../Dependencies/Random.h"
#include "Player.h"

//constructors
Player::Player()
{
	mName = "Deafult";
	mClassName = "Deafult";
	mAccuracy = 0;
	mHitPoints = 0;
	mMaxHitPoints = 0;
	mExpPoints = 0;
	mNextLevelExp = 0;
	mLevel = 0;
	mArmor = 0;
	mWeapon.mName = "Dafault";
	mWeapon.mDamageRange.mLow = 0;
	mWeapon.mDamageRange.mHigh = 0;
}

//getters
int Player::getArmor()
{
	return mArmor;
}
std::string& Player::getName()
{
	return mName;
}

//methods
bool Player::isDead()
{
	return mHitPoints <= 0;
}
void Player::takeDamage(int damage)
{
	mHitPoints -= damage;
}
void Player::createClass()
{
	std::cout << "CHARACTER CLASS GENERATOR" << std::endl;
	std::cout << "=========================" << std::endl;

	std::cout << "Enter your character name: ";
	std::getline(std::cin, mName);

	std::cout << "Please select a character class number..." << std::endl;
	std::cout << "1)Fighter 2)Wizard 3)Cleric 4)Thief : ";

	int characterNum = 1;
	std::cin >> characterNum;

	switch (characterNum)
	{
	case 1: //Fighter
		mClassName    = "Fighter";
		mAccuracy     = 10;
		mHitPoints    = 20;
		mMaxHitPoints = 20;
		mExpPoints    = 0;
		mNextLevelExp = 1000;
		mLevel		  = 1;
		mArmor		  = 4;
		mWeapon.mName = "Long sword";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 8;
		break;
	case2://Wizard
		mClassName	  = "Wizard";
		mAccuracy	  = 5;
		mHitPoints	  = 10;
		mMaxHitPoints = 10;
		mExpPoints	  = 0;
		mNextLevelExp = 1000;
		mLevel		  = 1;
		mArmor		  = 1;
		mWeapon.mName = "Staff";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 4;
		break;
	case3://Cleric
		mClassName	  = "Cleric";
		mAccuracy	  = 8;
		mHitPoints	  = 15;
		mMaxHitPoints = 15;
		mExpPoints	  = 0;
		mNextLevelExp = 1000;
		mLevel		  = 1;
		mArmor		  = 3;
		mWeapon.mName = "Flail";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 6;
		break;
	default: //Thief
		mClassName	  = "Thief";
		mAccuracy	  = 7;
		mHitPoints	  = 12;
		mMaxHitPoints = 12;
		mExpPoints	  = 0;
		mNextLevelExp = 1000;
		mLevel		  = 1;
		mArmor		  = 2;
		mWeapon.mName = "Short sword";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 6;
	}
}
bool Player::attack(Monster& monster)
{
	int selection = 1;
	std::cout << "1) Attack 2) Run: ";
	std::cin >> selection;
	std::cout << std::endl;
	switch (selection)
	{
	case 1:
		std::cout << "You attack an " << monster.getName()
			<< " with a " << mWeapon.mName << std::endl;

		if (Random(0, 20) < mAccuracy)
		{
			int damage = Random(mWeapon.mDamageRange);
			int totalDamage = damage - monster.getArmor();

			if (totalDamage <= 0)
			{
				std::cout << "The monster's attack failed to "
					<< "penetrate your armor." << std::endl;
			}
			else
			{
				std::cout << "You are hit for " << totalDamage
					<< " damage!" << std::endl;
				monster.takeDamage(totalDamage);
			}
		}
		else
		{
			std::cout << "You missed!" << std::endl;
		}
		std::cout << std::endl;
		break;

	case 2:
		int roll = Random(1, 4);

		if (roll == 1)
		{
			std::cout << "You ran away!" << std::endl;
			return true;
		}
		else
		{
			std::cout << "You could not escape!" << std::endl;
			break;
		}
	}
}


