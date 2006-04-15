/* $Id$*/

#ifndef LU_SOLVE_H
#define LU_SOLVE_H

/* Solve M a = b by LU decomposition with partial pivoting */
void LUSolve( const int Nvec, complex * M, const int ldM, complex * b);

#endif