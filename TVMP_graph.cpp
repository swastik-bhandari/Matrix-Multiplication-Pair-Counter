#include<iostream>
#include<vector>
using namespace std;

class Graph {
    vector<pair<int,int>>matrices;
    vector<pair<pair<int,int>,pair<int,int>>>Edges;
    int n;
    public:
    Graph() {}
    Graph(vector<int> &v) {
        n = v.size();
        for(int i=1; i<v.size() ; i++) {
            matrices.push_back(make_pair(v[i-1] , v[i]));
        }

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
    public:
    void printPairs(void) {
        cout<<"Edges:"<<endl;
        for(auto & i : Edges) {
            cout<<"("<<i.first.first<<","<<i.first.second<<")-->("<<i.second.first<<","<<i.second.second<<")"<<endl;
        }
    }

    void printMatrices(void) {
        cout<<"Matrices:"<<endl;
        for(auto & i : matrices) {
            cout<<"("<<i.first<<","<<i.second<<")"<<endl;
        }
    }
};

int main () {
vector<int>v={1,2,3,2,4,3};
// cout<<TVMP(v);
Graph g(v);
g.printMatrices();
g.printPairs();
return 0;
}