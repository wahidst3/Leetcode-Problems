// Problem: Best Time to Buy and Sell Stock:
// in this  i learned howto keep track of stock like buy sell like this code will select one best value/day to buy and then will return best day to sell to gain maximum profit

#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
   
 vector<int>Prices={7,1,5,3,6,4} ;
     int min=Prices[0];
     int maxProfit=0;
     int profit;
    for(int i=0;i<Prices.size();i++){
        
        if(min>Prices[i]){
            min=Prices[i];
               cout<<"Min "<<min<<"At index"<<i<<endl;  
        }
        profit=Prices[i]-min;
        cout<<"Profit "<<profit<<"At index"<<i<<endl;
        if(profit>maxProfit)
        {
            maxProfit=profit;
        }
    }
    std::cout <<  maxProfit<< std::endl; 
  
}
