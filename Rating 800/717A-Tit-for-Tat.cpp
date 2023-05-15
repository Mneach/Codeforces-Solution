#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n , k;

        cin >> n >> k;

        vi arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int currentIndex = 0;
        for (int j = 0; j < k; j++)
        {
            while(arr[currentIndex] == 0 && currentIndex < n) currentIndex++;
            if(arr[currentIndex] != 0 && currentIndex < n){
                arr[currentIndex]--;
                arr[n - 1]++;
            }
        }
                
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}    
