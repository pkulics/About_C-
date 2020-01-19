#include <iostream>
//#include <sys/time.h>
#include <ctime>

using namespace std;
/**
class Timer{
    public:
        Timer(){
            Reset();
        }
        void Reset(){
            gettimeofday(&start_time, 0);
        }
        int CurrentTime(){
            struct timeval cur_time;
            gettimeofday(&cur_time, 0);
            return 1000000*((cur_time.tv_sec - start_time.tv_sec) + cur_time.tv_usec - start_time.tv_usec);
            //return cur_time.tv_sec * 1000 + cur_time.tv_usec / 1000;
        }
    private:
        struct timeval start_time;
};
**/


int main()
{
    //Timer timer = Timer();
    //int start = timer.CurrentTime();
    //std::cout<<start<<std::endl;
    time_t start = time(0);
    //int end = timer.CurrentTime();
    for(int i; i <10; i++){
        std::cout<<"我怎么这么好看...";
    }
    time_t end=time(0);
    int test = time(0);
    //std::cout<<end<<std::endl;
    std::cout<<"end:"<<end<<"start:"<<start<<"test:"<<test<<std::endl;
    std::cout<<"3/2:"<<3%2<<"   4/2:"<<4%2<<std::endl;

    for(int i = 0; i < 10; i++)
    {
        //srand((unsigned)time(i));//采用系统当前时钟作为种子
        //srand((unsigned)i);//采用i作为种子
        int num_rand = rand();
        cout<<num_rand<<endl;
    }
    return 0;
}

