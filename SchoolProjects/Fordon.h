#pragma once


class Fordon {
public:
	Fordon(int r, int g, int b, double c, int w, int n) : red(r), green(g), blue(b), consumption(c), weight(w), numOfWheels(n) {}

	int Red() { return red; }
	int Green() { return green; }
	int Blue() { return blue; }
	int Weight() { return weight; }
	int NumOfWheels() { return numOfWheels; }
	double Consumption() { return consumption; }

	void Red(int r) { red = r; }
	void Green(int g) { green = g; }
	void Blue(int b) { blue = b; }
	void Weight(int w) { weight = w; }
	void Consumtion(int c) { consumption = c; }
	void NumOfWheels(int n) { n = numOfWheels; }
	virtual bool move(int distance) = 0;

	virtual bool Move(unsigned int distance) = 0;

protected:
	
	double consumption; // Liters per kilometer
	int red, green, blue;
	int weight, numOfWheels;

private:



};