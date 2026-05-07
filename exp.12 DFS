#include <iostream>
using namespace std;

class DFSGraph {
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

    void dfsTraversal() {

        int start;
        int stack[10];
        int top = -1;

        for(int i = 0; i < vertices; i++) {
            visited[i] = 0;
        }

        cout << "Enter starting vertex: ";
        cin >> start;

        stack[++top] = start;

        cout << "DFS Order: ";

        while(top != -1) {

            int current = stack[top--];

            if(visited[current] == 0) {

                cout << current << " ";
                visited[current] = 1;

                for(int i = vertices - 1; i >= 0; i--) {

                    if(adj[current][i] == 1 && visited[i] == 0) {

                        stack[++top] = i;
                    }
                }
            }
        }

        cout << endl;
    }
};

int main() {

    DFSGraph g;
    int choice;
    char ch;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1. Create Graph\n";
        cout << "2. Perform DFS\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                g.createGraph();
                break;

            case 2:
                g.dfsTraversal();
                break;

            default:
                cout << "Invalid Choice!\n";
        }

        cout << "Continue? (y/n): ";
        cin >> ch;

    } while(ch == 'y' || ch == 'Y');

    return 0;
}
