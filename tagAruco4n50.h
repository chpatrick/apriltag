#ifndef _ARUCO4N50
#define _ARUCO4N50

#include "apriltag.h"

#ifdef __cplusplus
extern "C" {
#endif

apriltag_family_t *tagAruco4n50_create();
void tagAruco4n50_destroy(apriltag_family_t *tf);

#ifdef __cplusplus
}
#endif

#endif
