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
 
		vector<int> arr;
 
		int maximumNumber = -1;
		int maximumNumberIndex = -1;
		for (int i = 0; i < n; i++)
		{
			int number;
			cin >> number;
 
			if(maximumNumber < number){
				maximumNumber = number;
			}
			arr.push_back(number);
		}
		
		bool answer = false;
		int lengthArr = arr.size(); 
 
		for (int i = 0; i < lengthArr; i++)
		{
			if(arr[i] == maximumNumber){
				if(i == 0){
					if(maximumNumber > arr[i + 1]){
						answer = true;
						maximumNumberIndex = i;
					}
				}else if(i == lengthArr - 1){
					if(maximumNumber > arr[i - 1]){
						answer = true;
						maximumNumberIndex = i;
					}
				}else{
					if(maximumNumber > arr[i + 1] || maximumNumber > arr[i - 1]){
						answer = true;
						maximumNumberIndex = i;
					}
				}
			}
			if(answer)break;
		}
		
		if(answer) cout << maximumNumberIndex + 1 << endl;
		else cout << -1 << endl;
	}
}    