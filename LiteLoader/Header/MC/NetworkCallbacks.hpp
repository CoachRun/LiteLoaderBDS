// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NetworkCallbacksAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetworkCallbacks {
#include "Extra/NetworkCallbacksAPI.hpp"

public:
    MCAPI void SetBroadcastRequestCallback(class std::function<bool(void*, int*)> const&);
    MCAPI void SetBroadcastResponseCallback(class std::function<void(struct NetherNet::NetworkID const&, void const*, int)> const&);
};