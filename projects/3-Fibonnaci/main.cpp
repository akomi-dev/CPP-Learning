#include <iostream>
#include <vector>

std::vector<int> insertAtEnd(std::vector<int> a, int x) {
    a.push_back(x);
    return a;
}

int fib(int x) {
    std::vector<int> nums = {0, 1};

    for (int i = 1; i <= x-2; i++) {
        nums = insertAtEnd(nums, nums[i] + nums[i-1]);
    }

    return nums[x-1];
}


int main() {
    int digits;

    std::cout << "nth digit of the Fibonacci Sequence: ";
    std::cin >> digits;
    std::cout << fib(digits);
};
