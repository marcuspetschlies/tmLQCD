#ifndef _SOLVER_TYPES_H
#define _SOLVER_TYPES_H

typedef enum SOLVER_TYPE {
 BICGSTAB = 0,
 CG,
 GMRES,
 CGS,
 MR,
 BICGSTABELL,
 FGMRES,
 GCR,
 GMRESDR,
 PCG,
 DFLGCR,
 DFLFGMRES,
 CGMMS,
 MIXEDCG,
 RGMIXEDCG,
 CGMMSND,
 INCREIGCG,
 MIXEDCGMMSND,
 SUMR,
 MCR,
 CR,
 BICG,
 MG,
 MGMMSND
} SOLVER_TYPE;

#endif
