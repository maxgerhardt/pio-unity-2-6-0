#include <unity.h>

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void simple_test(void)
{
    TEST_ASSERT_EQUAL(33, 33);
}

int main(int argc, char* argv[])
{
    UNITY_BEGIN();
    RUN_TEST(simple_test);
    UNITY_END();
    return 0;
}
