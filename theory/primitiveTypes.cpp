// Writing a program to count the number of bits that are set to 1 in an integer
// O(1) computation per bit, time complexity is O(n), where n is the number of bits in the integer
#include <stdio.h>

short CountBits(unsigned int x)
{
    short num_bits = 0;
    while (x) {
        num_bits += x & 1;
        x >>= 1; // tester le bit suivant a droite
    }
    return num_bits;
}


int main() {
    unsigned int val = 33; // 1101 en binaire
    printf("Nombre de bits à 1 : %d\n", CountBits(val)); // Affiche 3
}

