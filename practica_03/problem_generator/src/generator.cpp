#include "../include/generator.h"



/*******************
 *    PUBLIC
 *******************/


Generator::Generator(unsigned int randSeed){
    seed = randSeed;
    pObjective = 0.15;
}

Problem Generator::generate(std::string const& domainName, unsigned int nExercices,
                 unsigned int maxPrecursors, unsigned int maxPredecesors){
    Problem p;
    int nObjectives = pObjective * nExercices;
    std::vector<Exercice> exercices;
    exercices.reserve(nExercices);
    // first generate all exercice nodes
    for(auto i = 0; i < nExercices; ++i){
        // get a level lower than max
        unsigned int level = (std::rand() % (Problem::MAX_LEVEL - 1)) + 1;
        // unsigned int objective = (std::rand() % (Problem::MAX_LEVEL - level)) + level;
        Exercice e(i, level, level);
        exercices.push_back(e);
    }
    // add relationships
    for(unsigned int i = 0; i < maxPrecursors; ++i){

    }
    for(unsigned int i = 0; i < maxPredecesors; ++i){

    }

    // add objectives
    for(auto i = 0; i < nObjectives; ++i){
        auto level = exercices[i].getObjective();
        unsigned int obj = (std::rand() % (Problem::MAX_LEVEL - level)) + level;
        exercices[i].setObjective(obj);
    }

    // add exercices to problem
    for(auto & e : exercices) p.addExercice(e);

    return p;
}

/*******************
 *    PRIVATE
 *******************/
