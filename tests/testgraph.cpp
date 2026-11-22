#include<stdio.h>
#include "dslib/graph.h"

int main()
{
    UndirectedGraph g;

    cout << "\n===== GRAPH TESTING =====\n";

    cout << "\nTC01: Add Vertices\n";
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(5);

    cout << "\nTC02: Add Edges\n";
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    cout << "\nTC03: Display Graph\n";
    g.displayGraph();

    cout << "\nTC04: Search Existing Vertex\n";
    g.searchVertex(2);

    cout << "\nTC05: Search Non-existing Vertex\n";
    g.searchVertex(10);

    cout << "\nTC06: Find Degree\n";
    g.findDegree(4);

    cout << "\nTC07: BFS Traversal\n";
    g.BFS(1);

    cout << "\nTC08: DFS Traversal\n";
    g.DFS(1);

    cout << "\nTC09: Check Connectivity\n";
    g.checkConnectivity();

    cout << "\nTC10: Find Path\n";
    g.findPath(1, 5);

    cout << "\nTC11: Delete Edge\n";
    g.deleteEdge(1, 2);
    g.displayGraph();

    cout << "\nTC12: Delete Vertex\n";
    g.deleteVertex(5);
    g.displayGraph();

    cout << "\nTC13: Add Weighted Edges\n";
    g.addWeightedEdge(1, 2, 10);
    g.addWeightedEdge(2, 3, 20);
    g.addWeightedEdge(3, 4, 15);

    cout << "\nTC14: Minimum Spanning Tree\n";
    vector<tuple<int, int, int>> mst =
        g.minimumSpanningTree();

    for (auto edge : mst)
    {
        cout << get<0>(edge) << " - "
             << get<1>(edge) << " : "
             << get<2>(edge) << endl;
    }

    cout << "\n===== TESTING COMPLETED =====\n";

    return 0;
}