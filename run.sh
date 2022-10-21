
cd ./cmake-build-ndk

adb  push ./NativeProject /data/local/tmp/
adb shell chmod a+x /data/local/tmp/NativeProject
adb shell /data/local/tmp/NativeProject