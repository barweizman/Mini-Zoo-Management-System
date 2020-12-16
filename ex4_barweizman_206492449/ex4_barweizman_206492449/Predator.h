#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef PREDATOR_H
#define PREDATOR_H
#include <iostream>
#include "MobileAnimal.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Predator:public MobileAnimal{
public:
	 void Move() { cout << "Running after potential food." << endl; }
};

#endif