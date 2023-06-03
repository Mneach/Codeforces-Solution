#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpi;

#define checkAnswer(x)  cout << "Answer : " << x << endl;
#define all(x) x.begin(), x.end()

ull maxULL(ull a , ull b){
    return (a > b) ? a : b;
}

ull minULL(ull a , ull b){
    return (a > b) ? b : a;
}

ll maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

ll minLL(ll a , ll b){
    return (a > b) ? b : a;
}

bool isPrime(int number){

    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0) return false;
    }

    return true;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string s , t;
        cin >> s >> t;

        if(s == t) {
            cout << s << endl;
        }
        else{
            int LCM = lcm(s.length() , t.length());
            int lengthS = s.length();
            int lengthT = t.length();

            for (int i = 0; i < LCM - lengthS; i++)
            {
                s += s[i % s.length()];
            }
            
            for (int i = 0; i < LCM - lengthT; i++)
            {
                t += t[i % t.length()];
            }

            if(s == t) cout << s << endl;
            else cout << -1 << endl;
        }
    }
    

    return 0;
}
