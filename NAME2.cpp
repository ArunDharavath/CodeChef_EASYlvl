#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	
	while(tc--)
	{
	    string m, w;
	    cin >> m >> w;
	    int curr = 0;
	    if(m.length() > w.length())
	    {
	        for(int i = 0; i < m.length(); ++i)
	            if(m[i] == w[curr])
	                curr++;
	    }
	    else
	    {
	            for(int i = 0; i < w.length(); ++i)
	                if(m[curr] == w[i])
	                    curr++;
	    }
	    
	    if(curr == m.length() || curr == w.length())
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
