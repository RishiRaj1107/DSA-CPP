#include <iostream>
using namespace std;
class Solution {
public:
    int main()
    {
        int a;
        cout << "Enter a no";
        cin >> a;
        return isPowerOfTwo(a);
    }
    bool isPowerOfTwo(int n) {
        while ( n<=1 )
        {
            n>>1;
        }
        if(n == 0 )
        return true;

        else
        return false;
    }
};