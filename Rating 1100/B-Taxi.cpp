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
    int n;
    cin >> n;
 
    vi arr;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
 
        if(number != 4) arr.push_back(number);
        else if(number == 4) answer++;
    }
 
    if(arr.size() != 0){
        sort(arr.begin() , arr.end());
 
        bool checkReminder = true;
        while(arr.size() > 0 && checkReminder == true){
            if(arr.size() == 1){
                answer++;
                break;
            }
 
            if(arr[arr.size() - 1] == 3){
                for (int i = 0; i < arr.size(); i++)
                {
                    if(arr[0] == 1){
                        answer++;
                        arr.erase(arr.begin() , arr.begin() + 1);
                        arr.erase(arr.end() -1 , arr.end());
                        break;
                    }else{
                        answer++;
                        arr.erase(arr.end() - 1 , arr.end());
                        break;
                    }
                }
        
            }else if(arr[arr.size() - 1] == 2){
                int currentNumber = 2;
                for (int i = 0; i < arr.size() - 1; i++)
                {
                    if(arr[arr.size() - 2] == 2){
                        arr.erase(arr.end() - 2 , arr.end());
                        answer++;
                        currentNumber = 0;
                        break;
                    }else{
                        currentNumber++;
                        if(currentNumber == 4){
                            arr.erase(arr.begin() , arr.begin() + 2);
                            arr.erase(arr.end() - 1 , arr.end());
                            answer++;
                            currentNumber = 0;
                            break;
                        }  
                    }
                }
                
                if(currentNumber >= 2 && checkReminder == true){
                    answer++;
                    checkReminder = false;
                    break;
                }
 
            }else if(arr[arr.size() - 1] == 1){
                int currentNumber = 1;
                for (int i = 0; i < arr.size(); i++)
                {
                    currentNumber++;
                    if(currentNumber == 4){
                        answer++;
                        currentNumber = 0;
                        arr.erase(arr.begin() , arr.begin() + 4);
                        break;
                    }
                }
 
                if(currentNumber >= 1 && checkReminder == true ){
                    answer++;
                    checkReminder = false;
                    break;
                }
            }
        }
 
        cout << answer << endl;
    }else{
        cout << answer << endl;
    }
}    