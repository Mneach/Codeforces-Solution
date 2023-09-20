#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define vll		  	   vector <ll>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

int totalNumber = 10000000;
vll arrSieve(totalNumber + 1, 1);

void sieve(){
	arrSieve[0] = 0;
	arrSieve[1] = 0;

	for(ll i = 2; i * i <= totalNumber; i++){
		if(arrSieve[i] == 0) continue;

		for(ll j = i * i; j <= totalNumber; j += i){
			arrSieve[j] = 0;
		}
	}
}

ll maxLL(ll a , ll b){
	if(a > b) return a;
	else return b;
}

ll lcmLL(ll a , ll b){
	ll result = (a * b) / gcd(a, b);
	return result;
}

void solve() {

	ll n;
	cin >> n;

	if (n <= 2) {
		cout << n << endl;
	}else{
		ll answer = 0;
		if(n & 1){
			answer = n * (n - 1) * (n - 2);
		}else{
			answer = (n - 1) * (n - 2) * (n - 3);

			for(ll i = n - 1; i >= 1 && n * i * (i - 1) > answer; i--){
				for(ll j = i - 1; j >= 1 && n * i * j > answer; j--){
					answer = maxLL(answer, lcmLL(n, lcmLL(i, j)));
				}
			}
		}

		cout << answer << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	sieve();
	int t = 1;
	// cin >> t;
	while (t--) solve();

	return 0;
}
