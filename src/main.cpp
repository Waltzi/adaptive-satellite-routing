# include <iostream>
# include "Simulator.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello World!" << std::endl;
    Simulator sim;
    sim.run(10.0);
    return 0;
}
// This is a simple main function that creates an instance of the Simulator class and runs it.