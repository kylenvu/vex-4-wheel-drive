#pragma once

#ifndef _SUBSYSTEMS_DRIVEBASE_H_
#define _SUBSYSTEMS_DRIVEBASE_H_

#include <cstdint>  // std::int8_t, std::int32_t, etc.

#include "api.h"    // pros library

class Drivebase {
 public:
    Drivebase(std::int8_t topLeftPort,
              std::int8_t topRightPort,
              std::int8_t botLeftPort,
              std::int8_t botRightPort);
    void ArcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisTurn);
 private:
    // By default, if no value is provided for an object, then
    // c++ will call the default constructor for you
    pros::Motor m_TopLeftMotor; // ISSUE: pros::Motor has no default constructor
    pros::Motor m_BotLeftMotor;

    pros::Motor m_TopRightMotor;
    pros::Motor m_BotRightMotor;
};



#endif