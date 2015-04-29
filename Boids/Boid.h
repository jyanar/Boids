#include "Pvector.h"
#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;

#ifndef BOID_H_
#define BOID_H_

/*
Brief description of Boid Class:
//The boid class creates an object which has multiple vectors (location, velocity, acceleration)
//Boids are given certain properties and rules to follow when interacting with other boids.
//They are being used to simulate flocking patterns and properties
*/

class Boid
{
public:
	Pvector location;
	Pvector velocity;
	Pvector acceleration;
	float maxSpeed;
	float maxForce;
	Boid() {}
	Boid(float x, float y)
	{
		acceleration = Pvector(0, 0);
		velocity = Pvector(rand()%3-2, rand()%3-2);//Allows for range of -2 -> 2
		location = Pvector(x, y);
		maxSpeed = 3.5;
		maxForce = 0.5;
	}

/* Destructors are commented out for now. g++ throws errors if they are included.
   If compiling on Visual Studio, however, no errors are thrown.
	//Destructor
	Boid::~Boid()
	{
		//cout << "Boid is being deleted by destructor!" << endl;
	}
*/	
	void applyForce(Pvector force);
	// Three Laws that boids follow
	Pvector Separation(vector<Boid> Boids);
	Pvector Alignment(vector<Boid> Boids);
	Pvector Cohesion(vector<Boid> Boids);
	//Functions involving SFML and visualisation linking
	Pvector seek(Pvector v);
	void run(vector <Boid> v);
	void update();
	void flock(vector <Boid> v);
	void borders();
	float angle(Pvector v);
};

#endif