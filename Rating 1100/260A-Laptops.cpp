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

    int n;
    cin >> n;

    vpi arr;
    for (int i = 0; i < n; i++)
    {
        int a , b;
        cin >> a >> b;

        arr.push_back(make_pair(a , b));
    }
        
    sort(arr.begin(), arr.end(), [](const pair<int, int>& x, const pair<int , int>& y){
        return x.first < y.first;
    });

    int answer = true;
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i].second > arr[i + 1].second) answer = false;
    }
    
    if(answer) cout << "Poor Alex" << endl;
    else cout << "Happy Alex" << endl;

    return 0;
}
