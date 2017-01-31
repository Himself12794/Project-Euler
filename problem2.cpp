#include <iostream>

int main(int argc, char **argv) {

    long sum = 0;
    int prev = 1;
    int n = 1;

    while (n <= 4000000) {

        if (n % 2 == 0) sum += n;
        int temp = n;
        n += prev;
        prev = temp;

    }

    std::cout << sum;
    return 0;
}

long fib_sum_even(int n, long &sum) {

}
