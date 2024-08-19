#include "Utility/WaitDelegate.h"

#include <chrono>
#include <cstdint>
#include <thread>

namespace utility
{
namespace
{

const std::chrono::milliseconds kSleepTime(500);

} // namespace

bool WaitDelegate::alive_ = true;

WaitDelegate::WaitDelegate()
{
    //
}

WaitDelegate::~WaitDelegate()
{
    //
}

void WaitDelegate::Algorithm()
{
    while (alive_)
    {
        std::this_thread::sleep_for(kSleepTime);
    }
}

void WaitDelegate::Stop()
{
    alive_ = false;
}

} // namespace utility