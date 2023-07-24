#include <iostream>
#include <vector>

using namespace std;

vector<int> insertAtEnd(vector<int> a, int x) {
    a.push_back(x);
    return a;
}

int fib(int x) {
    vector<int> nums = {0, 1};

    for (int i = 1; i <= x-2; i++) {
        nums = insertAtEnd(nums, nums[i] + nums[i-1]);
    }

    return nums[x-1];
}


int main() {
    int digits;

    cout << "nth digit of the Fibonacci Sequence: ";
    cin >> digits;
    cout << fib(digits);
};
