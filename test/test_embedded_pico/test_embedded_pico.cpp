#include <Arduino.h>
#include <unity.h>

#include "MyLibrary.h"

REDIRECT_STDOUT_TO(Serial);

void setUp(void){

}

void tearDown(void){

}

void testMyLibrary(){
    
    TEST_ASSERT_EQUAL_INT(5, MyLibrary::testFunction());
    
}

int runUnityTests(void){
    UNITY_BEGIN();
    RUN_TEST(testMyLibrary);
    return UNITY_END();
}



void setup(){

    while(!Serial){}
    runUnityTests();
}

void loop(){

}
