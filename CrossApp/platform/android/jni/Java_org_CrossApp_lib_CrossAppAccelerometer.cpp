#include "platform/android/CAAccelerometer.h"
#include "JniHelper.h"
#include <jni.h>
#include "basics/CAApplication.h"

using namespace CrossApp;

extern "C" {
    JNIEXPORT void JNICALL Java_org_CrossApp_lib_CrossAppAccelerometer_onSensorChanged(JNIEnv*  env, jobject thiz, jfloat x, jfloat y, jfloat z, jlong timeStamp)
    {
        CAApplication::getApplication()->getAccelerometer()->update(x, y, z, timeStamp);
    }
}
