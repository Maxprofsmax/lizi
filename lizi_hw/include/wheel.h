/* Author: Elhay Rauper*/


#ifndef LIZI_HW_WHEEL_H
#define LIZI_HW_WHEEL_H

struct wheel
{
    std::string joint_name;
    double position = 0;
    double last_position = 0;
    double velocity = 0;
    double effort = 0;
    double command_velocity = 0;
    double command_effort = 0;
    double vel_lpf_alpha = 0;
};

#endif //LIZI_HW_WHEEL_H
