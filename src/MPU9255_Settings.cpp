/**
 * @file MPU9255_Settings.cpp
 * @brief This source file contains methods for getting settings.
 */

// This file is a part of MPU9255 library.
// Copyright (c) 2017-2020 Krzysztof Adamkiewicz <kadamkiewicz835@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the “Software”), to deal in the
// Software without restriction, including without limitation the rights to use, copy,
// modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
// and to permit persons to whom the Software is furnished to do so, subject to the
// following conditions: THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
// OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "MPU9255.h"
#include "Arduino.h"

/**
 * @brief return factory accelerometer offset.
 * @param selected_axis Selected axis.
 */
int MPU9255::acc_factory_offset(axis selected_axis)
{

  switch(selected_axis)
  {
    case X_axis:
    {
	  return AX_offset;
      break;
	}
    case Y_axis:
	{
	  return AY_offset;	  
      break;
	}
    case Z_axis:
	{
	  return AZ_offset;	  
      break;
	}	
  }
}

/**
 * @brief return factory accelerometer offset.
 * @param selected_axis Selected axis.
 */
int MPU9255::gyro_factory_offset(axis selected_axis)
{

  switch(selected_axis)
  {
    case X_axis:
	{
	  return GX_offset;
      break;
	}
    case Y_axis:
	{
	  return GY_offset;	  
      break;
	}
    case Z_axis:
	{
	  return GZ_offset;	  
      break;
	}
  }
}


