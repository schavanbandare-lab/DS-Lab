#include <iostream>
using namespace std;

class BFSGraph {
    int adj[10][10];
    int visited[10];
    int vertices;

public:

    void createGraph() {
        cout << "Enter total vertices: ";
        cin >> vertices;

        cout << "Enter adjacency matrix:\n";

        for(int i = 0; i < vertices; i++) {
            for(int j = 0; j < vertices; j++) {
                cin >> adj[i][j];
            }
        }

        cout << "Graph created successfully!\n";
    }

    void bfsTraversal() {
        int start;
        int q[10];
        int front = 0, rear = -1;

        for(int i = 0; i < vertices; i++) {
            visited[i] = 0;
        }

        cout << "Enter starting vertex: ";
        cin >> start;

        rear++;
        q[rear] = start;
        visited[start] = 1;

        cout << "BFS Order: ";

        while(front <= rear) {

            int current = q[front];
            front++;

            cout << current << " ";

            for(int i = 0; i < vertices; i++) {

                if(adj[current][i] == 1 && visited[i] == 0) {

                    rear++;
                    q[rear] = i;
                    visited[i] = 1;
                }
            }
        }

        cout << endl;
    }
};

int main() {

    BFSGraph g;
    int option;
    char ch;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1. Input Graph\n";
        cout << "2. Perform BFS\n";
        cout << "Enter your option: ";
        cin >> option;

        switch(option) {

            case 1:
                g.createGraph();
                break;

            case 2:
                g.bfsTraversal();
                break;

            default:
                cout << "Wrong Choice!\n";
        }

        cout << "Continue? (y/n): ";
        cin >> ch;

    } while(ch == 'y' || ch == 'Y');

    return 0;
}
