{
    "targets": [{
        "target_name": "testaddon",
        "cflags!": [ "-fno-exceptions" ],
        "cflags_cc!": [ "-fno-exceptions" ],
        "cflags_cc": [
            "-std=c++17"
        ],
        "sources": [
            "cppsrc/main.cpp",
            "cppsrc/Samples/functionexample.cpp",
            "cppsrc/Samples/functionexample.cpp",
            "cppsrc/Samples/actualclass.cpp",
            "cppsrc/Samples/classexample.cpp",
            "cppsrc/demo/test.cpp"
        ],
        'include_dirs': [
            "<!@(node -p \"require('node-addon-api').include\")"
        ],
        'libraries': [],
        'dependencies': [
            "<!(node -p \"require('node-addon-api').gyp\")"
        ],
        'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }]
}
