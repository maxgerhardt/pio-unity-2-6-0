from platformio.public import UnityTestRunner

class CustomTestRunner(UnityTestRunner):
    # Use custom version
    EXTRA_LIB_DEPS = ["https://github.com/ThrowTheSwitch/Unity/archive/refs/tags/v2.6.0.zip"]
