#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int tc;
	cin >> tc;
	
	while(tc--)
	{
	    string s; 
	    int sum = 0;
	    cin >> s;
	    
	    for(int i = 0; i < s.length(); ++i)
	    {
	        if(isdigit(s[i]))
	            sum += int(s[i]) - 48;
	    }
	    
	    cout << sum << endl;
	}
	return 0;
}
