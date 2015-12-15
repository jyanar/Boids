#include <iostream>
#include <vector>
#include "Boid.h"

using namespace std;

#ifndef FLOCK_H_
#define FLOCK_H_


// Brief description of Flock Class:
// This file contains the class needed to create a flock of boids. It utilizes
// the boids class and initializes boid flocks with parameters that can be
// specified. This class will be utilized in main.

class Flock {
public:
	//Public Variables
	vector<Boid> flock;

	//Constructors
	Flock() {}

	// Accessor functions
	int getSize();
	Boid getBoid(int i);
	// Mutator Functions
	void addBoid(Boid b);
	void flocking();
};

#endif