#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc;
	cin >> tc;
	while(tc--)
	{
	    int m = INT_MAX;
	    int n, x, sum = 0;
	    cin >> n >> x;
	    int a[n];
	    
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> a[i];
	        m = min(m, a[i]);
	        sum += a[i];
	    }
	    
	    if(sum%x < m)
	        cout << sum/x << endl;
	    else
	        cout << -1 << endl;
	}
	return 0;
}
