/* 
/* Author: Kateryna Voitiuk
/* Course: C++ for C Programmers 
/* Assignment 1
/* Date: 12/5/16
/* Description: Convert C program given into C++
*/

#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
const int N = 40;

//helper function to sum all elements in some vector d 
inline void sum(int*p, vector<int> &d){
   *p = 0;
   for(int &num : d) 
     *p += num; 
}

//sums the numbers 1 through N and outputs the result
int main() {
   int total = 0;
   vector<int> data(N);

   //populate our vector 
   for(int &num : data)
     num = i;
        
   //perform the summation
   sum(&total, data);

   //output result to screen
   cout << "sum is " << total << endl;

   return 0;

}




