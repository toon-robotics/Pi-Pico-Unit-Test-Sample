#include <unity.h>
#include "MyLibrary.h"

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




int main(void){
    return runUnityTests();
}
