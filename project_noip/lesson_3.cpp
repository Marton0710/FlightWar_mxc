#include <iostream>
using namespace std;


/*
&->取地址
*->取内容
 */


int lesson3_main()
{
    int a = 0x3132;
    char *p = nullptr;
    p = (char*) & a;
    cout << *p << endl;
    cout << *(++p) << endl;
    cout << "--------------" << endl;

    int array[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            for(int k = 0; k < 2; ++k)
                cout << array[i][j][k] << endl;
    cout << "--------------" << endl;

    int *b = (int*) & a;  //将数字转为地址，int为地址类型
    int c = *b;
    cout << *b << "\t" << c << endl;
    return 0;
}
