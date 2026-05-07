#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* head = NULL;
    int ch, value;
    char x;

    do {
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete from Beginning\n";
        cout << "4. Delete from End\n";
        cout << "5. Display\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
            case 1: {
                Node* newNode = new Node();
                cout << "Enter value: ";
                cin >> value;

                newNode->data = value;
                newNode->prev = NULL;
                newNode->next = head;

                if (head != NULL)
                    head->prev = newNode;

                head = newNode;
                break;
            }

            case 2: {
                Node* newNode = new Node();
                cout << "Enter value: ";
                cin >> value;

                newNode->data = value;
                newNode->next = NULL;

                if (head == NULL) {
                    newNode->prev = NULL;
                    head = newNode;
                } else {
                    Node* temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                    newNode->prev = temp;
                }
                break;
            }

            case 3: {
                if (head == NULL) {
                    cout << "List is empty\n";
                } else {
                    Node* temp = head;
                    head = head->next;

                    if (head != NULL)
                        head->prev = NULL;

                    delete temp;
                }
                break;
            }

            case 4: {
                if (head == NULL) {
                    cout << "List is empty\n";
                } else {
                    Node* temp = head;

                    if (temp->next == NULL) {
                        head = NULL;
                        delete temp;
                    } else {
                        while (temp->next != NULL) {
                            temp = temp->next;
                        }
                        temp->prev->next = NULL;
                        delete temp;
                    }
                }
                break;
            }

            case 5: {
                if (head == NULL) {
                    cout << "List is empty\n";
                } else {
                    Node* temp = head;
                    cout << "Doubly Linked List: ";
                    while (temp != NULL) {
                        cout << temp->data << " <-> ";
                        temp = temp->next;
                    }
                    cout << "NULL\n";
                }
                break;
            }

            default:
                cout << "Invalid choice\n";
        }

        cout << "Do you want to continue: ";
        cin >> x;

    } while (x == 'y' || x == 'Y');

    return 0;
}
