#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef MOBILEANIMAL_H
#define MOBILEANIMAL_H
#include <iostream>
#include "Animal.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class MobileAnimal :public Animal {
public:
	virtual void GetType() = 0;
	virtual void Move() = 0; 
};

#endif