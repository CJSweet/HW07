// HW07_AirportSimulator.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "Simulator.h"

Simulator airport;

int main() {

	airport.enter_data();
	airport.run_simulation();
	airport.show_stats();

	return 0;
}
