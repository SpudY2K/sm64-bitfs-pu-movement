#pragma once
#include "vmath.hpp"
#include <vector>

#ifndef SURFACE_H
#define SURFACE_H

class Surface {
public:
	VecVec3f vertices;
	Vec3f normal;
	float origin_offset;
	float lower_y;
	float upper_y;

	float min_x;
	float max_x;
	float min_z;
	float max_z;

	Surface(float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2) {
        VecVec3f verts = { {x0, y0, z0}, {x1, y1, z1}, {x2, y2, z2} };
		set_vertices(verts);
	}

	Surface(VecVec3f verts) {
		set_vertices(verts);
	}

	Surface() {}

    void calculate_normal();
    void set_vertices(VecVec3f verts);
};
#endif