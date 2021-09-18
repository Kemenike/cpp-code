#include <iostream>

using namespace std;

#define SMALLLIMIT 1000
#define LARGELIMIT 100000

void hundred (int n) {
    if (n < SMALLLIMIT) {
        cout << n << endl;
        hundred(n+1);
    }
}

int main () {
    hundred(1);
    cout << endl << "Is the same as... " << endl << endl;
    for (int i = 1; i < LARGELIMIT; i++) {
        cout << i << endl;
    }

    cout << endl << "Program Complete." << endl;
}