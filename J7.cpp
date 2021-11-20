#include <iostream>
#include <bits/stdc++.h>

using namespace std;

float maxv(float P, float A)
{
    
    float l = (P - sqrt(P * P - 24 * A)) / 12;
    float V = l * (A / 2.0 - l * (P / 4.0 - l));
    return V;
}

int main() {
	// your code goes here
	
	int tc;
	cin >> tc;
	
	while(tc--)
	{
	    float p,s;
	    cin >> p >> s;
	    
	    cout << maxv(p,s) << endl;
	    
	    
	}
	return 0;
}
