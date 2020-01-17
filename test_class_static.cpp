#include <iostream>
#include <unordered_map>
using namespace std;

class Box
{
    public:
        Box();
        static int niu;//声明静态变量niu 
};


int Box::niu = 0;//调用之前必须先在类外实例化
Box::Box(){
    niu ++;//每初始化一个类，niu = niu + 1
    if(niu > 5){//当niu大于5时，重置为0
        niu = 0;
    }
    cout<<"niu is:"<<niu<<endl;
}
int main()
{
    for(int i=0; i<10; i++){
        Box a;
    }
    Box a;
    Box b;
    Box c;
}
