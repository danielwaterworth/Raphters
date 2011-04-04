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

#include "raphters.h"

START_HANDLER (simple, GET, "simple", res, 0, matches) {
    response_add_header(res, "content-type", "text/html");
    response_write(res, "hello world");
} END_HANDLER

START_HANDLER (default_handler, GET, "", res, 0, matches) {
    response_add_header(res, "content-type", "text/html");
    response_write(res, "default page");
} END_HANDLER

int main() {
    add_handler(simple);
    add_handler(default_handler);
    serve_forever();
    return 0;
}
