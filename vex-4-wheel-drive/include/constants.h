#pragma once

#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

#include <cstdint>  // std::int8_t, std::int32_t, etc.

// Note - const is to c++ as final is to java
namespace DriveConstants {
    const std::int8_t kTopLeftPort  = 0;
    const std::int8_t kTopRightPort = 1;
    const std::int8_t kBotLeftPort  = 2;
    const std::int8_t kBotRightPort = 3;
}


#endif