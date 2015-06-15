#ifndef __CONFIG_H__
#define __CONFIG_H__

#ifdef CFGOBJ
#undef CFGOBJ
#undef CFGOBJ_PATH
#endif

#define CFGOBJ config
#define CFGOBJ_PATH "config.def"

#include "config_gen_h.def"

extern struct config config;

#endif  // End of include guard
