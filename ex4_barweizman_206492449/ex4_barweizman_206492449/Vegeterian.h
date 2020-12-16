#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef VEGETERIAN_H
#define VEGETERIAN_H
#include <iostream>
#include "MobileAnimal.h"
using namespace std; 

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Vegeterian:public MobileAnimal{
public:
	void Eat() { cout << "Eating grass." << endl; }
	void Show() {cout << "Bored staring at the guests." << endl;}
};
#endif