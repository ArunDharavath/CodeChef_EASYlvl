#include <iostream>
#include <bits/stdc++.h>
typedef long double lf;

using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >> tc;
	while(tc--)
	{
	    lf l, d, s, c;
	    cin >> l >> d >> s >> c;
	    s = s*pow(c + 1, d - 1);
        if(s >= l)
            cout << "ALIVE AND KICKING\n";
        else
            cout << "DEAD AND ROTTING\n";

	}
	return 0;
}
