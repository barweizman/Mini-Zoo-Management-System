#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "Zoo.h"

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Menu {
public:
	Menu();
	void StartMenu();
private:
	void ChooseAnimal();
	Zoo zoo;
};

#endif