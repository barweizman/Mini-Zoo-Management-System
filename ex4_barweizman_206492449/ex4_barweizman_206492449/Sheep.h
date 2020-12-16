#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef SHEEP_H
#define SHEEP_H
#include <iostream>
#include "BeefFamily.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Sheep :public BeefFamily {
public:
	void GetType() { cout << "Sheep" << endl; }
};

#endif
