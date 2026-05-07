#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], R[3][3];
    int i, j, choice;
    char ch;

    do {
        cout << "\n1. Enter Matrices";
        cout << "\n2. Display Matrices";
        cout << "\n3. Add Matrices";
        cout << "\n4. Subtract Matrices";
        cout << "\n5. Transpose Matrix A";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Matrix A:\n";
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    cin >> A[i][j];

            cout << "Enter Matrix B:\n";
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    cin >> B[i][j];
        }

        else if (choice == 2) {
            cout << "\nMatrix A:\n";
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++)
                    cout << A[i][j] << " ";
                cout << endl;
            }

            cout << "\nMatrix B:\n";
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++)
                    cout << B[i][j] << " ";
                cout << endl;
            }
        }

        else if (choice == 3) {
            cout << "\nAddition:\n";
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    R[i][j] = A[i][j] + B[i][j];
                    cout << R[i][j] << " ";
                }
                cout << endl;
            }
        }

        else if (choice == 4) {
            cout << "\nSubtraction:\n";
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    R[i][j] = A[i][j] - B[i][j];
                    cout << R[i][j] << " ";
                }
                cout << endl;
            }
        }

        else if (choice == 5) {
            cout << "\nTranspose of Matrix A:\n";
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++)
                    cout << A[j][i] << " ";
                cout << endl;
            }
        }

        else {
            cout << "Wrong choice!";
        }

        cout << "\nContinue (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
