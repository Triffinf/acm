#include <cstdio>
#include <iostream>
using namespace std;
int n;
char ch[205];//存储棋子的状态
void swap(char &a, char &b)//交换函数
{
    char t = a;
    a = b;
    b = t;
}
void output(){//输出
    for (int i = 0; i < 2 * n + 2; i++)
        putchar(ch[i]);
    putchar('\n');
}
void movechess(int start, int end)
{//移动棋子
    swap(ch[start], ch[end]);
    swap(ch[start + 1], ch[end + 1]);
    output();
}
string out[4] = {"ooo*o**--*", "o--*o**oo*", "o*o*o*--o*", "--o*o*o*o*"};
//打表qwq
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        ch[i] = 'o';
    for (int i = n; i < 2 * n; i++)
        ch[i] = '*';
    ch[2 * n] = '-';
    ch[2 * n + 1] = '-';
  
    output();
    int len = n;
  
    while (true)
    {
     
        len--;
        if (len == 3)
     
            break;
        movechess(len, 2 * len);
      
    }
    string ss;
    for (int i = 0; i < n - 4; i++)
        ss += "o*";
    for (int i = 0; i < 4; i++)
        cout << out[i] << ss << endl;
}