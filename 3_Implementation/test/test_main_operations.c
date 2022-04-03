#include "unity.h"
#include "main_operations.h"

#define PROJECT_NAME "Bank_management"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for Bank_management
 * 
 */

/**
 * @brief Testing function
 * 
 */
void main():
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_main);
   
    /* Close the Unity Test Framework */
    return UNITY_END;
}

