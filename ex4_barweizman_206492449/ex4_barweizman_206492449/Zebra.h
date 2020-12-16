#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef ZEBRA_H
#define ZEBRA_H
#include <iostream>
#include "HorsesFamily.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Zebra:public HorsesFamily {
public:
	void GetType() { cout << "Zebra" << endl; }
};

#endif
