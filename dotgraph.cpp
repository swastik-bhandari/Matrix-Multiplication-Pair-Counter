#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Graph {
    vector<pair<int, int>> matrices;
    vector<pair<pair<int, int>, pair<int, int>>> Edges;
    int n;

public:
    Graph() {}

    Graph(const vector<int>& v) {
        n = v.size();

        // Store matrix dimensions
        for (int i = 1; i < v.size(); i++) {
            matrices.emplace_back(v[i - 1], v[i]);
        }

        // Create edges if shared dimension exists
           for (int i = 1; i < n - 1; i++) {
        for (int j = i ; j < n - 1; j++) {
            if (v[i] == v[j]) {
                Edges.push_back(make_pair(make_pair(v[i-1],v[i]),make_pair(v[j] ,v[j+1])));
            } 
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 2; j >= 0; j--) {
            if (v[i] == v[j]) {
            Edges.push_back(make_pair(make_pair(v[i-1],v[i]),make_pair(v[j] ,v[j+1])));
            }
        }
    }

    }

    void printMatrices() const {
        cout << "Matrices:\n";
        for (const auto& m : matrices) {
            cout << "(" << m.first << "," << m.second << ")\n";
        }
    }

    void printEdges() const {
        cout << "\nEdges:\n";
        for (const auto& e : Edges) {
            cout << "(" << e.first.first << "," << e.first.second << ") --> (" 
                 << e.second.first << "," << e.second.second << ")\n";
        }
    }

    void writeDotFile(const string& filename) const {
        ofstream fout(filename);
        fout << "digraph MatrixChain {\n";

        for (const auto& m : matrices) {
            fout << "\"" << m.first << "," << m.second << "\";\n";
        }

        for (const auto& e : Edges) {
            fout << "\"" << e.first.first << "," << e.first.second << "\""
                 << " -> "
                 << "\"" << e.second.first << "," << e.second.second << "\""
                 << ";\n";
        }

        fout << "}\n";
        fout.close();
        cout << "\nDOT file written to " << filename << endl;
    }
};

int main() {
   // vector<int> dims = {1, 2, 3, 2, 4, 3}; // Dimensions of matrices
      vector<int> dims = {5,3,6,3,5};

    Graph g(dims);
    g.printMatrices();
    g.printEdges();
    g.writeDotFile("matrix_graph.dot");

    return 0;
}
