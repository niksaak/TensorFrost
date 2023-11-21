#pragma once

#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <unordered_map>
#include <utility>
#include <vector>

#include "TensorMemory.h"
#include "IR/KernelGen.h"

namespace TensorFrost {

using namespace std;

vector<TensorMemory*> ExecuteProgram(Program* program, vector<TensorMemory*> inputs);

}  // namespace TensorFrost