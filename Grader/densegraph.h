#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <set>
#include<algorithm>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n=3;
        g = new set<int>[n];
    }

    DenseGraph(int n_in) {
        // Your code here
        n=n_in;
        g = new set<int>[n];
    }

    DenseGraph(const DenseGraph& G) {
        n = G.n;
        g = new set<int>[n];
        for(int i=0;i<n;i++)g[i]=G.g[i];
        // Your code here
    }

    void AddEdge(int a, int b) {
        // Your code here
        g[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        g[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return g[a].find(b)!=g[a].end();
    }

    DenseGraph Transpose() const {
        DenseGraph temp(n);
        for(int i=0;i<n;i++)
            for(auto x : g[i])temp.g[x].insert(i);
        return temp;
        // Your code here
    }

protected:
    int n;
    set<int>* g;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
