#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    int n, x;
	    cin >> n;
	    vector<int> cost;
	    long long int total = 0;
	    
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> x;
	        cost.push_back(x);
	    }
	    
	    sort(cost.begin(), cost.end(), greater<int>());
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(i%4 < 2)
	            total += cost[i];
	    }
	    
	    cout << total << endl;
	}
	return 0;
}
