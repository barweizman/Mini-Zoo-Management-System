#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef HORSESFAMILY_H
#define HORSESFAMILY_H
#include <iostream>
#include "Vegeterian.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class HorsesFamily:public Vegeterian {
public: 
	void Move() { cout << "Running fast in circles." << endl; }
};

#endif