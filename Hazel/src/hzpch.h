#pragma once

/********************** Standard Library & STL **********************/
#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

/**************************** LOGGING *******************************/
#include "Hazel/Log.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/basic_file_sink.h>

/**************************** WINDOWS *******************************/
#ifdef HZ_PLATFORM_WINDOWS
#include <Windows.h>
#endif

