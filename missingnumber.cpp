Find missing numbers! 
in this problem i learned how we can use basic mathematical formulas like in this case n*(n+1)/2 for some of n numbers. And extract the desired output. 


#include <vector>
#include <iostream>
using namespace std;;
int main(int argc, char *argv[])
{
	vector<int> A={3,0,1};
	int n=A.size();
	int e=n*(n+1)/2;
	int a=0;
	int mi;
	for(int i=0;i<A.size();i++){
		a+=A[i];
	}
	mi=e-a;
	cout<<"Missing no is"<<mi<<endl;
}