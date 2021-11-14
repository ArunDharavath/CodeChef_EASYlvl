#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    string s1, s2;
	    cin >> s1 >> s2;
	    int count = 0;
	    unordered_set<char> c;
        for(int i = 0; i < s1.length(); i++)
            c.insert(s1[i]);
            
        for(int i = 0; i < s2.length(); i++)
        {
            if(c.find(s2[i])!= c.end())
                count++;
        }
        cout << count << endl;
	}
	return 0;
}
