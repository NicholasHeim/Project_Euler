/*
 *   Project Name: Project Euler
 *      File Name: Completed.cpp
 *  Creation Date: Dec 20, 2018
 *        Creator: Nicholas Heim
 *   School Email: nwh8@zips.uakron.edu
 *        Purpose: Collection of completed Project Euler problems (source code)
 */

#include "HEADER_LIST.hpp"

// Problem 001
void mult35()
{
	int sum = 0;
	for (int i = 0; i < 1000; ++i) 
	{
		if(i%3 == 0 || i%5 == 0)
		{
			sum += i;
		}
	}
	cout << sum;
}

// Problem 002
void evenFib()
{
	int first = 0, second = 1, next = 0, sum = 0;
	while(next < 4000000)
	{
		if(next%2 == 0)
		{
			sum += next;
		}
		next = first + second;
		second = first;
		first = next;
	}
	cout << sum;
}

// Problem 003
void primeFactor(long long int val)
{
	const long long int MAX = floor(sqrt(600851475143));
	long long int largestPrime = 0;
	for (long long int i = 2; i <= MAX; ++i) 
	{
		if(val%i == 0)
		{
			if(isPrime(i))
			{
				largestPrime = i;
			}
		}
	}
	cout << largestPrime;
}
bool isPrime(long long int val)
{
	long long int MAX = floor(sqrt(val));
	for (long long int i = 2; i <= MAX; ++i) 
	{
		if(val%i == 0)
		{
			return false;
		}
	}
	return true;
}

// Problem 004
void palindromeProduct()
{
	string str;
	int largest = 0, value;
	for (int i = 91; i < 1000; ++i) 
	{
		for (int j = 80; j < 1000; ++j) 
		{
			value = i*j;
			str = std::to_string(value);
			
			if(isPalindrome(str))
			{
				if(value > largest)
				{
					largest = value;
				}
			}
		}
	}
	cout << largest;
}
bool isPalindrome(string str)
{
	int length = str.length();
	if(length%2 == 0)
	{
		for (int i = 0, j = length - 1; i <= length/2; ++i, --j) 
		{
			if(str[i] != str[j])
			{
				return false;
			}
		}
	}
	else
	{
		for (int i = 0, j = length - 1; i != j; ++i, --j) 
		{
			if(str[i] != str[j])
			{
				return false;
			}
		}
	}
	return true;
}

// Problem 005
void smallestMultiple()
{
	long int num, i = 1;
	bool flag = true;
	while(flag) 
	{
		for (int j = 1; j < 21; ++j) 
		{
			if(i%j == 0)
			{
				if(j == 20)
				{
					flag = false;
					num = i;
				}
			}
			else
			{
				break;
			}
		}
		++i;
	}
	cout << num;
}

// Problem 006
void sumSquareDifference()
{
	long long int sum1 = 0, sum2 = 0;
	// Sum all of the squared values
	for (int i = 0; i < 101; ++i) 
	{
		sum1 += i*i;
	}
	
	// Sum all of the values and then square
	for (int i = 0; i < 101; ++i) 
	{
		sum2 += i;
	}
	sum2 = sum2*sum2;
	cout << (sum1 - sum2);
}

// Problem 007
void nthPrime()
{
	int count = 0, largestPrime = 0, i = 2;
	while(count != 10001) 
	{
		if(isPrime(i))
		{
			largestPrime = i;
			++count;
		}
		++i;
	}
	cout << largestPrime;
}

// Problem 008
void largestProduct1000()
{
    string num = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
    long long int greatestProduct = 0;
    long long int product;
    for (unsigned int i = 0; i < num.length() - 12; ++i)
    {
        product = ((int) num[i] - '0');
        for (unsigned int j = i + 1; product != 0 && j < i + 13; ++j)
        {
            product = product * ((int) num[j] - '0');
        }
        if(greatestProduct <= product) 
        {
      	  greatestProduct = product;
        }
    }
    cout << greatestProduct << endl;
}

// Problem 009
void pythagTriplet()
{
	int product;
	for (int a = 1; a < 500; ++a) 
	{
		for (int b = a + 1; b < 500; ++b) 
		{
			double c = sqrt(a*a + b*b);
			if(a + b + c == 1000)
			{
				product = a*b*c;
			}
		}
	}
	cout << product;
}

// Problem 010
void primeSum()
{
	long long int sum = 0, MAX = 2000000;
	for (int i = 2; i <= MAX; ++i) 
	{
		if(isPrime(i))
		{
			sum += i;
		}
	}
	cout << sum;
}

