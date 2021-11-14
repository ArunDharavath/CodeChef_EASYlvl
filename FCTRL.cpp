#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	// your code goes here
    ll tc, num;
	cin >> tc;
	while(tc--)
	{
        cin >> num;
        int sum = 0, i = 1;
        while(true)
        {
            int x = num/(pow(5,i));
            if(x < 1)
                break;
                
            sum += x;
            ++i;
        }
        cout << sum << endl;
	}
	return 0;
	
}
