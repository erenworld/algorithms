// Reverse bits of a given 32 bits unsigned integer.
// Easy
// Bit manipulation

class Solution {
    public:
        int reverseBits(int n) {
            int result = 0;
        
            for (unsigned int i = 0; i < 32; i++) {
                result <<= 1;
                if ((n & 1) == 1) {
                    result |= 1;
                }
                n >>= 1;
            }
            return result;
        }
};

//TODOS: If this function is called many times, how would you optimize it? Memoization, caching?

