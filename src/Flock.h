#include <vector>
#include "Boid.h"
#include "SFML/Graphics.hpp"

#ifndef FLOCK_H_
#define FLOCK_H_

// Brief description of Flock Class:
// This file contains the class needed to create a flock of boids. It utilizes
// the boids class and initializes boid flocks with parameters that can be
// specified. This class will be utilized in main.

class Flock {
public:
	vector<Boid> flock;
	//Constructors
	Flock() {}
	// Accessor functions
	int getSize();
	Boid getBoid(int i);

	// Mutator Functions
	void addBoid(Boid b);
	void flocking();

	//For accessing values and modifying values in Game.cpp
	int preyCount();
	int predCount();

	void addDesSep();
	void subDesSep();
	void addDesAli();
	void subDesAli();
	void addDesCoh();
	void subDesCoh();

	void addSepW();
	void subSepW();
	void addAliW();
	void subAliW();
	void addCohW();
	void subCohW();

	//void collisionChecker(Boid b, vector<sf::CircleShape> shapes);
	//int getBoidIndex(Boid b);
};

#endif
