/*************************************************************************
> File Name: ZhuBridsonPointsToImplicit.h
> Project Name: CubbyFlow
> This code is based on Jet Framework that was created by Doyub Kim.
> References: https://github.com/doyubkim/fluid-engine-dev
> Purpose: ZhuBridsonPointsToImplicit functions for CubbyFlow Python API.
> Created Time: 2018/02/10
> Copyright (c) 2018, Chan-Ho Chris Ohk
*************************************************************************/
#ifndef CUBBYFLOW_PYTHON_ZHU_BRIDSON_POINTS_TO_IMPLICIT_H
#define CUBBYFLOW_PYTHON_ZHU_BRIDSON_POINTS_TO_IMPLICIT_H

#include <pybind11/pybind11.h>

void AddZhuBridsonPointsToImplicit2(pybind11::module& m);
void AddZhuBridsonPointsToImplicit3(pybind11::module& m);

#endif