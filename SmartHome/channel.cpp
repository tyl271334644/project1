#include <channel.h>

Channel* Channel::inst = nullptr;
std::mutex Channel::lock;
Channel::CGarbo Channel::cg;
