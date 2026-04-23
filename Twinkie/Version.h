#pragma once
#include "LuaEngine/include/lua.hpp"

#define TwinkieVersion "v2.0.2"

class Versioning
{
public:
	const char* const TwinkieVer = TwinkieVersion;
	const char* const LuaVer = LUA_VERSION_MAJOR "." LUA_VERSION_MINOR "." LUA_VERSION_RELEASE;

	Versioning() {}
};