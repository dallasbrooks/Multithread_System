#ifndef PAYLOAD_KEYMANAGER_H
#define PAYLOAD_KEYMANAGER_H

#include <cstdint>
#include <mutex>
#include <queue>

namespace manager
{

using KeyType = uint32_t;

class KeyManager
{
public:
    KeyType ReserveKey();
    void ReleaseKey(const KeyType& k);

private:
    static std::mutex mutex_;
    static KeyType keyCount_;
    static std::queue<KeyType> keys_;
};

} // namespace manager

#endif // PAYLOAD_KEYMANAGER_H