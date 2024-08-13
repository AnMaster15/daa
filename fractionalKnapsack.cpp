#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
};

bool comp(Item a, Item b) {
    double p = (double)a.value / a.weight;
    double q = (double)b.value / b.weight;
    return p > q;
}

void knapsack(int W, Item arr[], int n) {
    sort(arr, arr + n, comp);
    double profit = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= W) {
            W -= arr[i].weight;
            profit += arr[i].value;
        } else {
            profit += arr[i].value * ((double)W / arr[i].weight);
            break;
        }
    }
    cout << "Total profit: " << profit << endl;
}

int main() {
    int W = 50;
    Item arr[] = { {60, 10}, {100, 20}, {120, 30} };
    int n = sizeof(arr) / sizeof(arr[0]);
    knapsack(W, arr, n);
    return 0;
}
