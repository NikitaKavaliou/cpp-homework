#include <cmath>

// this function checks if a number is prime or not
bool isPrime(int number)
{
    // numbers less than 2 are not prime
    if (number < 2)
        return false;

    // trying to divide the number by all values up to sqrt(number)
    for (int i = 2; i <= sqrt(number); i++)
    {
        // if it divides evenly, then it's not prime
        if (number % i == 0)
            return false;
    }

    // if we didn't find any divisors, then it's prime
    return true;
}
