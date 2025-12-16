// 191. Number of 1 Bits
// Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n!=0)
        {
            if(n & 1)
            count++;
            n = n>>1;
        }
        return count;
    }
};