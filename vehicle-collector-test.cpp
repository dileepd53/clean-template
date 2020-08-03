#include "vehicleCollector.h"
#include <gtest/gtest.h>


TEST(VehicleTest, when_vehicle_reports_a_measuerement_it_is_fetched_and_stored){
 
 telematics vehicle_input_param  = {231, MOTOR_TEMP, 30};
 inventory *vehicle_output_param = vehicleParamTester(&vehicle_input_param); 
 
 ASSERT_EQ(vehicle_output_param->motor_temp, 30); 
 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
