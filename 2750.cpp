#include <iostream>
#include <vector>

using namespace std;

void insert_sort(vector<int>& arr, int n)
{
    int temp, i, j;

    for(i = 1; i < n; i++) {
		temp = arr[i];

		for(j = i - 1; j >= 0; j--) {
			if(arr[j] > temp) arr[j+1] = arr[j];
            else break;
		}

		arr[j+1] = temp;
	}
}

int main()
{
    int N, num, index;

    cin >> N;

    vector<int> numbers;

    for(int i = 0; i < N; ++i)
    {
        cin >> num;

        numbers.push_back(num);
    }

    insert_sort(numbers, N);

    for(int i : numbers)
    {
        cout << i << endl;
    }
}