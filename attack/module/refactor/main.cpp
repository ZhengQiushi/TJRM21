#include"ThreadControl.hpp"
#include<thread>

int main()
{
    ThreadControl ThreadController;
    std::thread auto_aim(&ThreadControl::AutoAim, &ThreadController);
    std::thread communicate(&ThreadControl::Communicate, &ThreadController);
    
    communicate.detach();
    auto_aim.join();
    
    return 0;
}
