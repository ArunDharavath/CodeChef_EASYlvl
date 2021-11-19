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
	    int a[n];
	    
	    for(int i = 0; i < n; ++i)
	        cin >> a[i];
	    
	    set<int> s;
	    
	    for(auto it : a)
	        s.insert(it);
	    
	    cout << s.size() << endl;
	}
	return 0;
}
