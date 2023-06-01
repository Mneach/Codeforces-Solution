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

    int n , m;
    cin >> n >> m;

    vi arr(n);

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        if(number % m == 0) arr[i] = number / m;
        else arr[i] = (number / m) + 1;
    }

    int current = 0;
    int answer = n;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= current){
            current = arr[i];
            answer = i + 1;
        }
    }
    
    cout << answer << endl;

    return 0;
}
