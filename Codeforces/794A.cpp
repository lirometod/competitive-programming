#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REP2(i,a,b) for (int i = a; i <= b; ++i)
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fill(a, v) memset(a, v, sizeof a)
typedef long long ll;
const int SIZE = 1e9 + 10;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int n;
    cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; ++i)
    {
        int foo;
        cin >> foo;
        if (foo > b && foo < c)
        {
            ++ans;
        }
    }
    cout << ans;
    return 0;
}
