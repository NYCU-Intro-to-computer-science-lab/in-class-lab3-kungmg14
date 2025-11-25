#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, int from, int aux, int to) {
    if (n == 1) {
        cout << "Move disk 1 from 1 to 2" << endl;
        cout << "Move disk 1 from 2 to 3" << endl;
    }
    hanoi (n - 1, from, to, aux);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    hanoi (n - 1, aux, from, to);
}

int main() {
    int x;
    cin >> x;
    hanoi(x, 1, 2, 3);

    return 0;
}