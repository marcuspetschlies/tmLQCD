/***********************************************************************
 * Copyright (C) 2015 Florian Burger
 *
 * This file is part of tmLQCD.
 *
 * tmLQCD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * tmLQCD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with tmLQCD.  If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************/

#ifndef _MUL_R_32_H
#define _MUL_R_32_H

#include "su3.h"

/*   Makes (*R) = c*(*S)   c is a real constant*/
void mul_r_32(spinor32 * const R, const float c, spinor32 * const S, const int N);
void mul_r_32_orphaned(spinor32 * const R, const float c, spinor32 * const S, const int N);

#endif
