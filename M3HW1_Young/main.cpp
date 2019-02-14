// CSC 134
// M3HW1_Young
// Seth Young
// 02-14-2019

#include <iostream>
#include <math.h>

using namespace std;

// chapter listings 5-1 through 5-5.

//Listing 5-5 part 1
int AddOne( int start)
{
    int newNumber;
    newNumber = start +1;
    return newNumber;
}

int main()
{
   // Listing 5-1
   cout<<fabs(-10.5)<<endl;
   cout<<fabs(10.5)<<endl;

   // Listing 5-2
   double myNumber;
   myNumber = fabs(-23.87);
   cout<<myNumber<<endl;

   // Listing 5-3
   double start;
   double finish;
   start = -253.895;
   finish = fabs(start);
   cout<<finish<<endl;

   // Listing 5-4
   double number = 10.0;
   double exponent = 3.0;
   cout<<pow(number, exponent)<<endl;

   // Listing 5-5 part 2
   int testNumber;
   int result;
   testNumber = 20;
   result =AddOne(testNumber);
   cout<<result<<endl;
    return 0;
}
