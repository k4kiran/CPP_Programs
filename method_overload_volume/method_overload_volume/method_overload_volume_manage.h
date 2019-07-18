#ifndef METHOD_OVERLOAD_VOLUME_MANAGE_H_INCLUDED
#define METHOD_OVERLOAD_VOLUME_MANAGE_H_INCLUDED

/**
 * File method_overload_volume_manage.h - Copyright (C) <2019>
 * <Triassic Solutions Private Limited>. All rights reserved.
 * This file contains the definition of VolumeOfShapes class.
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

/**
* Class VolumeOfShapes
* simple class to find volume of shapes using overloading
* Author :Kiran Bal
* Version :1.0.0
* Date :05-07-2019
*
*/

class VolumeOfShapes
{
    private:
        float fResult;
        float nSide1;
        float fLengthPrism;
        float fBreadthPrism;
        float fHeightPrism;
        float fBaseLength;
        float fHeightPyramid;

    public:
        float Volume( float, float );
        float Volume( float );
        float Volume( float, float, float );
        void CubeVolume();
        void PrismVolume();
        void PyramidVolume();
};

#endif // FUNC_MANAGE_H_INCLUDED
#endif // METHOD_OVERLOAD_VOLUME_MANAGE_H_INCLUDED
