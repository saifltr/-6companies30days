
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<long long> q;
    	q.insert(1);
    	long long f;
        while(n--){
            auto it = q.begin();
            f=*it;
            q.erase(it);
            q.insert(f*2);
            q.insert(f*3);
            q.insert(f*5);
        }
        return f;
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
