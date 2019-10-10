/***********************************************************************/
/*                                                                     */
/*                             Heptagon                                */
/*                                                                     */
/* Gwenael Delaval, LIG/INRIA, UJF                                     */
/* Leonard Gerard, Parkas, ENS                                         */
/* Adrien Guatto, Parkas, ENS                                          */
/* Cedric Pasteur, Parkas, ENS                                         */
/* Marc Pouzet, Parkas, ENS                                            */
/*                                                                     */
/* Copyright 2012 ENS, INRIA, UJF                                      */
/*                                                                     */
/* This file is part of the Heptagon compiler.                         */
/*                                                                     */
/* Heptagon is free software: you can redistribute it and/or modify it */
/* under the terms of the GNU General Public License as published by   */
/* the Free Software Foundation, either version 3 of the License, or   */
/* (at your option) any later version.                                 */
/*                                                                     */
/* Heptagon is distributed in the hope that it will be useful,         */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of      */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       */
/* GNU General Public License for more details.                        */
/*                                                                     */
/* You should have received a copy of the GNU General Public License   */
/* along with Heptagon.  If not, see <http://www.gnu.org/licenses/>    */
/*                                                                     */
/***********************************************************************/

/* Pervasives module for the Heptagon compiler */

#ifndef DECADES_PERVASIVES_H
#define DECADES_PERVASIVES_H

typedef float real;

/* between(i, n) returns idx between 0 and n-1. */
static inline int between(int idx, int n)
{
  int o = (idx >= n) ? n-1 : (idx < 0 ? 0 : idx);
  return o;
}

#endif

