#ifndef __GAMER_H__
#define __GAMER_H__



#ifndef GAMER_DEBUG
#  define NDEBUG
#endif

#ifndef SERIAL
#  include <mpi.h>
#endif

#include <cstring>
#include <cstdlib>
#include <cassert>
#include <math.h>
#ifndef __APPLE__
#include <malloc.h>
#endif
#include <stdio.h>
#include <unistd.h>

#ifdef OPENMP
#  include <omp.h>
#endif

#ifdef SUPPORT_FFTW
#  ifdef FLOAT8
#     ifdef SERIAL
#        include <drfftw.h>
#     else
#        include <drfftw_mpi.h>
#     endif
#  else
#     ifdef SERIAL
#        include <srfftw.h>
#     else
#        include <srfftw_mpi.h>
#     endif
#  endif
#endif

#ifdef SUPPORT_GRACKLE
#ifdef FLOAT8
#  define CONFIG_BFLOAT_8
#else
#  define CONFIG_BFLOAT_4
#endif

extern "C" {
#  include <grackle.h>
}
#endif // #ifdef SUPPORT_GRACKLE

#ifdef SUPPORT_LIBYT
#  include <libyt.h>
#endif

#include "Macro.h"
#include "Typedef.h"
#include "AMR.h"
#include "Timer.h"
#include "RandomNumber.h"
#include "Profile.h"
#include "Extrema.h"
#include "SrcTerms.h"
#include "EoS.h"
#include "Global.h"
#include "Field.h"
#include "Prototype.h"
#include "PhysicalConstant.h"
#include "GatherTree.h"

#ifdef SERIAL
#  include "Serial.h"
#endif



#endif // #ifndef __GAMER_H__
