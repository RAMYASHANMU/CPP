// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void utility(int n);

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        utility(n);
        cout << endl;
    }

    return 0;
}// } Driver Code Ends


// User function Template for C++
/*You are given a number n, you need to print its multiplication table in a single line.
*/
void utility(int n) {
    int i;
    for (i=1;i<=10;i++) cout << i* n << " ";
}
