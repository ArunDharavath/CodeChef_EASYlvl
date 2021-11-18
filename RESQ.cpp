#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int tc, n;
	cin >> tc;
	
	while(tc--)
	{
	    cin >> n;
	    int i = 1, min = INT_MAX;
	    
	    while(true)
	    {
	        if(i <= (n/i))
	        {
	            if(n % i == 0)
	            {
	                if(min > (n/i - i))
	                    min = n/i - i;
	            }
	        }
	        else
	            break;
	        i++;
	    }
	    cout << min << endl;
	}
	return 0;
}
