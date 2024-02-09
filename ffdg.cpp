#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    // Calculate the midpoint of the vector
    int n = nums.size();
    int mid = n / 2;

    // Split the vector into two halves
    vector<int> first_half(nums.begin(), nums.begin() + mid);
    vector<int> second_half(nums.begin() + mid, nums.end());

    // Print the two halves
    cout << "First Half: ";
    for (int num : first_half) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Second Half: ";
    for (int num : second_half) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}