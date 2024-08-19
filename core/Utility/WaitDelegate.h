#ifndef UTILITY_WAITDELEGATE_H
#define UTILITY_WAITDELEGATE_H

namespace utility
{

class WaitDelegate
{
public:
    WaitDelegate();
    ~WaitDelegate();
    static void Algorithm();
    static void Stop();

private:
    static bool alive_;
};

} // namespace utility

#endif // UTILITY_WAITDELEGATE_H