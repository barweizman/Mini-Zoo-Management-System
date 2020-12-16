#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef SHARK_H
#define SHARK_H
#include <iostream>
#include "Predator.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Shark :public Predator {
public:
	void GetType() { cout << "Shark" << endl; }
	void Eat() { cout << "Preying! Eating FISH Yummy!" << endl; }
	void Show() { cout << "Water diving." << endl; }
};



#endif