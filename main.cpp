#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int* tab, int length);
int min(int* tab, int length);

int main() {
    int length = 10;
    int tab[length];
    for (int i = 0; i < length; i++) tab[i] = rand() * 100;
    for (int i = 0; i < length; i++) cout << tab[i] << ", ";
    cout << endl;
    cout << "min, max: " << min(tab, 13) << ", " << max(tab, 13) << endl;
    return 0;
}

int max(int* tab, int length) {
    int current = tab[0];
    for (int i = 0; i < length; i++) {
        if (current < tab[i]) current = tab[i];
    }
    return current;
}

int min(int* tab, int length) {
    int current = tab[0];
    for (int i = 0; i < length; i++) {
        if (current > tab[i]) current = tab[i];
    }
    return current;
}
