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

long long calculate(int x){
    if(x <= 0) return 0;

    long long result = 0;

    for(int i = 1; i <= x; i++){
        result += i;
    }

    return result;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int number;

    cin >> number;

    string s;
    cin >> s;

    string answer(s.length(), 1);

    if(number <= 2 ) {
        cout << s << endl;
        return 0;
    }

    if(s.length() % 2 == 0){
        int middle = s.length() / 2;

        int first = middle - 1;
        int second = middle;

        int currnetIndexS = 0;
        for(int i = second; i < s.length(); i++){
            answer[i] = s[currnetIndexS + 1];
            answer[first] = s[currnetIndexS];
            first--;
            currnetIndexS += 2;
        }
    }else{
        int middle = s.length() / 2;
        int first = middle - 1;
        int second = middle + 1;

        answer[middle] = s[0];
        int currnetIndexS = 1;
        for(int i = second; i < s.length(); i++){
            answer[i] = s[currnetIndexS + 1];
            answer[first] = s[currnetIndexS];
            first--;
            currnetIndexS += 2;
        }
    }

    cout << answer << endl;
    
    
    return 0;
}
