# Boids

This project attempts to simulate flocking behavior, through the creation of simple entities called Boids (birdoids). Boids, which exist on a two-dimensional plane, function through three simple rules -- alignment, cohesion, and separation.

- Alignment causes boids to match velocity of nearby boids.
- Cohesion causes boids to seek the center of mass of the nearest clump of boids.
- Separation prevents boids from getting too close to each other. 

These three simple rules cause complex behavior to emerge, which is what makes the boid simulation interesting. The algorithms were originally formulated by Craig Reynolds in the 1980s.

### RUNNING THE SIMULATION ###

It is necessary to install SFML (Simple and Fast Multi-Media Library) in order the run the program.
- Windows: See [here](http://www.sfml-dev.org/tutorials/2.3/start-vc.php) for instructions on how to get SFML up and running on Windows.
- OS X: `brew install sfml`
- Ubuntu / Debian-based distros: `sudo apt-get install libsfml-dev`

### THE SIMULATION ###

Currently, the simulation needs to be improved. This can be done by finding the right set of parameters for the three rules, as well as messing with maxForce and maxSpeed in Boid.cpp. These include:

Boid.cpp:
* maxForce
* maxSpeed
* desiredseparation
* neighbordist
* mulScalar in Boid::flock

Future work might include creating a class that allows for these parameters to be set easily, as well as adding predators and optimizing the simulation. The program has terrible time complexity -- currently, the program iterates through the flock of boids -- each boid then iterates through the full flock three times, once for each algorithm.
