#include <iostream>
#include <unordered_map>
using namespace std;

class Box
{
    public:
        Box();
        static int niu;
};


int Box::niu = 0;
Box::Box(){
    niu ++;
    if(niu > 5){
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
