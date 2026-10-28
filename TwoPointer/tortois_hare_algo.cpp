/* **** ***** ***** IN THE NAME OF ALLAH ****** ****** ***** */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
#define PB push_back
#define F first
#define S second
#define endl "\n"
#define mem(a,b) memset( a, b, sizeof(a) );
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define MOD 1000000007
int find_duplicate(int *ara, int n){

    int slow = ara[0];
    int fast = ara[0];
    //phase 1, meeting point
    do{
        slow = ara[slow];
        fast = ara[ara[fast]];

    }
    while(slow !=fast);

    //phase 2;

    slow = ara[0];

    while(slow != fast){
        slow = ara[slow];
        fast = ara[fast];
    }

    return slow;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);


   int n;
   cin >> n;

   int ara[n];

   for(int i = 0; i<n; i++)cin >> ara[i];

   int ans = find_duplicate(ara,n);

   cout << ans << endl;
    return 0;
}


