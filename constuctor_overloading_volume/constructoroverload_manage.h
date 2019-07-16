#ifndef CONSTRUCTOROVERLOAD_MANAGE_H_INCLUDED
#define CONSTRUCTOROVERLOAD_MANAGE_H_INCLUDED

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


#include <iostream>
using namespace std;

class COverloadVolume
{
    private:
        float m_fLengthCube;
        float m_fLengthPyramid;
        float m_fBreadthPyramid;
        float m_fLengthPrism;
        float m_fBreadthPrism;
        float m_fHeightPrism;
        float m_fVolume;

    public:
        COverloadVolume( float  );
        COverloadVolume( float , float);
        COverloadVolume( float , float , float );
        void display();
};
        void VolumeCube();
        void VolumePyramid();
        void VolumePrism();
        void UserInterface();


#endif // CONSTRUCTOROVERLOAD_MANAGE_H_INCLUDED


