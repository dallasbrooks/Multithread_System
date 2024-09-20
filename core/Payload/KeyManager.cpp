#include "Payload/KeyManager.h"

namespace manager
{

std::mutex KeyManager::mutex_;
KeyType KeyManager::keyCount_ = 0;
std::queue<KeyType> KeyManager::keys_;

KeyType KeyManager::ReserveKey()
{
    std::lock_guard<std::mutex> lock(mutex_);
    KeyType k = 0;
    if (keys_.size())
    {
        k = keys_.front();
        keys_.pop();
    }
    else
    {
        k = keyCount_++;
    }
    return k;
}

void KeyManager::ReleaseKey(const KeyType& k)
{
    std::lock_guard<std::mutex> lock(mutex_);
    keys_.push(k);
}

} // namespace manager