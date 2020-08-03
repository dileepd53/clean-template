#include <gtest/gtest.h>
#include <vehicleCollector.h>

TEST(VehicleTest, when_vehicle_reports_a_measuerement_it_is_fetched_and_stored){
 
 telematics vehicle_input_param  = {231, motor_temp,30};
 inventory vehicle_output_param = vehicleParamTester(&vehicle_input_param); 
 
 ASSERT_EQ(vehicle__output_param.motor_temp, 30); 
 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
