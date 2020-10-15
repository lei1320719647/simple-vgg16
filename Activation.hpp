#pragma once
#include "Tensor.hpp"

namespace sd
{
    template <typename dtype>
    dtype ReLU(dtype input)
    {
        return input < 0 ? 0 : input;
    }
} // namespace sd
