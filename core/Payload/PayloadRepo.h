#ifndef PAYLOAD_PAYLOAD_H
#define PAYLOAD_PAYLOAD_H

#include <mutex>
#include <unordered_map>

#include "Payload/KeyManager.h"

namespace payload
{

template<typename T>
class PayloadRepo
{
public:
    static manager::KeyType Insert(const T& t)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        manager::KeyType k = keyMan_.ReserveKey();
        map_.insert({k, t});
        return k;
    }

    static bool Get(manager::KeyType& k, T& t)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        const auto it = map_.find(k);
        if (it == map_.end())
        {
            return false;
        }
        keyMan_.ReleaseKey(k);
        t = it.second;
        return true;
    }

private:
    static std::mutex mutex_;
    static manager::KeyManager keyMan_;
    static std::unordered_map<manager::KeyType, T> map_;
};

} // namespace

#endif // PAYLOAD_PAYLOAD_H