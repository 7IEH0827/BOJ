#include <iostream>
#include <vector>

using namespace std;

void insert_sort(vector<int>&arr, int len) 
{
    int i, j, key;

    for(i = 1; i < len; ++i) {
        key = arr[i];

        for(j = i - 1; j >= 0 && arr[j] > key; --j) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int N, k, num;

    cin >> N >> k;

    vector<int> score(N, 0);

    for(int i = 0; i < N; ++i) {
        cin >> num;
        score[i] = num;
    }

    insert_sort(score, N);

    cout << score[N - k];
}