// TODO: Add includes as needed
#include "SparkFun_Qwiic_XM125_Arduino_Library.h"

// TODO: Change Template
TemplateClass myDevice;

void setup()
{
    // Start serial
    Serial.begin(115200);
    Serial.println("Template Example 1 - Basic Uasge"); // TODO: Update

    // TODO: Check return value of begin
    myDevice.begin();

    // TODO: Add other setup code if needed. Most setup should be done in begin()
}

void loop()
{
    // Request Presence Data to the device 
}