#ifndef __LOG_H__
#define __LOG_H__
#include <stdio.h>

#define LOG_DEBUG(format,arg...) printf("%s,%d:"format"\n",__FILE__,__LINE__,##arg);
#define LOG_ERROR(format,arg...) printf(format"\n",##arg);

#endif