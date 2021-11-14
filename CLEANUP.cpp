#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc, n, m;
	cin >> tc;
	
	while(tc--)
	{
	    cin >> n >> m;
	    int arr[n];
	    
	    for(int i = 0; i < n; ++i)
	        arr[i] = i + 1;
	    
	    int temp;
	    for(int  i = 0; i < m; ++i)
	    {
	        cin >> temp;
	        arr[temp - 1] = 0;
	    }
	    
	    bool chef = true, ass = true;
	    vector<int> chf, assn;
	    
	    for(int i = 0; i < n; ++i)
	    {
	        if(arr[i] == 0)
	            continue;
	            
	        if(chef == true)
	        {
	            chf.push_back(arr[i]);
	            chef = false;
	            ass = true;
	        }
	        else if(ass = true)
	        {
	            assn.push_back(arr[i]);
	            ass = false;
	            chef = true;
	        }
	    }
	    
	    if(!chf.empty())
	        for(auto it: chf)
	            cout << it << " ";
	        
	    cout << "\n";
	        
	    if(!assn.empty())
	        for(auto it: assn)
	            cout << it << " ";
	       
	    cout << "\n";
	}
	return 0;
}
