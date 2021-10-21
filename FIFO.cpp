#include <bits/stdc++.h>
using namespace std;

int in[3];

int main(){
    int n;
    cin >> n;   // 總共有多少數字要存入
    int time = 0;
    for (int i=0;i<n;i++){
      if (time == 3){
          time = 0;   // 要存入哪個記憶體
      }
      int temp;
      cin >> temp;
      in[time] = temp;
      time++;   // 變成下個記憶體
    }
    // 此處只有寫邏輯，沒有寫輸出。
}
