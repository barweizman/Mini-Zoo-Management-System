#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef CORALS_H
#define CORALS_H
#include <iostream>
#include "StaticAnimal.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Corals :public StaticAnimal {
public:
	void Show() { cout << "Beautiful & colorful views!" << endl; }
	void GetType() { cout << "Coral" << endl; }
	void Eat() { cout << "Feeding on a variety of small sea-organisms." << endl; }
};

#endif
