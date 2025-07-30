A program updates variables in memory according to its instructions. Variables come in types—a
type is a classification of data that spells out possible values for that type and the operations that
can be performed on it.

The width of these types is the number of bits of storage a corresponding variable takes in memory. For example, 

> Most implementations of C++ use 32 or 64 bits for an int.
> In Java an int is always 32 bits.


# todos 
- Be very familiar with the bit-wise operators such as 6&4, 1|2, 8>>1, 1<<10, ˜0, 15ˆx.
- Be very comfortable with the bitwise operators, particularly XOR.
- Understand how to use masks and create them in an machine independent way.
- Know fast ways to clear the lowermost set bit (and by extension, set the lowermost 0, get its
index, etc.)
- Understand signedness and its implications to shifting.
- Consider using a cache to accelerate operations by using it to brute-force small inputs.
- Be aware that commutativity and associativity can be used to perform operations in parallel
and reorder operations.
- Know the constants denoting the maximum and minimum values for numeric
types, etc., e.g., numeric_limits<int>::min(), numeric_limits<float>::max(),
numeric_limits<double>::infinity().
- Take extra care when comparing floating point values. In particular, it’s often appropriate to
use an absolute/relative tolerance.
- Key methods in cmath are abs(-34), fabs(-3.14), ceil(2.17), floor(3.14), min(x, -4),
max(3.14, y), pow(2.71, 3.14), log(7.12), and sqrt(225).
- Know how to interconvert integers, characters, and strings, e.g., x - ’0’ to convert a digit
character to an integer, to_string(123) to convert an integer to a string, stoi("42") to
convert a string to an integer, etc.
- Key methods in random are uniform_int_distribution<> dis(1, 6) (which returns an integer value in [1, 6]), uniform_real_distribution<double> dis(1.3, 2.9) (which returns a floating point number in [1.3, 2.9]), generate_canonical<double, 10> (which returns a value in [0, 1)).
- Use swap(x,y) to exchange values succinctly—it works with complex types such as vector.
