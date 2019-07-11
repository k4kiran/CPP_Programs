#ifndef METHOD_OVERLOAD_VOLUME_MANAGE_H_INCLUDED
#define METHOD_OVERLOAD_VOLUME_MANAGE_H_INCLUDED

/**
 * File func_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of functions.
 *
 * Author   : Kiran Bal
 * Version  : 1.0.0
 * Date     : 05-07-2019
 *
 */

#ifndef FUNC_MANAGE_H_INCLUDED
#define FUNC_MANAGE_H_INCLUDED

#include <iostream>

using namespace std;
class VolumeOfShapes
{
private:

public:
    void CubeVolume();
    void PrismVolume();
    void PyramidVolume();
};
float Volume( int, int );
float Volume( int );
float Volume( int, int, int );


#endif // FUNC_MANAGE_H_INCLUDED


#endif // METHOD_OVERLOAD_VOLUME_MANAGE_H_INCLUDED
