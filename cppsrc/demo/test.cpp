#include "test.h"
#include "../Samples/functionexample.h"
#include "../Samples/classexample.h"

Napi::Object demo_test::Init(Napi::Env env, Napi::Object exports)
{
  // function
  functionexample::Init(env, exports);

  
  // class
  ClassExample::Init(env, exports);

  // number
  exports.Set("pi", Napi::Number::New(env, 3.14));

  // string
  exports.Set("libray_name", Napi::String::New(env, "testaddon"));

  // boolean
  exports.Set("isBool", Napi::Boolean::New(env, true));

  // undefined、null
  // exports.Set("string_undefined", );

  // json
  auto json = Napi::Object::New(env);
  json.Set("name", "zhangsan");
  json.Set("age", 1);
  exports.Set("json", json);

  // array
  auto array = Napi::Array::New(env);
  array.Set("0", 1);
  array.Set("1", 2);
  exports.Set("array", array);

  return exports;
}