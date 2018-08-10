#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main()
{
    int n;
    cin >> n;
    int remainder = 0;
    vector<int> arr;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n > 0){
        remainder = n % 2;
         n = n / 2;
        // cout << "N: " << n << endl;
        // cout << remainder << endl;
        arr.push_back(remainder);
    }
    int consecutive = 0;
    int highest = 0;
    for (int i = arr.size() - 1; i >= 0; i--){
       if (arr.at(i) == 1){
           consecutive++;
           highest = consecutive > highest ? consecutive : highest;
       }else{
           consecutive = 0;
       }
    }
    cout << highest;
    return 0;
}
