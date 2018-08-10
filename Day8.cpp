#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string,int> phoneBook;
    int entries = 0;
    cin >> entries;
    string name = " ";
    int phoneNum = 0;
    for (int i = 0; i < entries; i++){
        cin >> name >> phoneNum;
        phoneBook.insert(pair<string,int> (name,phoneNum));
    }

    while (cin >> name){
        if (phoneBook.find(name) == phoneBook.end()){
            cout << "Not found" << endl;
        }else {
            cout << name << "=" << phoneBook.at(name) << endl;
        }
    }
    return 0;
}
