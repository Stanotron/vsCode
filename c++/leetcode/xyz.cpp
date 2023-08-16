#include <iostream>
using namespace std;

int main() {
    int i;
    int K, N;
    cin >> N;
    cin >> K;

    int count = 0;
    int currentSum = 0;

    for (int i = 1; i <= N; ++i) {
        int num = i;
        currentSum = 0;

        while (num > 0) {
            currentSum += num % 10;
            num /= 10;
        }

        if (currentSum % K == 0) {
            count++;
        }
    }

    cout << "Total number of weird numbers: " << count << endl;

    return 0;
}