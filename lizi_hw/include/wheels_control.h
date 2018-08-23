//
// Created by sub on 8/22/18.
//

#ifndef LIZI_HW_PID_CONTROL_H
#define LIZI_HW_PID_CONTROL_H

#include <control_toolbox/pid.h>
#include "wheel.h"

// This class takes 4 wheels velocity commands from diff_drive_controller,
// and output effort command for each one, so it can be sent to RicBoard

class WheelsControl
{
private:

    std::vector<wheel*> wheels_;

    std::vector<control_toolbox::Pid> pids_;

    ros::Time start_time_;

public:
    void init(ros::NodeHandle &nh, std::vector<wheel*> & wheels);

    void update(const ros::Duration& dt);

};


#endif //LIZI_HW_PID_CONTROL_H
