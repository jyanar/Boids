#include <iostream>

using namespace std;

#ifndef PVECTOR_H_
#define PVECTOR_H_

// The Pvector class implements Euclidian vectors -- that is, each vector has
// both a magnitude and a direction. We use Pvectors for implementing movement
// and the three Boid rules -- cohesion, separation, and matching velocity
// through the use of acceleration, force, and velocity vectors.

class Pvector {

public:
    float x;
    float y;

    //Constructors
    Pvector() {}

    Pvector(float xComp, float yComp)
    {
        x = xComp;
        y = yComp;
    }

    //Mutator Functions
    void set(float x, float y);

    //Scalar functions scale a vector by a float
    void addVector(const Pvector& v);
    void addScalar(float x);

    void subVector(const Pvector& v);
    Pvector subTwoVector(const Pvector& v, const Pvector& v2);
    void subScalar(float x);

    void mulVector(const Pvector& v);
    void mulScalar(float x);

    void divVector(const Pvector& v);
    void divScalar(float x);

    void limit(double max);

    //Calculating Functions
    float distance(const Pvector& v);
    float dotProduct(const Pvector& v);
    float magnitude();
    void setMagnitude(float x);
    float angleBetween(const Pvector& v);
    void normalize();

    Pvector copy(const Pvector& v);
};

#endif
