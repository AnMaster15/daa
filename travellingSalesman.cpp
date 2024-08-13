#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int INF = INT_MAX;
const int N = 4;

int tsp(vector<vector<int>>& graph, int mask, int pos, vector<vector<int>>& dp) {
    if (mask == (1 << N) - 1)
        return graph[pos][0];

    if (dp[mask][pos] != -1)
        return dp[mask][pos];

    int ans = INF;

    for (int i = 0; i < N; i++) {
        if ((mask & (1 << i)) == 0) {
            int newAns = graph[pos][i] + tsp(graph, mask | (1 << i), i, dp);
            ans = min(ans, newAns);
        }
    }

    return dp[mask][pos] = ans;
}

int solveTSP(vector<vector<int>>& graph) {
    vector<vector<int>> dp(1 << N, vector<int>(N, -1));
    return tsp(graph, 1, 0, dp);
}

int main() {
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int minCost = solveTSP(graph);
    cout << "Minimum cost for TSP is: " << minCost << endl;

    return 0;
}
