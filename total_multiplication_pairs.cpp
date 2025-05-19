// "How many matrix multiplication operations are possible across all pairings, considering dimension matches?" // pairs eg :a1a2 , a2a3 . 

// m= total number of matrices 
// n = total number of elements in array 
// m = n-1
/////// T(m) = m(m-1) ; m >=1, if if all the matrices are of k*k order , ie [k , k , k , k .... ] , where m is the number of matrices , if there are n elements in the matrix , then m = n-1 . this is the maximum possible ways of multiplication pairs for m matrices . for any m number of matrix , number of ways of multiplication pairs of matrix is less or equal to tm . 

#include<iostream>
#include<vector>
using namespace std;

int MCM(vector<int> &v) {
    int n = v.size();          
    int total_pairs =0;

    for (int i = 1; i < n - 1; i++) {
        for (int j = i ; j < n - 1; j++) {
            if (v[i] == v[j]) total_pairs++;  // Forward dimension matches
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = i - 2; j >= 0; j--) {
            if (v[i] == v[j]) total_pairs++;  // Backward dimension matches
        }
    }

    return total_pairs;
}

int main () {
vector<int>v={1,2,3,2,4,3};
cout<<MCM(v);
return 0;
}