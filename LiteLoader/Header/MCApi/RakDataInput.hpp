// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BytesDataInput.hpp"
class RakDataInput : public BytesDataInput {
public:
    virtual ~RakDataInput();
    virtual bool readBytes(void*, unsigned __int64);
    virtual unsigned __int64 numBytesLeft();
};