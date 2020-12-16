#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef STATICANIMAL_H
#define STATICANIMAL_H
#include <iostream>
#include "Animal.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class StaticAnimal:public Animal{
public:
	void Eat() {}
	void GetType() {}
	void Show() { cout << "Beautiful & colorful views!" << endl; }
};

#endif;