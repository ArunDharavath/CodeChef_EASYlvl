#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isnotequal(int arr[], int n)
{
    int first = arr[0];
 
  for (int i = 1; i < n; i++)
    if (arr[i] != first)
      return true;
  return false;
}

int main() {
	
	int tc, n;
	cin >> tc;
	while(tc--)
	{
	    cin >> n;
	    int sal[n];
	    for(int i = 0; i < n; ++i)
	    {
	        cin >> sal[i];
	    }
	    sort(sal, sal+n);
	    int count = 0;
	    for(int j = n-1; j >= 1; --j)
	    {
	        count += sal[j] - sal[0];
	        for(int i = 0; i < n; ++i)
	        {
	            if(i != j)
	                sal[i] += count;
	        }
	    }
	    
	    cout << count << endl;
	}
	
	return 0;
}
