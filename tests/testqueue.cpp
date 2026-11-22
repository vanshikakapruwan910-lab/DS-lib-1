
#include<iostream>
#include "dslib/q1.h"
using namespace std;

int main()
{
    Queue q;

    cout << "TEST 1: Initial Queue" << endl;
    cout << "Is Empty: " << q.isEmpty() << endl;
    cout << "Is Full: " << q.isFull() << endl;
    q.display();

    cout << "\nTEST 2: Enqueue Elements" << endl;
    q.enqueue(40);
    q.enqueue(10);
    q.enqueue(50);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Is Full: " << q.isFull() << endl;

    cout << "\nTEST 3: Queue Overflow" << endl;
    q.enqueue(60);

    cout << "\nTEST 4: Dequeue" << endl;
    q.dequeue();
    q.display();
    cout << "New Front: " << q.getFront() << endl;

    cout << "\nTEST 5: Circular Queue" << endl;
    q.enqueue(60);
    q.display();

    cout << "\nTEST 6: Enqueue Front" << endl;
    q.enqueueFront(5);
    q.display();

    cout << "\nTEST 7: Dequeue Rear" << endl;
    q.dequeueRear();
    q.display();

    cout << "\nTEST 8: Sort Ascending" << endl;
    q.sort(true);
    q.display();

    cout << "\nTEST 9: Sort Descending" << endl;
    q.sort(false);
    q.display();

    cout << "\nTEST 10: Dequeue All Elements" << endl;
    while(!q.isEmpty())
    {
        cout << "Removing: " << q.getFront() << endl;
        q.dequeue();
    }

    q.display();

    cout << "\nTEST 11: Dequeue From Empty Queue" << endl;
    q.dequeue();

    cout << "\nTEST 12: Get Front and Rear From Empty Queue" << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    cout << "\nTEST 13: Enqueue After Empty" << endl;
    q.enqueue(100);
    q.display();

    cout << "\nAll Queue Test Cases Completed." << endl;

    return 0;
}
