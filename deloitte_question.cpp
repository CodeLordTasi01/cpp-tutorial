#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sumOfPrimes(int n) {
    int count = 0;
    int num = 2;
    int total = 0;
    while (count < n) {
        if (isPrime(num)) {
            total += num;
            count++;
        }
        num++;
    }
    return total;
}

int main() {
    int n;
    cout << "Enter the number of primes to sum: ";
    cin >> n;
    cout << "Sum of first " << n << " prime numbers: " << sumOfPrimes(n) << endl;
    return 0;
}
