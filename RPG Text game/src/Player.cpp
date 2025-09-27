#include "Player.h"

//constructors
Player::Player()
{
	mName         =	"Deafult";
	mClassName    = "Deafult";
	mAccuracy     = 0;
	mHitPoints    = 0;
	mMaxHitPoints = 0;
	mExpPoints	  = 0;
	mNextLevelExp = 0;
	mLevel		  = 0;
	mArmor		  = 0;
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
		//Fighter
	case 1: 
		mClassName = "Fighter";
		mAccuracy = 10;
		mHitPoints = 20;
		mMaxHitPoints = 20;
		mExpPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 4;
		mWeapon.mName = "Long sword";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 8;
		break;
	}
}

