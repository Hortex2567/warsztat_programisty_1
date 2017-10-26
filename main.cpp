#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int* tab, int length);
int min(int* tab, int length);
void bubble_sort(int* tab, int length);
void show_table(int* tab, int length);

int main() {
    int length = 10;
    int tab[length];
    for (int i = 0; i < length; i++) tab[i] = rand() % 100;
    for (int i = 0; i < length; i++) cout << tab[i] << ", ";
    cout << endl << endl;
    // cout << "min, max: " << min(tab, 13) << ", " << max(tab, 13) << endl;
    bubble_sort(tab, 10);
    cout << endl;
    for (int i = 0; i < length; i++) cout << tab[i] << ", ";
    cout << endl;

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

void bubble_sort(int* tab, int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i -1; j++) {
            show_table(tab, length);
            if (tab[j] > tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

void show_table(int* tab, int length) {
    for (int i = 0; i < length; i++) {
        cout << tab[i];
        if (i != length - 1) cout << ", ";
    }
    cout << endl;
}
