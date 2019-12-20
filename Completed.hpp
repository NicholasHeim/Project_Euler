/*
 * primeFactor.hpp
 *
 *  Created on: Dec 13, 2018
 *      Author: Nicholas
 */

#ifndef COMPLETED_HPP_
#define COMPLETED_HPP_

#include "HEADER_LIST.hpp"

// Problem 001
void mult35();

// Problem 002
void evenFib();

// Problem 003 
void primeFactor(long long int val);
bool isPrime(long long int val);

// Problem 004
void palindromeProduct();
bool isPalindrome(std::string str);

// Problem 005
void smallestMultiple();

// Problem 006
void sumSquareDifference();

// Problem 007
void nthPrime();

// Problem 008
void largestProduct1000();

// Problem 009
void pythagTriplet();

// Problem 010
void primeSum();

// Problem 011
void largestProduct();

// Problem 012
void triangularNumber();

// Problem 013
void largeSum();

// Problem 014
void CollatzSequence();

// Problem 015
// No Code, simple combinatorics

// Problem 016
void digitSum();



// Problem 019
enum Months
{
   Jan, Feb, Mar,
   Apr, May, Jun, 
   Jul, Aug, Sep,
   Oct, Nov, Dec,
};
int intermediateSum(Months m, bool leapYear);
void sundays();

#endif /* COMPLETED_HPP_ */
