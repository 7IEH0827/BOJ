#include <iostream>
#include <vector>

using namespace std;

void insert_sort(vector<int>& arr, int len)
{
    int i, j, key;

    for(i = 1; i < len; ++i) {
        key = arr[i];
        
        for(j = i - 1; j >= 0 && arr[j] < key; --j) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int N, remain;
    vector<int> numbers;

    cin >> N;

    while(N >= 10) {
        remain = N % 10;
        numbers.push_back(remain);
        N /= 10;
    }

    remain = N % 10;
    numbers.push_back(remain);

    insert_sort(numbers, numbers.size());

    for(int num : numbers) {
        cout << num;
    }
}