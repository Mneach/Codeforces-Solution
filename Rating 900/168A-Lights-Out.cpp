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
    
    int arrInput[3][3];
    int arrOutput[3][3];
    int moveX[] = {0,-1,0,1, 0};
    int moveY[] = {-1,0,1,0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arrInput[i][j];
            arrOutput[i][j] = 1;            
        }
    }    
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(arrInput[i][j] == 0) continue;

            for(int k = 0; k < 5; k++){
                int currentX = moveX[k] + i;
                int currentY = moveY[k] + j;

                if(currentX < 0 || currentY < 0 || currentX > 2 || currentY > 2) continue;

                arrOutput[currentX][currentY] += arrInput[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrOutput[i][j] % 2;
        }
        cout << endl;
    }
    

    return 0;
}    
