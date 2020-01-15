#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> m1; //初始化m1
    map<string, int> m2; //初始化m2,或在此赋值m1给m2
    map<string, int> *m3; //初始化map指针
    m1["a"] = 1;
    m1["b"] = 2;
    m3 = &m1;   //将m1的地址赋值给m3
    m2 = m1;    //m1赋值给m3
    //输出原始数据
    cout<<"origin data ..."<<endl;
    cout<<"m1[a]:"<<m1["a"]<<"   m1[b]:"<<m1["b"]<<endl;
    cout<<"m2[a]:"<<m2["a"]<<"   m2[b]:"<<m2["b"]<<endl;
    cout<<"m3[a]:"<<(*m3)["a"]<<"   m3[b]:"<<(*m3)["b"]<<endl;

    //改变m2,不会改变m1的值
    m2["a"] = 3;
    m2["b"] = 5;
    cout<<"after change m2  ..."<<endl;
    cout<<"m1[a]:"<<m1["a"]<<"   m1[b]:"<<m1["b"]<<endl;
    cout<<"m2[a]:"<<m2["a"]<<"   m2[b]:"<<m2["b"]<<endl;
    //改变m3,会改变m1的值
    (*m3)["a"] = 10;
    (*m3)["b"] = 11;
    cout<<"after change m3  ..."<<endl;
    cout<<"m1[a]:"<<m1["a"]<<"   m1[b]:"<<m1["b"]<<endl;
    cout<<"m3[a]:"<<(*m3)["a"]<<"   m3[b]:"<<(*m3)["b"]<<endl;

    return 0;
}
