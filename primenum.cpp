#include <iostream>

int main();

int main() {

    int num_prime{};
    std::cout << "Enter a number of prime numbers: " ;
    std::cin >> num_prime;
    int num{2};
    
    for(int i{0}; i < num_prime; i++) {

        for (int j{2}; j < num; j++) {
                if (num % j == 0) {
                ++num;
                j = 2;
            }
        }
        std::cout << num << " ";
        num += 1;

    }





}