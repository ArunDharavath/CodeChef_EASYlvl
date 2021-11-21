#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int tc, n;
	cin >> tc;
	string s;
	while(tc--)
	{
	    cin >> n;
	    int s1[n] = {0};
	    cin >> s;
	    
	    for(int i = 0; i < n; ++i)
	    {
	        if(s[i] == '1')
	        {
	            if(i == 0)
	            {
	                s1[i] = 2;
	                s1[i + 1] = 2;
	            }
	            else if(i == n - 1)
	            {
	                s1[i - 1] = 2;
	                s1[i] = 2;
	            }
	            else
	            {
	                s1[i - 1] = 2;
	                s1[i] = 2;
	                s1[i + 1] = 2;
	            }
	        }
	    }
	    int count = 0;
	    
	    for(int i = 0; i < n; ++i)
	        if(s1[i] == 0)
	            count++;
	    
	    cout << count << endl;
	}
	return 0;
}
