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
void maximumPathSum()
{
   ifstream input("Problem_018.txt", std::ios::in);
   vector<string> file;
   string temp;
   // Read in the file line by line
   // Note: The file MUST NOT have an extra /n at the end. The end must be on the last line of numbers.
   while(!input.eof())
   {
      getline(input, temp);
      file.push_back(temp);
   }

   int left, right;
   vector<int> sums;

   // Initialize with bottom row of the triangle
   // Checking to see if there are extra lines in the file can be done,
   // but since I made the file, I do not care to check.
   for (int i = 0; i < file[file.size() - 1].size(); i += 3)
      sums.push_back(std::stoi(file[file.size() - 1].substr(i, 2), nullptr, 10));
   
   // In a loop, extract a number from the string, keep the position of it. 
   // Set the sum of that position equal to the new number + max{sums[position], sums[position + 1]}
   // Iterate through all lines of the file in the vector, the maximum will end at position 0.   
   
   
}