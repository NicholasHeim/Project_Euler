/*
 * current.hpp
 *
 *  Created on: Dec 20, 2018
 *      Author: Nicholas
 */

#ifndef CURRENT_HPP_
#define CURRENT_HPP_
#include <string>
#include <vector>

// Problem 017
void numberLetterCount();

// Problem 018
struct Node
{
   Node* leftParent, *rightParent;
   Node* leftChild, *rightChild;
   int cost;
   int maxCost = 0;
};

class DiamondMap
{
private:
   Node* root;
   std::vector<Node*> lastLevel;
public:
   DiamondMap();
   ~DiamondMap();

   int findMaxPath();
   
};

void pathSum();


// Problem 020
void factSum();
long double factorial(long double n);

#endif /* CURRENT_HPP_ */
