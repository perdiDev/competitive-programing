#include <bits/stdc++.h> 
#include <deque>
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    ll t, nilai;
    string opr;
    deque<int> dq;
    cin >> t;
    while(t--) {
        cin >> opr;
        if(opr=="push_back") {
            cin >> nilai;
            dq.push_back(nilai);
        }
        if(opr=="push_front") {
            cin >> nilai;
            dq.push_front(nilai);
        }
        if(opr=="pop_back" && (!dq.empty())) {
            // cout << dq.back() << "\n";
            dq.pop_back();
        }
        if(opr=="pop_front" && (!dq.empty())) {
            // cout << dq.front() << "\n";
            dq.pop_front();
        }
    }
    for(auto x: dq) {
        cout << x << "\n";
    }

    return 0;
}