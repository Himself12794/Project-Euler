#include <iostream>

int main(int argc, char **argv) {

    int sum = 0;

    for (size_t i = 1; i < 1000; i++) {

        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }

    }

    std::cout << sum;
    return 0;
}
