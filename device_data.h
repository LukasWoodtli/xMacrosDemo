#ifndef _DEVICE_DATA_H
#define _DEVICE_DATA_H

typedef enum
{
#define DEV_DATA_DEF(enum_id, id, str) enum_id,
#include "device_data.xdef"
#undef DEV_DATA_DEF
 DEV_ENUM_NUM
} dev_enum_t;



typedef enum
{
#define DEV_DATA_DEF(enum_id, id, str) DEV##enum_id = id,
#include "device_data.xdef"
#undef DEV_DATA_DEF
} dev_id_t;



char const * getStringByEnumID(dev_enum_t id);

const dev_id_t getDevIdByEnumID(dev_enum_t id);



#endif /* _DEVICE_DATA_H */
