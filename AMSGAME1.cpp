#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b > a)
        return gcd(b, a);
    
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
	// your code goes here
	
	int tc;
	cin >> tc;
	
	while(tc--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0; i < n; ++i)
	        cin >> arr[i];
	    
	    int res = arr[0];
	    for(int i = 1; i < n; ++i)
	        res = gcd(res, arr[i]);
	   
	    cout << res << endl;
	}
	return 0;
}
