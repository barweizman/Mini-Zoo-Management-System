#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Animal {
public:
	virtual void Eat() = 0; 
	virtual void Show() = 0;
	virtual void GetType() = 0;
private:
};

#endif