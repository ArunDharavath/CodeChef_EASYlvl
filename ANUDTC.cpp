#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n;
	    cin >> n;
	    if(360 % n == 0)
	        cout << "y" << " ";
	    else
	        cout << "n" << " ";
	   
	    if(n <= 360)
	        cout << "y" << " ";
	    else
	        cout << "n" << " ";
	   
	    if((n*(n + 1)/2) <= 360)
	        cout << "y" << " ";
	    else
	        cout << "n" << " ";
	    
	    cout << endl;
	}
	return 0;
}
