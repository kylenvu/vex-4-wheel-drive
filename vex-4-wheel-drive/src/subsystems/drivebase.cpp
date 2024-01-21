#include "subsystems/drivebase.h"

// Example for the below constructor
/**
Point {
 public:
    Point(int x, int y);
 private:
    int _x;
    int _y;
};

Point::Point(int x, int y) : _x{x}, _y{y} {}

In general...
Constructor(params) : initialize values {
    constructor body
}
*/
// Point::Point(int x, int y) : 

Drivebase::Drivebase(std::int8_t topLeftPort,
                     std::int8_t topRightPort,
                     std::int8_t botLeftPort,
                     std::int8_t botRightPort)
    : m_TopLeftMotor{topLeftPort},
      m_TopRightMotor{topRightPort},
      m_BotLeftMotor{botLeftPort, true},
      m_BotRightMotor{botRightPort, true} {}


// Java equivalent - public void ArcadeDrive(int, int)
void Drivebase::ArcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisTurn) {
    std::int32_t left  = xAxisSpeed + zAxisTurn;
    std::int32_t right = xAxisSpeed - zAxisTurn;
    m_TopLeftMotor.move(left);
    m_BotLeftMotor.move(left);

    m_TopRightMotor.move(right);
    m_BotRightMotor.move(right);
}