#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;

#define checkAnswer(x)  cout << "Answer : " << x << endl;

ll maxLL(ll a , ll b){
    return (a > b) ? a : b;
}

int main()
{

    int n , m;
    cin >> n >> m;

    vector<vector<string>> vvs(m, vector<string>(2));

    for (int i = 0; i < m; i++)
    {
        cin >> vvs[i][0] >> vvs[i][1];
    }
 
    vs answer;

    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;

        for (int j = 0; j < m; j++)
        {
            if(vvs[j][0] == c || vvs[j][1] == c){
                if(vvs[j][0].length() > vvs[j][1].length()){
                    answer.push_back(vvs[j][1]);
                }else if(vvs[j][0].length() < vvs[j][1].length()){
                    answer.push_back(vvs[j][0]);
                }else{
                    answer.push_back(vvs[j][0]);
                }
            }
        }
    
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }
    
    
    return 0;
}    
