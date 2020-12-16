#include "Menu.h"

/* Assignment: 4
Author: Bar Weizman, ID: 206492449 */

Menu::Menu() {
	StartMenu();
}

void Menu::StartMenu() {
	int nchoice; //user`s choice
	int counter=0; //will count how many animals the user added to the zoo
	do {
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		cout << "Welcome to the MENU!Please enter your choice:" << endl;
		cout << "1.Add new animal" << endl;
		cout << "2.Feed the zoo" << endl;
		cout << "3.Show Time!" << endl;
		cout << "4.Activate the zoo(only mobile animals)" << endl;
		cout << "5.Lions show" << endl;
		cout << "6.Exit" << endl;
		cout << "Pay ATTENTION! you MUST enter 5 animals at least in order to choose options 2-5" << endl;
		cout << "Number of animals in the zoo now: " << counter << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		cin >> nchoice;
		switch (nchoice)
		{
		case 1:ChooseAnimal();
			counter++;
			break;
		case 2:
			if (counter > 5) zoo.Feed();
			else cout << "Sorry,Can`t feed the animals.Please insert at least 5 animals to the zoo" << endl;
			break;
		case 3:
			if (counter > 5) zoo.ShowTime();
			else cout << "Sorry,Can`t do the show.Please insert at least 5 animals to the zoo" << endl;
			break;
		case 4:
			if (counter > 5) zoo.Activate();
			else cout << "Sorry,Can`t activate the animals.Please insert at least 5 animals to the zoo" << endl;
			break;
		case 5:
			if (counter > 5) zoo.Hunt();
			else cout << "Sorry,Can`t let the lions hunt.Please insert at least 5 animals to the zoo" << endl;
			break;
		case 6:cout << "Goodbye.!" << endl;
			break;
		default:cout << "Sorry,Couldnt get your choice.Please try again" << endl;
			break;
		}
	} while (nchoice != 6);
}

void Menu::ChooseAnimal() {
	int ac; //animal choice
	Animal* a; //pointer
	cout << "Please enter the animal you want to add to the zoo(enter 1-10 as the following:)" << endl;
	cout << "1 - Coral" << endl;
	cout << "2 - Sponge" << endl;
	cout << "3 - Lion" << endl;
	cout << "4 - Shark" << endl;
	cout << "5 - Wolf" << endl;
	cout << "6 - Horse" << endl;
	cout << "7 - Zebra" << endl;
	cout << "8 - Cow" << endl;
	cout << "9 - Buffalo" << endl;
	cout << "10 - Sheep" << endl;
	cin >> ac;
	switch (ac) //will know what kind of animal we should be adding to our zoo
	{
	case 1:
		a = new Corals();
		zoo.AddAnimal(a);
		break;
	case 2:
		a = new Sponges();
		zoo.AddAnimal(a);
		break;
	case 3:
		a = new Lion();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		zoo.AddLion(a);
		break;
	case 4:
		a = new Shark();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	case 5:
		a = new Wolf();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	case 6:
		a = new Horse();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	case 7:
		a = new Zebra();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	case 8:
		a = new Cow();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	case 9:
		a = new Buffalo();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	case 10:
		a = new Sheep();
		zoo.AddAnimal(a);
		zoo.AddMobileAnimal(a);
		break;
	default:
		cout << "Sorry,Couldnt get your choice." << endl;
		break;
	}
}