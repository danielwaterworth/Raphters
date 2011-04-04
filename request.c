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

#include "request.h"

#include "stdlib.h"

char *get_referer() {
    return getenv("HTTP_REFERER");
}

char *get_user_agent() {
    return getenv("HTTP_USER_AGENT");
}

char *get_path_info() {
    return getenv("PATH_INFO");
}

char *get_query_string() {
    return getenv("QUERY_STRING");
}

char *get_remote_addr() {
    return getenv("REMOTE_ADDR");
}

char *get_method() {
    return getenv("REQUEST_METHOD");
}

char *get_server_name() {
    return getenv("SERVER_NAME");
}

char *get_server_port() {
    return getenv("SERVER_PORT");
}
