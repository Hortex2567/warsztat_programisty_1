#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int* tab, int length);
int max_i(int* tab, int length);
int min(int* tab, int length);
int min_i(int* tab, int length);
void bubble_sort(int* tab, int length);
void show_table(int* tab, int length);
void quicksort(int* tab, int length);
void selection_sort(int* tab, int length);
void swap(int* a, int* b);

int main() {
    int length = 10;
    int tab[length];
    for (int i = 0; i < length; i++) tab[i] = rand() % 100;
    for (int i = 0; i < length; i++) cout << tab[i] << ", ";
    cout << endl << endl;
    // cout << "min, max: " << min(tab, 13) << ", " << max(tab, 13) << endl;
    selection_sort(tab, 10);
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

int max_i(int* tab, int length) {
    int current = tab[0];
    int c_i = 0;
    for (int i = 0; i < length; i++) {
        if (current < tab[i]) {
            current = tab[i];
            c_i = i;
        }
    }
    return c_i;
}

int min(int* tab, int length) {
    int current = tab[0];
    for (int i = 0; i < length; i++) {
        if (current > tab[i]) current = tab[i];
    }
    return current;
}

int min_i(int* tab, int length) {
    int current = tab[0];
    int c_i = 0;
    for (int i = 0; i < length; i++) {
        if (current > tab[i]) {
            current = tab[i];
            c_i = i;
        }
    }
    return c_i;
}

void bubble_sort(int* tab, int length) {
    for (int i = 0; i < length; i++) {
        bool modified = false;
        for (int j = 0; j < length - i - 1; j++) {
            show_table(tab, length);
            if (tab[j] > tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                modified = true;
            }
        }
        if (!modified) {
            cout << "Stopped at iteration #" << i << endl;
            break;
        }
    }
}

void selection_sort(int* tab, int length) {
    for (int i = 0; i < length - 1; i++) {
        int len = length - 2 * i;
        if (len <= 1) break;

        int min_id = i + min_i(tab + i, len);
        swap(tab[i], tab[min_id]);
        int max_id = i + max_i(tab + i, len);
        swap(tab[length - 1 - i], tab[max_id]);
    }
}

void show_table(int* tab, int length) {
    for (int i = 0; i < length; i++) {
        cout << tab[i];
        if (i != length - 1) cout << ", ";
    }
    cout << endl;
}

void swap(int* a, int* b) {
   int tmp = *a;
   *a = *b;
   *b = tmp;
}

void insertion_sort(int* tab, int length) {
   for (int i = 0; i < length; i++) {
   
   }
}
