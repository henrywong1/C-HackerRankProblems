#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int>m;
    int size,type,grade = 0;
    string name = " ";
    cin >> size;
    for (int i = 0; i < size; i++){
        cin >> type >> name;
        if (type == 1){
            cin >> grade;
            m[name] += grade;
        } else if (type == 2){
            m.erase(name);
        } else if (type == 3){
           cout << m[name] << endl;
        }
    }
    return 0;
}
