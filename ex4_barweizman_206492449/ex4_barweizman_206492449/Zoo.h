#define _CRT_SECURE_NO_WARNINGS
#pragma once
#ifndef ZOO_H
#define ZOO_H
#include <iostream>
#include <typeinfo>
#include "Sponges.h"
#include "Corals.h"
#include "Lion.h"
#include "Shark.h"
#include "Wolf.h"
#include "Cow.h"
#include "Sheep.h"
#include "Buffalo.h"
#include "Zebra.h"
#include "Horse.h"
using namespace std;

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

class Zoo {
public:
	Zoo() :numofanimals(0),numoflions(0),numofmobileanimals(0),animals(NULL),mobileanimals(NULL),lions(NULL) {}
	~Zoo();
	//---Methods&Operators---//
	bool AddAnimal(Animal* a);//adds any animal to the zoo
	bool AddMobileAnimal(Animal* a); //adds only mobile animals
	bool AddLion(Animal* a); //adds only lions
	void Feed(); //feeds the animals, all the animals in the zoo eat!
	void ShowTime(); //makes all the animals show thier special 
	void Activate(); //activates the animals,makes all the animals move 
	void Hunt(); //makes all the lions do the stadium show
private:
	int numofanimals; //number of animals in the zoo (CANNOT BE >200)
	int numoflions; //less than <100
	int numofmobileanimals; //less than <100
	Animal** animals; //list of all animals in the zoo
	MobileAnimal** mobileanimals; //list of all mobile animals in the zoo
	Lion** lions; //list of all the lions in the zoo
};


#endif