// Problem 011
void largestProduct()
{
    int grid[20][20] =
    {
        { 8,  2, 22, 97, 38, 15,  0, 40,  0, 75,  4,  5,  7, 78, 52, 12, 50, 77, 91,  8},
        {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48,  4, 56, 62,  0},
        {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30,  3, 49, 13, 36, 65},
        {52, 70, 95, 23,  4, 60, 11, 42, 69, 24, 68, 56, 01, 32, 56, 71, 37,  2, 36, 91},
        {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
        {24, 47, 32, 60, 99, 03, 45,  2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
        {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
        {67, 26, 20, 68,  2, 62, 12, 20, 95, 63, 94, 39, 63,  8, 40, 91, 66, 49, 94, 21},
        {24, 55, 58,  5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
        {21, 36, 23,  9, 75,  0, 76, 44, 20, 45, 35, 14,  0, 61, 33, 97, 34, 31, 33, 95},
        {78, 17, 53, 28, 22, 75, 31, 67, 15, 94,  3, 80,  4, 62, 16, 14,  9, 53, 56, 92},
        {16, 39,  5, 42, 96, 35, 31, 47, 55, 58, 88, 24,  0, 17, 54, 24, 36, 29, 85, 57},
        {86, 56,  0, 48, 35, 71, 89, 07, 05, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
        {19, 80, 81, 68, 05, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77,  4, 89, 55, 40},
        { 4, 52,  8, 83, 97, 35, 99, 16, 07, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
        {88, 36, 68, 87, 57, 62, 20, 72,  3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
        { 4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18,  8, 46, 29, 32, 40, 62, 76, 36},
        {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 04, 36, 16},
        {20, 73, 35, 29, 78, 31, 90,  1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57,  5, 54},
        { 1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52,  1, 89, 19, 67, 48}
    };

    long long int biggestProduct = 0;
    //unsigned long long int biggestProduct = 0;

    for (int row = 0; row < 20; row++)
    {
        for (int col = 0; col < 20; col++)
        {
            long long int product;
            //unsigned long long int product;

            //std::cout << grid[row][col] << ":" << std::endl; system("pause>nul");

            // Up/Down
            if ((row-3 >= 0))
            {
                product = grid[row][col] * grid[row-1][col] * grid[row-2][col] * grid[row-3][col];
                //std::cout << "  U: " << grid[row][col] << "*" << grid[row-1][col] << "*" << grid[row-2][col] << "*" << grid[row-3][col] << "=  \t" << product << std::endl; system("pause>nul");
                if (product > biggestProduct)
                    biggestProduct = product;
            }
            // Right/Left
            if ((col+3 < 20))
            {
                product = grid[row][col] * grid[row][col+1] * grid[row][col+2] * grid[row][col+3];
                //std::cout << "  R: " << grid[row][col] << "*" << grid[row][col+1] << "*" << grid[row][col+2] << "*" << grid[row][col+3] << "=  \t" << product << std::endl; system("pause>nul");
                if (product > biggestProduct)
                    biggestProduct = product;
            }
            // Up, Right/Down, Left
            if ((row-3 >= 0) && (col+3 < 20))
            {
                product = grid[row][col] * grid[row-1][col+1] * grid[row-2][col+2] * grid[row-3][col+3];
                //std::cout << "  U-R: " << grid[row][col] << "*" << grid[row-1][col+1] << "*" << grid[row-2][col+2] << "*" << grid[row-3][col+3] << "=  \t" << product << std::endl; system("pause>nul");
                if (product > biggestProduct)
                    biggestProduct = product;
            }

            // Down, Right/ Up, Left
            if ((row+3 < 20) && (col+3 < 20))
            {
                product = grid[row][col] * grid[row+1][col+1] * grid[row+2][col+2] * grid[row+3][col+3];
                //std::cout << "  D-R: " << grid[row][col] << "*" << grid[row+1][col+1] << "*" << grid[row+2][col+2] << "*" << grid[row+3][col+3] << "=  \t" << product << std::endl; system("pause>nul");
                if (product > biggestProduct)
                    biggestProduct = product;
            }
        }
    }

    std::cout << biggestProduct;

    return;
}

// Problem 012
void triangularNumber()
{
	long long int sum = 0;
	int count = 0;
	for (long long int i = 500;; ++i) 
	{
		sum = (i * (i + 1)) / 2;
		
		for (long long int j = 1; j <= ceil(sqrt(sum)); ++j) 
		{
			if(sum % j == 0)
			{
				count += 2;
			}
		}
		if(count >= 500)
		{
			cout << sum;
			return;
		}
		count = 0;
	}
}

// Problem 013
void largeSum()
{
	long long int ten1[100], ten2[100], ten3[100], ten4[100], ten5[100];
	ifstream numbers("numbers.txt", std::ios::in);
	// Read the file one line at a time, take 10 characters of each number, put into arrays based on
	// which set of 10 the numbers came from
	string numList;
	stringstream temp;
	for (int i = 0; i < 100; ++i) 
	{
		string temps;
		numbers >> temps;
		temp << temps;
	}
	numList = temp.str();
	
	for (int i = 0, j = 0, k = 0; i <= 4990; i += 10)	 
	{
		if (j == 0) 
		{
			ten1[k] = stoll(numList.substr(i, 10));
			++j;
		}
		else if (j == 1) 
		{
			ten2[k] = stoll(numList.substr(i, 10));
			++j;
		}
		else if (j == 2) 
		{
			ten3[k] = stoll(numList.substr(i, 10));
			++j;
		}
		else if (j == 3) 
		{
			ten4[k] = stoll(numList.substr(i, 10));
			++j;
		}
		else if (j == 4) 
		{
			ten5[k] = stoll(numList.substr(i, 10));
			++k;
			j = 0;
		}
	}// It works
	
	long long int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	for (int i = 0; i < 5; ++i) 
	{
		if (i == 0) 
		{
			for (int j = 0; j < 100; ++j) 
			{
				sum1 += ten1[j];
			}
		} 
		else if (i == 1)
		{
			for (int j = 0; j < 100; ++j) 
			{
				sum2 += ten2[j];
			}
		}
		else if (i == 2) 
		{
			for (int j = 0; j < 100; ++j) 
			{
				sum3 += ten3[j];
			}
		}
		else if (i ==3) 
		{
			for (int j = 0; j < 100; ++j) 
			{
				sum4 += ten4[j];
			}
		}
		else if (i == 4) 
		{
			for (int j = 0; j < 100; ++j) 
			{
				sum5 += ten5[j];
			}
		}
	}
	cout << sum1 << endl << sum2 << endl << sum3 << endl << sum4 << endl << sum5;
}

// Problem 014
void CollatzSequence()
{
	long long int LSequence = 0, currentLength, num = 0, LSNum = 0;
	for (int i = 1; i <= 1000000; ++i) 
	{
		
		currentLength = 1;
		num = i;
		for(; num > 1;)
		{
			if(num%2 == 0)
			{
				num = num/2;
			}
			else
			{
				num = 3*num + 1;
			}
			++currentLength;
		}
		if(currentLength >= LSequence)
		{
			LSequence = currentLength;
			LSNum = i;
		}
	}
	cout << LSNum << endl << LSequence;
}

// Problem 015
// Solution is combinatorics. 40 moves, picking 20 in one direction determs the solution, hence 40 choose 20 (2n choose n)

// Problem 016
void digitSum()
{
   string value = std::to_string(pow(2, 1000));
   int sum = 0, i = 0;
   while (value.at(i) != '.')
   {
      sum += value.at(i) - '0';
      ++i;
   }
   cout << sum << endl;
}





// Problem 019
int intermediateSum(int m, bool leapYear)
{
   // True == it is a leap year, least likely
   if(!leapYear)
   {
      switch (m)
      {
         case Jan:
            return 1;
         case Feb:
            return 32;
         case Mar:
            return 60;
         case Apr:
            return 91;
         case May:
            return 121;
         case Jun:
            return 152;
         case Jul:
            return 182;
         case Aug:
            return 213;
         case Sep:
            return 244;
         case Oct:
            return 274;
         case Nov:
            return 305;
         case Dec:
            return 335;
      }
   }
   // Only happens if it is a leap year.
   else
   {
      switch (m)
      {
         case Jan:
            return 1;
         case Feb:
            return 32;
         case Mar:
            return 61;
         case Apr:
            return 92;
         case May:
            return 122;
         case Jun:
            return 153;
         case Jul:
            return 183;
         case Aug:
            return 214;
         case Sep:
            return 245;
         case Oct:
            return 275;
         case Nov:
            return 306;
         case Dec:
            return 336;
      }
   }
}

void sundays()
{
   // Note: Jan 1, 1901 was a Tuesday
   int month; // Jan = 0
   int count = 0;
   int monthSum;
   int dayCount= 0;

   // Tuesday = 0, W = 1, ... , Sunday = 5, Monday = 6
   for(size_t year = 1; year <= 100; ++year)
   {
      if(year%4 != 0)
      {
         for(month = 0; month <= 11; ++month)
         {
            monthSum = dayCount + intermediateSum(month, false);
            if(monthSum % 7 == 5)
               ++count;
         }
         dayCount += 365;
      }
      else
      {
         for(month = 0; month <= 11; ++month)
         {
            monthSum = dayCount + intermediateSum(month, false);
            if(monthSum % 7 == 5)
               ++count;
         }
         dayCount += 366;
      }
   }
   cout << endl << --count << endl;
}




