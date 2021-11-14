#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int tc;
	cin >> tc;
	string s;
	
	while(tc--)
	{
	    bool flag = false;
	
	    cin >> s;
	    for(int i = 1; i < s.size() - 1; i++)
	    {
	        if(s[i] == '0')
	        {
	            if(s[i - 1] == '1' && s[i + 1] == '1')
	                flag = true;
	        }
	        else
	        {
	            if(s[i - 1] == '0' && s[i + 1] == '0')
	                flag = true;
	        }
	    }
	    cout << (flag ? "Good" : "Bad") << endl;
	}
	return 0;
}
