class Solution {
    public:
        bool powerOfTwo(unsigned int n) {
            if (n <= 0) return false; // overflow

            return (n & (n - 1)) == 0;
        }
};
