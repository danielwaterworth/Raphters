/*
    Copyright (C) 2011 Raphters authors,
    
    This file is part of Raphters.
    
    Raphters is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Raphters is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ERROR_H
#define ERROR_H

#include "stdio.h"
#include "stdlib.h"

#define LOG_ERROR(msg) \
fprintf(stderr, "raphters: %s\n", msg)

#define FAIL_WITH_ERROR(msg) \
fprintf(stderr, "raphters, fatal: %s\n", msg); \
exit(1)

#endif
