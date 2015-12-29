# $ make
# $ ./boids-sim

CC = g++
CFLAGS = -c
DEBUG = -g
SFML = -lsfml-graphics -lsfml-window -lsfml-system

all: boids

boids: Boid.o Flock.o Pvector.o main.o Game.o
	$(CC) $(DEBUG) Boid.o Flock.o Pvector.o Game.o main.o -o boids-sim $(SFML)

Boid.o : Boid.cpp
	$(CC) $(CFLAGS) $(DEBUG) Boid.cpp

Pvector.o : Pvector.cpp
	$(CC) $(CFLAGS) $(DEBUG) Pvector.cpp

Flock.o : Flock.cpp
	$(CC) $(CFLAGS) $(DEBUG) Flock.cpp

Game.o : Game.cpp
	$(CC) $(CFLAGS) $(DEBUG) Game.cpp

clean:
	\rm *.o boids-sim

tar:
	tar cfv boids.tar Pvector.h Pvector.cpp Boid.h Boid.cpp \
		Flock.h Flock.cpp Game.cpp Game.h
