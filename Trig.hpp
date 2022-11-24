#pragma once

#include <cstdint>

#ifndef TRIG_H
#define TRIG_H

extern float gSineTable[4096];
extern float gCosineTable[4096];
extern int gArctanTable[8192];

extern short atan2_lookup(float z, float x);
extern short atan2s(float z, float x);

#endif