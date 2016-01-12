#include "Pvector.h"
#include <vector>

#ifndef BOID_H_
#define BOID_H_

// The Boid Class
//
// Attributes
//  bool predator: flag that specifies whether a given boid is a predator.
//  Pvector location: Vector that specifies a boid's location.
//  Pvector velocity: Vector that specifies a boid's current velocity.
//  Pvector acceleration: Vector that specifies a boid's current acceleration.
//  float maxSpeed: Limits magnitude of velocity vector.
//  float maxForce: Limits magnitude of acceleration vector. (F = m*a!)
//
// Methods
//  applyForce(Pvector force): Adds the given vector to acceleration
//
//  Pvector Separation(vector<Boid> Boids): If any other boids are within a
//      given distance, Separation computes a a vector that distances the
//      current boid from the boids that are too close.
//
//  Pvector Alignment(vector<Boid> Boids): Computes a vector that causes the
//      velocity of the current boid to match that of boids that are nearby.
//
//  Pvector Cohesion(vector<Boid> Boids): Computes a vector that causes the
//      current boid to seek the center of mass of nearby boids.

class Boid {
public:
	bool predatorStatus;
	Pvector location;
	Pvector velocity;
	Pvector acceleration;
	float maxSpeed;
	float maxForce;

	Boid() {}
	Boid(float x, float y);
	Boid(float x, float y, bool predCheck);
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
	float getAngle(Pvector v);

	//Used instead of global variables to access values and weights in Game.cpp
	float desSep;
	float desAli;
	float desCoh;
	float SepW;
	float AliW;
	float CohW;

	float getDesSep();
	float getDesAli();
	float getDesCoh();
	float getSepW();
	float getAliW();
	float getCohW();

	void setDesSep(float x);
	void setDesAli(float x);
	void setDesCoh(float x);
	void setSepW(float x);
	void setAliW(float x);
	void setCohW(float x);
};

#endif
