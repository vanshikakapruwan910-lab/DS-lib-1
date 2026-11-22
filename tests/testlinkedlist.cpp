
#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{
    LinkedList list;

    cout << "\n========== TEST 1: INSERT AT BEGINNING ==========\n";

    list.insertAtBegin(30);
    list.insertAtBegin(20);
    list.insertAtBegin(10);
    list.display();

    cout << "\n========== TEST 2: INSERT AT END ==========\n";

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.display();

    cout << "\n========== TEST 3: INSERT AT POSITION ==========\n";

    list.insertAtPosition(25, 3);
    list.display();

    cout << "\n========== TEST 4: INSERT AFTER VALUE ==========\n";

    list.insertAfterK(35, 30);
    list.display();

    cout << "\n========== TEST 5: INSERT BEFORE VALUE ==========\n";

    list.insertBeforeK(15, 20);
    list.display();

    cout << "\n========== TEST 6: SEARCH ==========\n";

    if (list.search(30))
        cout << "30 found in the list\n";
    else
        cout << "30 not found in the list\n";

    if (list.search(100))
        cout << "100 found in the list\n";
    else
        cout << "100 not found in the list\n";

    cout << "\n========== TEST 7: LENGTH ==========\n";

    cout << "Length of list: " << list.length() << endl;

    cout << "\n========== TEST 8: DELETE AT BEGINNING ==========\n";

    list.deleteAtBegin();
    list.display();

    cout << "\n========== TEST 9: DELETE AT END ==========\n";

    list.deleteAtEnd();
    list.display();

    cout << "\n========== TEST 10: DELETE AT POSITION ==========\n";

    list.deleteAtPosition(3);
    list.display();

    cout << "\n========== TEST 11: DELETE VALUE ==========\n";

    list.deleteValueK(35);
    list.display();

    cout << "\n========== TEST 12: INVALID POSITION ==========\n";

    list.insertAtPosition(100, 20);
    list.deleteAtPosition(20);

    cout << "\n========== TEST 13: DELETE NON-EXISTING VALUE ==========\n";

    list.deleteValueK(100);

    cout << "\n========== TEST 14: FINAL DISPLAY ==========\n";

    list.display();

    cout << "Final Length: " << list.length() << endl;

    cout << "\n========== TEST 15: DELETE ALL NODES ==========\n";

    while (list.length() > 0)
        list.deleteAtBegin();

    list.display();

    cout << "Final Length: " << list.length() << endl;

    cout << "\n========== ALL LINKED LIST TESTS COMPLETED ==========\n";

    return 0;
}
