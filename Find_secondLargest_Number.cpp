//Find Second Largest Number:
// In this problem, I learned how to determine the size of an array without using built-in len or size() functions, by applying the formula sizeof(A) / sizeof(A[0]).
// Additionally, I practiced managing two conditions simultaneously while keeping track of both the largest and second largest values in a single pass.
// I also explored the <climits> library, which provides INT_MIN, a constant representing the smallest possible integer value that depends on the system’s bit architecture.


#include <iostream>
#include <climits>
using namespace std;

int main() {
    int A[] = {3, 5, 45, 90};
    int n = sizeof(A) / sizeof(A[0]);

   int largest=INT_MIN;
   int secondLargest=INT_MIN;
   
   for(int i=0;i<n;i++){
       if(A[i]>largest){
           secondLargest=largest;
           largest=A[i];
       }
       else if(A[i]>secondLargest && A[i]<largest){
           secondLargest=A[i];
       }
   }
   
   if(secondLargest==INT_MIN){
       std::cout << -1 << std::endl;
   }
   else{
       std::cout << secondLargest << std::endl;
   }
}
