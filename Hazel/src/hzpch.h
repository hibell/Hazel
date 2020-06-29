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


/******************************* MATH *******************************/
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/ext/matrix_clip_space.hpp>
#include <glm/ext/scalar_constants.hpp>

/**************************** WINDOWS *******************************/
#ifdef HZ_PLATFORM_WINDOWS
#include <Windows.h>
#endif

