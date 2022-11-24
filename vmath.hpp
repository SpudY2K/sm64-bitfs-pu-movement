#pragma once

#ifndef VMATH_H
#define VMATH_H

typedef float Vec2f[2];
typedef float Vec3f[3]; // X, Y, Z, where Y is up
typedef short Vec3s[3];
typedef int Vec3i[3];
typedef float Vec4f[4];
typedef short Vec4s[4];
typedef Vec3s VecVec3s[3];
typedef Vec3f VecVec3f[3];

typedef float Mat4[4][4];

float euclidean_distance(Vec3f a, Vec3f b);
float euclidean_distance_squared(Vec3f a, Vec3f b);
void create_transform_from_normal(Vec3f normal, Vec3f position, Mat4 mat);
void apply_tform(VecVec3f vertices, Mat4 mat, VecVec3f tform_vertices);
void vec3f_normalize(Vec3f v);
void vec3f_cross(Vec3f dst, const Vec3f a, const Vec3f b);
void vec3f_set(Vec3f dst, float x, float y, float z);
void mtxf_align_terrain_normal(Mat4 dest, Vec3f upDir, const Vec3f pos, short yaw);
void linear_mtxf_mul_vec3f(Vec3f dst, const Mat4 m, const Vec3f v);

#endif