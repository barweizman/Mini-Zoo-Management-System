#include "Zoo.h"

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

//***adds animal to the zoo***//
bool Zoo::AddAnimal(Animal* a) {
	if (numofanimals <= 200) //max cages in the zoo is 200
	{
		numofanimals++;
		Animal** temp1 = new Animal * [numofanimals];
		if (!temp1) return false; //allocation failed
		for (int i = 0; i < numofanimals - 1; ++i)
			temp1[i] = animals[i];

		temp1[numofanimals - 1] = a; 
		delete[] animals; //free the memory
		animals = temp1;  //will hold the new animals list
		return true;
	}
	cout << "The zoo can handle only up to 200 cages. Sorry!" << endl;
	return false;
}

//***adds animal to the mobile-animals list of the zoo***//
bool Zoo::AddMobileAnimal(Animal * a)
{
	if (numofmobileanimals <= 100) //there shouldnt be more than 100 mobile animals in the cages
	{
		numofmobileanimals++;
		MobileAnimal** temp2 = new MobileAnimal * [numofmobileanimals];
		if (!temp2) return false; //allocation failed
		for (int i = 0; i < numofmobileanimals - 1; ++i)
			temp2[i] = mobileanimals[i];

		temp2[numofmobileanimals - 1] = dynamic_cast<MobileAnimal*>(a); //dynamic cast - RTTI
		delete[] mobileanimals; //free the memory
		mobileanimals = temp2; //will hold the new mobile-animals list
		return true;
	}
	cout << "The zoo can handle only up to 100 mobile-animals cages. Sorry!" << endl;
	return false;
}

//***adds a lion to the lions list of the zoo***//
bool Zoo::AddLion(Animal* a)
{
	if (numofmobileanimals <= 100) //there shouldnt be more than 100 mobile animals in the cages
	{
		numoflions++;
		Lion** temp3 = new Lion * [numoflions];
		if (!temp3) return false; //allocation failed
		for (int i = 0; i < numoflions - 1; ++i)
			temp3[i] = lions[i];

		temp3[numoflions - 1] = dynamic_cast<Lion*>(a); //dynamic cast - RTTI
		delete[] lions; //free the memory
		lions = temp3; //will hold the new lions list
		return true;
	}
	cout << "The zoo can handle only up to  100 mobile-animals cages. Sorry!" << endl;
	return false;
}

//***D`tor-free all memory allcations***//
Zoo::~Zoo() {
	for (int i = 0; i < numofanimals; ++i)
		delete animals[i];

	delete[] animals;
	delete[] mobileanimals;
	delete[] lions;
}

//***Feeds all the animals***//
void Zoo::Feed() {
	for (int i = 0; i < numofanimals; ++i)
	{
		animals[i]->GetType();
		animals[i]->Eat();
	}
}

//***Makes all the Animals in the zoo to show thier abilities***//
void Zoo::ShowTime() {
	for (int i = 0; i < numofanimals; ++i)
	{
		animals[i]->GetType();
		animals[i]->Show();
	}
}

//***Makes all the Mobile Animals in the zoo move***//
void Zoo::Activate() {
	for (int i = 0; i < numofmobileanimals; ++i)
	{
		mobileanimals[i]->GetType();
		mobileanimals[i]->Move();
	}
}

//***Makes all the Lions in the zoo do thier stadium show***//
void Zoo::Hunt() {
	for (int i = 0; i < numoflions; ++i)
	{
		lions[i]->GetType();
		lions[i]->StadiumShow();
	}
}

