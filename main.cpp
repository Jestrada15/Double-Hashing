/*********************************************
 *  NAME:		Keval Varia
 *  CLASS;		Data Structures
 *  ASSIGNMENT  #7 - Double Hashing
 *********************************************/

#include "DoubleHashing.h"

int main(){

	//Program Description
	cout << "\n"
			"In this assignment, we will use a MAP to develop a double hashing\n"
			"algorithm which will add, remove and print keys and their values.\n"
			"They will be stored in a struct which also has contructors that\n"
			"assign the initial values to null.\n\n";

	//Variable Declaration
	DoubleHashing<string> DH;


	//Adding Values.
	cout << "Adding:\nLaguna Niguel,\n"
			"Mission Viejo,\nSan Clemente,\n"
			"& Irvine\n\n";

	DH.insert(18, "Laguna Niguel");		//Added Laguna Niguel
	DH.insert(41, "Mission Viejo");		//Added Mission Viejo
	DH.insert(22, "San Clemente");		//Added San Clemente
	DH.insert(44, "Irvine");			//Added Irvine
	DH.Print();							//Prnting the current values


	//Removing a value based on user-entered key
	cout << "Removing:\n"
			"Mission Viejo\n\n";
	DH.remove(41);						//Removed Mission Viejo


	//Adding Values
	cout << "Adding:\nLake Forest,\n"
			"San Diego,\n"
			"& Anahiem\n\n";

	DH.insert(58, "Lake Forest");		//Added Lake Forest
	DH.insert(32, "San Diego");			//Added San Diego
	DH.insert(49, "Anahiem");			//Added Anahiem
	DH.Print();							//Prnting the current values


	//Removing value based on key
	cout << "Removing:\n"
			"Lake Forest\n\n";
	DH.remove(58);						//Removed Lake Forest


	//Adding new values
	cout << "Adding:\nLos Angeles,\n"
			"Orange,\nPalms Springs,\n"
			"& Riverside\n\n";

	DH.insert(31, "Los Angeles");		//Added Los Angeles
	DH.insert(17, "Orange");			//Added Orange
	DH.insert(72, "Palms Springs");		//Added Palms Springs
	DH.insert(41, "Riverside");			//Added Riverside
	DH.Print();							//Printing current values


	//Removing based on key
	cout << "Removing:\n"
			"nothing\n\n";
	DH.remove(73);						//Removing nothing


	//Adding Values
	cout << "Adding:\nBrea,\nSanta Ana,\n"
			"Tustin,\nOceanside,\n"
			"La Jolla,\nDel Mar,\n"
			"Aliso Viejo,\n"
			"& Laguna Beach\n\n";

	DH.insert(19, "Brea");				//Added Brea
	DH.insert(60, "Santa Ana");			//Added Santa Ana
	DH.insert(35, "Tustin");			//Added Tustin
	DH.insert(103, "Oceanside");			//Added Oceanside
	DH.insert(11, "La Jolla");			//Added La Jolla
	DH.insert(18, "Del Mar");			//Added Del Mar
	DH.insert(22, "Aliso Viejo");		//Added Aliso Viejo
	DH.insert(49, "Laguna Beach");		//Added Laguna Beach
	DH.Print();							//Printing current values


	//Removing based on key
	cout << "Removing:\n"
			"Riverside\n\n";
	DH.remove(41);						//Removed Riverside


	//Adding values
	cout << "Adding:\nVista,\nSan Diego,\n"
			"San Juan,\nDana Point,\n"
			"& El Segundo\n\n";

	DH.insert(42, "Vista");				//Added Vista
	DH.insert(49, "San Diego");			//Added San Diego
	DH.insert(99, "San Juan");			//Added San Juan
	DH.insert(29, "Dana Point");		//Added Dana Point
	DH.insert(88, "El Segundo");		//Added El Segundo
	DH.insert(41, "San Clemente");		//Added San Clemente
	DH.insert(62, "Laguna Hills");		//Added Laguna Hills
	DH.Print();							//Printing current values

	return 0;
}
