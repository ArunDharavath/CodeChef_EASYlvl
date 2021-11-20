#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int n;
	string jumb;
	cin >> n >> jumb;
	
	for(int i = 0; i < n; ++i)
	{
	    string s;
	    cin >> s;
	    
	    for(int i = 0; i < s.length(); ++i)
	    {
            if(islower(s[i]))
                s[i] = jumb[s[i] - 'a'];
            else if(isupper(s[i]))
                s[i] = toupper(jumb[s[i] - 'A']);
            else if(s[i] == '_')
                s[i] = ' ';
        }
        cout << s << endl;
	}
	return 0;
}
