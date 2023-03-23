#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Implement all your functions here
// ******************************
void getInput(int &n1, int &n2, int &n3)
{
    cin >> n1;
    cin >> n2;
    cin >> n3;
}

int  findMin(int n1, int n2, int n3)
{
    int smallestNum;
    if(n1 < n2 && n1 < n3)
	{
		smallestNum = n1;
	}
	else if(n2 < n3)
	{
		smallestNum = n2;
	}
	else
	{
		smallestNum = n3;
	}	
    return smallestNum;
}

void printResult(int n1, int n2, int n3, int min)
{
    cout << n1 << " " << n2 << " "  << n3 << endl;
    cout << min;
}