#include "robot_sim/robot_drive.hpp"
#include <cmath>

// THIS FUNCTION RUNS EVERY 50ms AFTER THE SIMULATION IS STARTED
void RobotDrive::update_pose()
{
    double dt = 0.05;
    t += dt;
    double mass = 1.0;
    
    double Fx=0;
    double Fy=0;
    double ax=Fx/mass;
    double ay=Fy/mass;
    vx += ax * dt;
    vy += ay * dt;
    x += vx * dt;
    y += vy * dt;
    if(vx != 0 || vy != 0){
     yaw = atan2(vy,vx);
}

    setPose(x, y, yaw); // USE THIS FUNCTION TO UPDATE THE POSE OF YOUR ROBOT.
}
