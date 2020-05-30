/**
 * Coaching Potato Problem Generator
 * Given a set of parameters this program generates
 * a problem
 *
 * */
#include <iostream>
#include <string>

#include "include/generator.h"

/* Constants definitions */
const int MIN_ARGS = 7;

/**
 * Usage function:
 *  Displayed when the user supplied
 *  wrong arguments
 * */
void usage(){
    std::cerr << std::endl;
    std::cerr << "usage: generator outFile seed domain nExercices maxPrecursors maxPredecesors" << std::endl;
    std::cerr << "  outFile: the name of the output file" << std::endl;
    std::cerr << "  seed: the seed for random generation" << std::endl;
    std::cerr << "  domain: the name of the PDDL domain" << std::endl;
    std::cerr << "  nExercices: number of exercices to generate" << std::endl;
    std::cerr << "  maxPrecursors: max number of precursors per exercice" << std::endl;
    std::cerr << "  maxPredecesors: max number of predecesors per exercice" << std::endl;
    std::cerr << std::endl;
}


/**
 * Main function:
 *  Entry point to the program
 * */
int main(int argc, char* argv[]){

    if(argc < MIN_ARGS){
        usage();
        return EXIT_FAILURE;
    }
    // parameter parsing
    std::string outFile = argv[1];
    unsigned int seed = std::stoi(argv[2]);
    std::string domain = argv[3];
    unsigned int nExercices = std::stoi(argv[4]);
    unsigned int maxPrecursors = std::stoi(argv[5]);
    unsigned int maxPredecesors = std::stoi(argv[6]);
    // generator
    Generator gen(seed);
    auto p = gen.generate(domain, nExercices, maxPredecesors, maxPrecursors);
    // save problem generated
    p.write(outFile);

    return 0;
}
