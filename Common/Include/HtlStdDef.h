/*
 * HtlStdDef.h
 *
 * Created: 03.10.2016
 *  Author: Jakob
 */ 

#ifndef HTLSTDDEF_H
#define HTLSTDDEF_H

typedef enum
{
	EFALSE = 0,
	ETRUE = 1
} TBoolean;



#include <stdint.h>


#ifndef PRIVATE
#define PRIVATE static
#endif

#ifndef PUBLIC
#define PUBLIC
#endif


#ifndef BSC_NULL
#define BSC_NULL   ((void *)0)
#endif

#ifndef BSC_TRUE
#define BSC_TRUE    1
#endif

#ifndef BSC_FALSE
#define BSC_FALSE   0
#endif


#endif /* HTLSTDDEF_H */
