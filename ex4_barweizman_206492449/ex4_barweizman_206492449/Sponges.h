#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef SPONGES_H
#define SPONGES_H
#include <iostream>
#include "StaticAnimal.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Sponges :public StaticAnimal {
public:
	void GetType() { cout << "Sponge" << endl; }
	void Eat() { cout << "Filtering water flow to obtain food." << endl; }
};

#endif