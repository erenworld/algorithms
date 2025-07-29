
// Writing a program to count the number of bits that are set to 1 in an integer
// O(1) computation per bit, time complexity is O(n), where n is the number of bits in the integer
short CountBits(unsigned int x)
{
    short num_bits = 0;
    while (x) {
        num_bits += x & 1;
        x >>= 1;
    }

    return num_bits;
}
