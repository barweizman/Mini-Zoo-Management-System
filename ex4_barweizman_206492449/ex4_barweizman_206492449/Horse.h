#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef HORSE_H
#define HORSE_H
#include <iostream>
#include "HorsesFamily.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Horse:public HorsesFamily {
	void GetType() { cout << "Horse" << endl; }
};

#endif
