#ifndef VEC3D_H
#define VEC3D_H
#include <string>

class Vec3D
{
public:
	Vec3D(std::string x, std::string y, std::string z) :
		x(x), y(y), z(z) {}

	std::string x;
	std::string y;
	std::string z;
};

#endif
