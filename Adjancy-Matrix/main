#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    char directed;
    cout << "Is the graph directed? (y/n): ";
    cin >> directed;
    char weighted;
    cout << "Is the graph weighted? (y/n): ";
    cin >> weighted;


    vector< vector<int> > matrix(n, vector<int>(n, 10000));
    for (int i = 0; i < n; i++) {
        matrix[i][i] = 0;
    }

    int u, v, weight;
    int edge_count = 1;
    cout << "Enter the edges of the network in terms of node pairs and -1 -1 to end:" << endl;

    while (true) {
        cout << "Edge number " << edge_count << ": ";
        cin >> u >> v;

        if (u == -1 && v == -1) {
            break;
        }
        u--; v--;

        if (weighted == 'y') {
            cout << "Enter the weight of the edge: ";
            cin >> weight;
        } else {
            weight = 1;
        }
        if (directed == 'y') {
            matrix[u][v] = weight;
        } else {
            matrix[u][v] = weight;
            matrix[v][u] = weight;
        }

        edge_count++;
    }

    cout << "************The network in matrix representation is as below************" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 10000) {
                cout << "INF\t";
            } else {
                cout << matrix[i][j] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}

