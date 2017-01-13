//=======================================================================================
// SkookumScript C++ library.
// Copyright (c) 2015 Agog Labs Inc. All rights reserved.
//
// SkookumScript color class
//
// Author: Markus Breyer
//=======================================================================================

#pragma once

//=======================================================================================
// Includes
//=======================================================================================

#include "../SkUEClassBinding.hpp"
#include "Math/UnrealMath.h" // Vector math functions

//---------------------------------------------------------------------------------------
// SkookumScript color class
class SKOOKUMSCRIPTRUNTIME_API SkColor : public SkClassBindingSimpleForceInit<SkColor, FLinearColor>
  {
  public:

    static void       register_bindings();
    static SkClass *  get_class();

  };
