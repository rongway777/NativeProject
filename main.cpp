#include <iostream>
#include <android/log.h>

using namespace std;

#define TAG "MainCpp"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)


int main() {
    cout << "Hello, World!" << endl;
    //LOGI("hello ndk world");
    return 0;
}