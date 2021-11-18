#include <iostream>
using namespace std;

int main() {
    int tc, count = 0;
    cin >> tc;
    while(tc--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        int d1 = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
        int d2 = (x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3);
        int d3 = (x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3);
    
        if((d1 == d2 + d3) || (d2 == d1 + d3) || (d3 == d1 + d2))
            count++;
    }
    cout << count;
	return 0;
}
