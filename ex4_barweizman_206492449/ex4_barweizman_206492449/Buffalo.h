#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef BUFFALO_H
#define BUFFALO_H
#include <iostream>
#include "BeefFamily.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Buffalo :public BeefFamily {
public:
	void GetType() { cout << "Buffalo" << endl; }
};

#endif
