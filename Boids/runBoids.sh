#!/bin/bash
rm -f *.o boids-sim *h.gch
g++ -c -g main.cpp Boid.cpp Pvector.cpp Flock.cpp
# Below, compile the program and append the necessary libraries
g++ -g main.o Boid.o Pvector.o Flock.o -o boids-sim -lsfml-graphics -lsfml-window -lsfml-system
# Run the executable
./boids-sim
