// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/HttpHeadersAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HttpHeaders {
#include "Extra/HttpHeadersAPI.hpp"

public:
    MCAPI void clear();
    MCAPI bool getHeader(std::string const&, std::string&) const;
    MCAPI enum HttpHeaders::ParseState parse(class RakNet::BitStream&);
};