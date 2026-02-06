#include <iostream>
#include <vector>

using namespace std;

void insert_sort(vector<int>& arr, int len) {
    int i, j, key;

    for(i = 0; i < len; ++i) {
        key = arr[i];

        for(j = i -1; j >= 0 && arr[j] > key; --j) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int num, avg = 0, mid;
    vector<int> nums;

    for(int i = 0; i < 5; i++) {
        cin >> num;

        nums.push_back(num);
    }

    for(int i : nums) {
        avg += i;
    }
    avg /= 5;

    insert_sort(nums, 5);
    mid = nums[2];

    cout << avg << endl << mid;
}