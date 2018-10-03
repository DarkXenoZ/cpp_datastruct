#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include<set>


// Your code here

#include <set>
#include<algorithm>
using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        n=3;
        g = new set<int>[n];
    }

    SparseGraph(int n_in) {
        // Your code here
        n=n_in;
        g = new set<int>[n];
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        n = G.n;
        g = new set<int>[n];
        for(int i=0;i<n;i++)g[i]=G.g[i];
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

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph temp(n);
        for(int i=0;i<n;i++)
            for(auto x : g[i])temp.g[x].insert(i);
        return temp;
    }

protected:
    // Your code here
    int n;
    set<int>* g;
};
#endif // __SPARSE_GRAPH_H__

