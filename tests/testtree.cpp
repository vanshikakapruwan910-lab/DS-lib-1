
#include <iostream>
#include "dslib/tree.h"

using namespace std;

int main()
{
    Tree t;
    int answer;

    cout << "\n========== TEST 1: BST INSERTION ==========\n";

    t.insertNode(50);
    t.insertNode(30);
    t.insertNode(70);
    t.insertNode(20);
    t.insertNode(40);
    t.insertNode(60);
    t.insertNode(80);
    t.insertNode(30);

    t.displayTree();

    cout << "\n========== TEST 2: TRAVERSALS ==========\n";

    t.inorder();
    t.preorder();
    t.postorder();
    t.BFS();
    t.DFS();

    cout << "\n========== TEST 3: COUNT OPERATIONS ==========\n";

    cout << "Total Nodes: " << t.countNodes() << endl;
    cout << "Leaf Nodes: " << t.countLeafNodes() << endl;
    cout << "Height: " << t.height() << endl;
    cout << "Nodes Having Siblings: "
         << t.countNodesWithSibling() << endl;
    cout << "Only Left Child Nodes: "
         << t.countOnlyLeftChild() << endl;

    cout << "\n========== TEST 4: HIGHEST VALUES ==========\n";

    if (t.findHighest(answer))
        cout << "Highest Value: " << answer << endl;

    if (t.findSecondHighest(answer))
        cout << "Second Highest Value: " << answer << endl;

    cout << "\n========== TEST 5: SEARCH ==========\n";

    t.searchNode(40);
    t.searchNode(100);

    cout << "\n========== TEST 6: COMPLETE TREE ==========\n";

    if (t.checkCompleteTree())
        cout << "Tree is Complete\n";
    else
        cout << "Tree is Not Complete\n";

    cout << "\n========== TEST 7: COMMON PARENT ==========\n";

    t.displayCommonParentNodes();

    cout << "\n========== TEST 8: DELETE NODE ==========\n";

    t.deleteNode(20);
    t.displayTree();

    cout << "\n========== TEST 9: DELETE SUBTREE ==========\n";

    t.deleteLeftSubtree(30);
    t.displayTree();

    cout << "\n========== TEST 10: DELETE LEAF NODES ==========\n";

    t.deleteLeafNodes();
    t.displayTree();

    cout << "\n========== TEST 11: SPANNING TREE ==========\n";

    t.convertTospan();

    cout << "\n========== TEST 12: DELETE COMPLETE BST ==========\n";

    t.deleteTree();
    t.displayTree();

    cout << "\n========== TEST 13: AVL TREE ==========\n";

    t.avlInsertNode(30);
    t.avlInsertNode(20);
    t.avlInsertNode(10);
    t.avlInsertNode(40);
    t.avlInsertNode(50);

    t.avlDisplayTree();
    t.avlInorder();

    cout << "AVL Height: " << t.avlHeight() << endl;

    t.avlDeleteTree();

    cout << "\n========== TEST 14: B-TREE ==========\n";

    t.bInsertNode(10);
    t.bInsertNode(20);
    t.bInsertNode(30);
    t.bInsertNode(40);
    t.bInsertNode(50);
    t.bInsertNode(60);
    t.bInsertNode(70);

    t.bDisplayTree();
    t.bInorder();

    cout << "B-Tree Height: " << t.bHeight() << endl;

    t.bDeleteTree();
    t.bDisplayTree();

    cout << "\n========== TEST 15: B+ TREE ==========\n";

    t.bPlusInsertNode(10);
    t.bPlusInsertNode(20);
    t.bPlusInsertNode(30);
    t.bPlusInsertNode(40);
    t.bPlusInsertNode(50);
    t.bPlusInsertNode(60);
    t.bPlusInsertNode(70);

    t.bPlusDisplayTree();
    t.bPlusDisplayLeaves();

    cout << "B+ Tree Height: " << t.bPlusHeight() << endl;

    t.bPlusDeleteTree();
    t.bPlusDisplayTree();

    cout << "\n========== ALL TREE TESTS COMPLETED ==========\n";

    return 0;
}
