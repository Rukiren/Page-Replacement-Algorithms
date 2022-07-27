# 頁面置換演算法

參考文章：https://iter01.com/608229.html

1. FIFO (First In First Out 先進先出)
    - 就...最早放進來的東西在記憶體滿了以後會被替換掉
    - ![](https://i.imgur.com/i2BANBJ.jpg)
    - 實作：直接使用 Cpp 中陣列實作。

3. OPT (最佳置換)
    - 替換最久未使用 or 未來出現最少的
    - ex:7，5，2，3，6，2，7，1，6，7，2，3，7，2，7。
    - ![](https://i.imgur.com/9vukXS8.jpg)
    > 因對於「未來出現最少」此概念目前想不到實作，因此暫不實作。

5. LRU (最久未使用)
    - 替換在記錄中最久沒有使用的資料
    - ![](https://i.imgur.com/LmX61S2.jpg)

7. LFU (最少使用)
    - 邏輯：過往使用次數最少，未來也不會常用
    - ![](https://i.imgur.com/YnN4vlz.jpg)
    -
