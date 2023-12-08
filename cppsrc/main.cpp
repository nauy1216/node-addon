#include <napi.h>
#include "demo/test.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  //
  return demo_test::Init(env, exports);
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, InitAll)