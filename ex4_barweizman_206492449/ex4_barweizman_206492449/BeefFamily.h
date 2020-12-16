#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef BEEFFAMILY_H
#define BEEFFAMILY_H
#include <iostream>
#include "Vegeterian.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class BeefFamily:public Vegeterian {
public:
	void Move() { cout << "Walking slowly in the garden." << endl; }
};

#endif
