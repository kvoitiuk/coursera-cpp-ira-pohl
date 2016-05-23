/* 
/* Author: Kate Voitiuk
/* Course: C++ for C Programmers 
/* Assignment 1
/* Date: 12/5/16
/* Description: Convert C program to C++
*/

#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
const int N = 40;

//helper function to sum all elements in some vector d 
inline void sum(int*p, vector<int> &d){
   *p = 0;
   for(int i = 0; i < d.size(); ++i) 
     *p += d.at(i); 
}


//sums the numbers 1 through N and outputs the result
int main() {
   int accum = 0;
   vector<int> data(N);

   //populate our vector 
   for(int i = 0; i < N; ++i)
     data.at(i)= i;
        
   //perform the summation
   sum(&accum, data);

   //output result to screen
   cout << "sum is " << accum << endl;

   return 0;

}
