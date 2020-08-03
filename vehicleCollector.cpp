#include "vehicleCollector.h"
#include <vector>
#include <iostream>

inventory vehicleParamTester(telematics *st_vehicle_input)
{
 inventory st_vehicle_output;
 
 switch(st_vehicle_input->measure_type)
 {
  case motor_temp:
    st_vehicle_output->motor_temp = st_vehicle_input->measurement;
    break;
    
  default :
  break;
 }
 
return st_vehicle_output;
 
}
