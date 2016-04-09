.ini Configuration Generator
===========================

Generate code for handling `.ini` configuration files. The code generates a struct to hold the parsed data, and 4 methods:
    - `config_init(struct config * data)` - Initialize `data` with the defaults specified by the specification.
    - `config_del(struct config * data)` - Free any pointers in the configuration struct.
    - `config_load(struct config * data, const char * filename)` - Load data from `.ini` file into the configuration struct.
    - `config_dump(struct config * data, const char * filename)` - Save data from configuration struct into `.ini` file.

Usage
-----
Define a macro `CFGOBJ` with the namespace of the configuration object. For example, with `#define CFGOBJ foo`, the configuration will generate `struct foo`, `foo_init(...)`, `foo_load(...)`, etc.

Also define `CFGOBJ_PATH`, which is a path to a `.def` file containing the specification of the configuration object.  (See `config.def` for example).

After these two defines, `#include "config_gen_h.def"` and `#include "config_gen_c.def`. The two can be separated into `.h` and `.c` files respectively.

Example
-------
The files `config.c`, `config.h`, and `config.def` form an example. 

Library Files
-------------
    - `config_gen_c.def` - "C file" which should be `#include`'d in your `.c` file.
    - `config_gen_h.def` - "C header file" which should be `#include`'d in your `.h` file.
    - `config_macros.h` - Contains general-purpose macros which are used to generate the C code. It also contains types defined for INT, FLOAT, and STRING.
    - `ini.c` / `ini.h` - https://github.com/benhoyt/inih
