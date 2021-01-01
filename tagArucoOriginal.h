#ifndef _ARUCO_ORIGINAL
#define _ARUCO_ORIGINAL

#include "apriltag.h"

#ifdef __cplusplus
extern "C" {
#endif

apriltag_family_t *tagArucoOriginal_create();
void tagArucoOriginal_destroy(apriltag_family_t *tf);

#ifdef __cplusplus
}
#endif

#endif
