// Author: _nhathyy_
// Problem: Phần tử phân biệt
// Memory Limit: null
// Time Limit: null




/* Topic:
    Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có 
    bao nhiêu phần tử phân biệt? 
    Chú ý giải bài này với 3 cách : Sử dụng set, map, sắp xếp.
    
    Input Format

    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].

    Constraints

    1≤ N ≤ 10^5; -10^9 ≤ A[i] ≤ 10^9

    Output Format

    In ra số lượng phần tử khác nhau trong mảng.

    Sample Input 0

    7
    0 8 10 0 8 3 -5 
    Sample Output 0

    5

*/

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FORR(i, a, b) for (int i = (a); i < (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define FODR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define endl '\n'
#define TASK "CODE"

using namespace std;

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    
    /*
    Dùng set
    set <int> s;

    int n, digits;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> digits;
        s.insert(digits);
    }

    cout << s.size();
    */
    

    /*
    Dùng map
    map <int, int> s;

    int n, digits;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> digits;
        s[digits]++;
    }

    cout << s.size();
    */

    /*
    Sắp xếp

    int n, digits;

    cin >> n;

    int arr[n];

    REP(i, n) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 1;

    FORR(i, 1, n) {
        if(arr[i] != arr[i - 1]) {
            count++;
        }
    }


    cout << count;
    */
    cerr << TIME;
    return 0;
}
