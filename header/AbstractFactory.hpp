#ifndef __ABSTRACTFACTORY_HPP__
#define __ABSTRACTFACTORY_HPP__

#include "./ability/mageAbility.hpp"
#include "./ability/knightAbility.hpp"
#include "./ability/archerAbility.hpp"
#include "mage.hpp"
#include "archer.hpp"
#include "knight.hpp"
#include <string>

using namespace std;

class AbstractFactory {

public:
	virtual Ability* CreateAbility() const = 0;
	virtual Character* CreateCharacter(const string&) const = 0;

};

class MageFactory : public AbstractFactory {

public:
	virtual Ability* CreateAbility() const {
		return new mageAbility();
	}

	virtual Character* CreateCharacter(const string& _name) const {
		return new Mage(_name);
	}

};

class KnightFactory : public AbstractFactory {

public:
	virtual Ability* CreateAbility() const {
		return new knightAbility();
	}

	virtual Character* CreateCharacter(const string& _name) const {
		return new Knight(_name);
	}

};

class ArcherFactory : public AbstractFactory {

public:
	virtual Ability* CreateAbility() const {
		return new archerAbility();
	}

	virtual Character* CreateCharacter(const string& _name) const {
		return new Archer(_name);
	}

};


#endif // !__ABSTRACTFACTORY_HPP__

