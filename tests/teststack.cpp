
#include <iostream>
#include "dslib/stack.h"

using namespace std;

int main()
{
    Stack st;

    cout << "\n========== TEST 1: CHECK EMPTY ==========\n";

    if (st.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    cout << "\n========== TEST 2: PUSH ELEMENTS ==========\n";

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    cout << "\n========== TEST 3: CHECK SIZE ==========\n";

    cout << "Stack size: " << st.size() << endl;

    cout << "\n========== TEST 4: GET TOP ELEMENT ==========\n";

    cout << "Top element: " << st.getTop() << endl;

    cout << "\n========== TEST 5: PEEK ==========\n";

    st.peek();

    cout << "\n========== TEST 6: POP ELEMENT ==========\n";

    st.pop();
    st.display();

    cout << "\n========== TEST 7: CHECK EMPTY AFTER POP ==========\n";

    if (st.isEmpty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    cout << "\n========== TEST 8: CHECK FULL ==========\n";

    if (st.isFull())
        cout << "Stack is full\n";
    else
        cout << "Stack is not full\n";

    cout << "\n========== TEST 9: PUSH UNTIL FULL ==========\n";

    while (!st.isFull())
        st.push(100);

    cout << "Stack size: " << st.size() << endl;

    if (st.isFull())
        cout << "Stack is full\n";

    cout << "\n========== TEST 10: STACK OVERFLOW ==========\n";

    st.push(200);

    cout << "\n========== TEST 11: CLEAR STACK ==========\n";

    st.clear();
    st.display();

    cout << "Stack size: " << st.size() << endl;

    cout << "\n========== TEST 12: POP FROM EMPTY STACK ==========\n";

    st.pop();

    cout << "\n========== TEST 13: PEEK EMPTY STACK ==========\n";

    st.peek();

    cout << "\n========== TEST 14: GET TOP ON EMPTY STACK ==========\n";

    cout << "Top: " << st.getTop() << endl;

    cout << "\n========== TEST 15: FINAL EMPTY CHECK ==========\n";

    if (st.isEmpty())
        cout << "Stack is empty\n";

    cout << "\n========== ALL STACK TESTS COMPLETED ==========\n";

    return 0;
}
