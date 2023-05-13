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
        int n;
        cin >> n;
        vi arr(n);

        int totalNumber2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 2) totalNumber2++;
        }

        int totalLeft = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 2){
                totalNumber2--;
                totalLeft++;
            }
            
            if(totalNumber2 == totalLeft){
                k = i + 1;
                break;
            }
        }
        
        if(totalNumber2 == totalLeft) cout << k << endl;
        else cout << -1 << endl;
    }
    

    return 0;
}    
