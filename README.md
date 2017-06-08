# Boids

This project attempts to simulate flocking behavior, through the creation of simple entities called boids (birdoids). Boids, which exist on a two-dimensional plane, function through three simple rules -- alignment, cohesion, and separation.

- Alignment causes boids to match velocity of nearby boids.
- Cohesion causes boids to seek the center of mass of the nearest clump of boids.
- Separation prevents boids from getting too close to each other.

These three simple rules cause complex behavior to emerge, which is what makes the boid simulation interesting. The algorithm was originally formulated by Craig Reynolds in the 1980s.

## Running the simulation

Install SFML (Simple and Fast Multi-Media Library) in order the run the program.
- Windows: See [here](https://github.com/chernandez7/Boids) for a version that runs through Visual Studio.
- OS X: `brew install sfml`
- Ubuntu / Debian-based distros: `sudo apt-get install libsfml-dev`

Then `cd` into the `src` folder and run `make` to produce an executable file called `boids-sim`.

```bash
./boids-sim
```

to run the simulation. Exit with the <kbd>esc</kbd>.

