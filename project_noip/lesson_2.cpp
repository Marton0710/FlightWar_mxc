#include <iostream>
#include <vector>
using namespace std;

/*
template<typename T> 模板使用  或者是template<class T>
typedef 类型别名
教程来自：https://www.runoob.com/w3cnote/cpp-vector-container-analysis.html
 */

int lesson2_main()
{
    vector<int> v;
    //插入--insert/push_back
    v.insert(v.end(), 1);  //end为末尾，begin为开头
    v.push_back(2);

    //查询--at
    int a = v.at(0);  //获取下标的数据，也可使用begin或end
    cout << a << endl;

    //大小--size/empty
    cout << v.size() << endl;   //size获取大小
    cout << v.empty() << endl;  //empty判断是否为空

    //删除--pop_back/erase/clear
    v.pop_back();  //删除最后一个数据
    v.clear();     //清空数据
    return 0;
}
