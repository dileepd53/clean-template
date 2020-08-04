#include <vector>
#include <iostream>
#include <cmath>

enum measure
{
  MOTOR_TEMP,
  BATTERY_PER,
  BATTERY_TEMP
};

struct telematics
{
  int vehicle_id;
  measure type;
  float measurement;
};

struct inventory
{
  int vehicle_id;
  float motor_temp;
  float battery_per;
  float battery_temp;
};


inventory vehicleParamTester(const telematics &st_vehicle_input);
