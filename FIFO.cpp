/*此內容由 Ruki 白兔所寫，若需使用請標注來源，若無法標注來源，請先寄 mail 告知。
mail : houpig1@gmail.com
標題請提到此專案名稱。
*/

#include <bits/stdc++.h>
using namespace std;

int in[3]; // 記憶體大小

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
