#pragma once

#define VERSION "v0.2.1"

#ifdef MORE_DIMENSIONS_EXPORTS

#define MORE_DIMENSIONS_API __declspec(dllexport)

#else

#define MORE_DIMENSIONS_API __declspec(dllimport)

#endif
