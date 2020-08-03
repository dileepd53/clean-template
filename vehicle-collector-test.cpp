#include <gtest/gtest.h>
 
TEST(VehicleTest, when_vehicle_reports_a_measuerement_it_is_fetched_and_stored){
  
 vehicle_param_val = vehicleTester(vehicle_id, en_key);
 ASSERT_EQ(vehicle_param_val, EN_DATA_AVAILABLE); 
 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
