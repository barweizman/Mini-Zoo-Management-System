#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef WOLF_H
#define WOLF_H
#include <iostream>
#include "Predator.h"
using namespace std;
#pragma once

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Wolf :public Predator {
public:
	void GetType() { cout << "Wolf" << endl; }
	void Eat() { cout << "Preying! Eating RABBIT Yummy!" << endl; }
	void Show() { cout << "Joyful Running and flapping their tail." << endl; }
};

#endif