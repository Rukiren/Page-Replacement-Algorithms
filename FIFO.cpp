#include <bits/stdc++.h>
using namespace std;

int in[3];

int main(){
    int n;
    cin >> n;
    int time = 0;
    for (int i=0;i<n;i++){
      if (n == 3){
        n = 0;
      }
      int temp;
      cin >> temp;
      in[n] = temp;
      n++;
    }
}
