#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting {
    int start;
    int end;
};

bool comp(Meeting a, Meeting b) {
    return a.end < b.end;
}

void activity(Meeting arr[], int n) {
    sort(arr, arr + n, comp);
    int r = 1;
    int last_end_time = arr[0].end;
    for (int i = 1; i < n; i++) {
        if (arr[i].start >= last_end_time) {
            r++;
            last_end_time = arr[i].end;
        }
    }
    cout << "The number of meetings is: " << r << endl;
}

int main() {
    Meeting arr[] = { {1, 2}, {3, 4}, {5, 7}, {5, 9}, {8, 9}, {5, 9} };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Meeting schedule is: " << endl;
    activity(arr, n);
    return 0;
}
