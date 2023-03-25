#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test./catch.hpp"
#include "Sender.c"


void TEST_CASE_01(){
  
 BMSData_s sensorData_s;

  sensorData_s.chargeRate_minvalue = 0;
  sensorData_s.chargeRate_maxvalue = 100;
  sensorData_s.temp_minvalue = 0;
  sensorData_s.temp_maxvalue = 75;
  sensorData_s.totalNoofValues = 50;
  
  Main(sensorData_s);  
}
void TEST_CASE_02() {
  
  BMSData_s sensorData_s;

  sensorData_s.chargeRate_minvalue = 10;
  sensorData_s.chargeRate_maxvalue = 40;
  sensorData_s.temp_minvalue = 20;
  sensorData_s.temp_maxvalue = 25;
  sensorData_s.totalNoofValues = 50;
  
  Main(sensorData_s);  
}
void TEST_CASE_03(){
  
  BMSData_s sensorData_s;

  sensorData_s.chargeRate_minvalue = -10;
  sensorData_s.chargeRate_maxvalue = 100;
  sensorData_s.temp_minvalue = -1;
  sensorData_s.temp_maxvalue = 75;
  sensorData_s.totalNoofValues = 50;
  
  Main(sensorData_s);  
}
void TEST_CASE_04() {
  
  BMSData_s sensorData_s;

  sensorData_s.chargeRate_minvalue = 10;
  sensorData_s.chargeRate_maxvalue = 10;
  sensorData_s.temp_minvalue = 20;
  sensorData_s.temp_maxvalue = 20;
  sensorData_s.totalNoofValues = 50;
  
  Main(sensorData_s);  
}
 void TEST_CASE_05() {
  
  BMSData_s sensorData_s;

  sensorData_s.chargeRate_minvalue = -10;
  sensorData_s.chargeRate_maxvalue = -5;
  sensorData_s.temp_minvalue = -5;
  sensorData_s.temp_maxvalue = -1;
  sensorData_s.totalNoofValues = 50;
  
  Main(sensorData_s);  
}
