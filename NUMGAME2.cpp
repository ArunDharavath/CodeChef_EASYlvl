#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    long long int n;
	    cin >> n;
	    if(n%4 == 1)
	        cout << "ALICE" << endl;
	    else
	        cout << "BOB" << endl;
	}
	return 0;
}
