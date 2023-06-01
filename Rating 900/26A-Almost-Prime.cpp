#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

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

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 6; i <= n; i++)
    {
        int totalPrime = 0;
        for (int j = 2; j <= i; j++)
        {
            if(i % j == 0) totalPrime += isPrime(j);
        }
        
        if(totalPrime == 2) answer++;
    }
    
    cout << answer << endl;
    
    return 0;
}
