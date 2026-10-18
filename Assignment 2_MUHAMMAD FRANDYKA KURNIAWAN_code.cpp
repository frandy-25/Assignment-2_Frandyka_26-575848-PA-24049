#include <iostream>

using namespace std;

int main() {
    int start_val, end_val;
    cin >> start_val >> end_val;

    for (int i = start_val; i <= end_val; i++) {
        if (i < 2) continue;
        
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << i << endl;
        }
    }

    return 0;
}