/*
 *   Project Name: Project Euler
 *      File Name: current.cpp
 *  Creation Date: Dec 20, 2018
 *        Creator: Nicholas Heim
 *   School Email: nwh8@zips.uakron.edu
 *        Purpose: 
 */
 #include "current.hpp"
 #include "HEADER_LIST.hpp"

// Problem 017
void numberLetterCount()
{

}

// Problem 018
DiamondMap::DiamondMap()
{
   string getter;
   stringstream organizer;
   vector<Node*> prevLevel;
   vector<Node*> nextLevel;

   ifstream input("Problem_018.txt", std::ios::in);

   getline(input, getter);
   organizer.str(getter);
   root = new Node;
   root->leftParent = nullptr;
   root->rightParent = nullptr;
   organizer >> root->cost;

   prevLevel.push_back(root);
   Node* temp;

   // Construction of weird tree-like structure
   int level = 1;
   while(getline(input, getter))
   {
      organizer.str(getter);
      
      for(size_t i = 0, p; i <= level; ++i)
      {
         temp = new Node;
         organizer >> temp->cost;
         cout << setw(2) << setfill('0') << temp->cost << ' ';
         temp->leftChild = temp->rightChild = nullptr;

         if(i == 0)
         { 
            temp->leftParent = nullptr;
            temp->rightParent = prevLevel.at(0);
            prevLevel.at(0)->leftChild = temp;
         }
         else
         {
            if(i == level)
            {
               temp->rightParent = nullptr;
               temp->leftParent = prevLevel.at(i - 1);
               prevLevel.at(i - 1)->rightChild = temp;
            }
            
            if(i < level - 1 && i > 0)
            {
               temp->leftParent = prevLevel.at(i - 1);
               temp->rightParent = prevLevel.at(i);
               prevLevel.at(i - 1)->rightChild = temp;
               prevLevel.at(i)->leftChild = temp;
            }

         }
         nextLevel.push_back(temp);
      }

      prevLevel.clear();

      for(auto&& i : nextLevel)
      {
         prevLevel.push_back(i);
      }
      
      nextLevel.clear();
      organizer.clear();

     // cout << "While loop iteration for level " << level << endl;
      ++level;
      cout << endl;
   }

   lastLevel = prevLevel;
   prevLevel.clear();

   for(auto i : lastLevel)
   {
      i->leftChild = nullptr;
      i->rightChild = nullptr;
      i->maxCost = i->cost;
   }

   cout << endl << endl;
   
   // Actually compute the maximum cost from the bottom up.
   while(root->maxCost == 0)
   {
      for(auto i : lastLevel)
      {
         if(i->leftParent != nullptr)
         {
            i->leftParent->maxCost = i->maxCost + i->leftParent->cost;  
            prevLevel.push_back(i->leftParent);
         }
         cout << setw(2) << setfill('0') << i->cost << ' ';
      }
      cout << lastLevel.size();

      for(auto i: lastLevel)
      {
         if(i->rightParent != nullptr)
         {
            if(i->rightParent->maxCost < i->maxCost + i->rightParent->cost)
            {
               i->rightParent->maxCost = i->maxCost + i->rightParent->cost;
            }
         }
      }
      lastLevel = prevLevel;
      prevLevel.clear();
      cout << endl;
   }
   cout << setw(2) << setfill('0') << root->cost << ' ';

   input.close();
}

DiamondMap::~DiamondMap()
{
   delete root;
}

int DiamondMap::findMaxPath()
{
   return root->maxCost;
}

void pathSum()
{
   DiamondMap map;
   cout << endl << map.findMaxPath() << endl;
}


// Problem 020
void factSum()
{
   int fact[170];
   fact[0] = 1;
   int size = 1, temp = 0, x;
   for(size_t i = 1; i <= 100; ++i) 
   {
      for(size_t j = 0; j < 1/*value*/ ; ++j)
      {
         
      }
      
   }

   string number = "";
   for(size_t i = 0; i <= size; ++i)
   {
      number += std::to_string(fact[i]);
   }

   int i = 0;
   temp = 0;
   while(i < number.size())
   {
      temp += number.at(i) - '0';
      ++i;
   }
   
   cout << temp << endl;
}

/* long double factorial(long double n)
{
   if(n == 1)
      return 1;
   else
   {
      return n * factorial(n - 1);
   }
} */