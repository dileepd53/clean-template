#include "vehicleCollector.h"
#include <vector>
#include <iostream>

inventory vehicleParamTester(const telematics &st_vehicle_input)
{
 inventory st_vehicle_output;
 
 switch(st_vehicle_input.type)
 {
  case MOTOR_TEMP:
    st_vehicle_output.motor_temp = st_vehicle_input.measurement;
    break;
   
  case BATTERY_PER:
    st_vehicle_output.battery_per = st_vehicle_input.measurement;
    break;
  
  case BATTERY_TEMP:
    st_vehicle_output.battery_temp = st_vehicle_input.measurement;
    break;
    
  default :
  break;
 }
 
return st_vehicle_output;
 
}
