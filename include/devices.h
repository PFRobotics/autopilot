#include "vex.h"
using namespace vex;

controller controller1 = controller();

// Drive Motors
motor motorFrontLeft = motor(PORT12, gearSetting::ratio18_1, true);
motor motorFrontRight = motor(PORT2, gearSetting::ratio18_1, false);
motor motorBackLeft = motor(PORT11, gearSetting::ratio18_1, true);
motor motorBackRight = motor(PORT1, gearSetting::ratio18_1, false);

// Vision
vision visonsSensor = vision(PORT3, 50);

// Range finder
sonar RangeFinderA = sonar(Brain.ThreeWirePort.A); 
