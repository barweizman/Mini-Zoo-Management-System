#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef LION_H
#define LION_H
#include <iostream>
#include "Predator.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Lion :public Predator {
public:
	void GetType() { cout << "Lion" << endl; }
	void Eat() { cout << "Preying! Eating GNU Yummy!" << endl; }
	void Show() { cout << "Royal walking in the garden." << endl; }
	void StadiumShow() { cout << "Hunting!" << endl; }
};

#endif