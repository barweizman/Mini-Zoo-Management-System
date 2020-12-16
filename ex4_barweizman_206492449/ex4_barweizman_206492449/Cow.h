#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef COW_H
#define COW_H
#include <iostream>
#include "BeefFamily.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Cow:public BeefFamily {
public:
	void GetType() { cout << "Cow" << endl; }
};

#endif
