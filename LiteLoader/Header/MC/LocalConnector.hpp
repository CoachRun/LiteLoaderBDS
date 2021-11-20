// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LocalConnectorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LocalConnector {
#include "Extra/LocalConnectorAPI.hpp"
public:
    virtual ~LocalConnector();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual class Social::GameConnectionInfo const& getConnectedGameInfo();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();

public:
    MCAPI void disconnect();
    MCAPI void runEvents();

private:
    MCAPI static class LocalConnectivitySystem sLocalConnectivitySystem;
};