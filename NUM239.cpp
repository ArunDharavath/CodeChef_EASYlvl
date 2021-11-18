#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int tc, n1, n2;
    cin >> tc;
    while(tc--)
    {
        int count = 0;
        cin >> n1 >> n2;
        for(int i = n1; i <= n2; ++i)
        {
            if(i%10 == 2 || i%10 == 3 || i%10 == 9)
                count++;
        }
        cout << count << endl;
    }
	return 0;
}
