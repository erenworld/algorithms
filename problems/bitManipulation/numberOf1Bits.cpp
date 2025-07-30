// Given a positive integer n, write a function that returns the 
// number of set bits in its binary representation (also known as the Hamming weight).

// Input: n = 11
// Output: 3
// Explanation:
// The input binary string 1011 has a total of three set bits.

class Solution {
    public: 
        int hammingWeight(unsigned int n) {
            unsigned int counter = 0;
        
            // le nombre d'itérations est égal au nombre de bits à 1 dans n
            while (n) {
                n &= (n - 1);
                counter++;
            }
            return counter;
        }
};
