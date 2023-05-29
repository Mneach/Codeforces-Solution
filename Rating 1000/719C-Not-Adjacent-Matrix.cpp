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

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int number;
        cin >> number;

        if(number == 1) cout << 1 << endl;
        else if(number == 2) cout << -1 << endl;
        else{
            int arr[number][number];

            int currentNumber = 1;
            for (int k = 0; k < number; k++)
            {
                for (int l = 0; l < number; l++)
                {
                    arr[k][l] = currentNumber;
                    currentNumber++;
                }
                
            }
            
            for (int k = 0; k < number - 1; k++)
            {
                for (int l = 0; l < number; l++)
                {
                    if(l % 2 == 0){
                        swap(arr[k][l] , arr[k + 1][l]);                     
                    }
                }
            }

            for (int k = 0; k < number; k++)
            {
                for (int l = 0; l < number; l++)
                {
                    cout << arr[k][l] << " ";
                }
                cout << endl;
            }           
        }
    }
        

    return 0;
}
