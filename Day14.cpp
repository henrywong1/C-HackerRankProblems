#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
// Add your code here
  Difference(vector<int> e){
      elements = e;
  };
  void computeDifference(){
      sort(elements.begin(),elements.end());
      int max = elements.at(elements.size()-1);
      int least = elements.at(0);
      maximumDifference = max - least;
  };

int main() {
      int N;
      cin >> N;

      vector<int> a;

      for (int i = 0; i < N; i++) {
          int e;
          cin >> e;

          a.push_back(e);
      }

      Difference d(a);

      d.computeDifference();

      cout << d.maximumDifference;

      return 0;
  }
