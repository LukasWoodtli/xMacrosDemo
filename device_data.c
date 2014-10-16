#include "device_data.h"


#define ARRAY_LEN_F(array) (sizeof(array)/sizeof(*array))

#define STATIC_ASSERT(constExpr, msg)
#define _STATIC_ASSERT(constExpr, msg) typedef int static_assert_##msg[(constExpr) ? 0 : -1]


static char const * const mod_devStringsArray[] =
{
#define DEV_DATA_DEF(enumId, devId, name) name,
#include "device_data.xdef"
#undef DEV_DATA_DEF
};
STATIC_ASSERT(ARRAY_LEN_F(mod_devStringsArray) == DEV_ENUM_NUM, mod_devStringsArray_size_wrong);

static dev_id_t mod_devIdArray[] =
{
#define DEV_DATA_DEF(enumId, devId, name) devId,
#include "device_data.xdef"
#undef DEV_DATA_DEF
};
STATIC_ASSERT(ARRAY_LEN_F(mod_devIdArray) == DEV_ENUM_NUM, mod_devIdArray_size_wrong);


char const * getStringByEnumID(dev_enum_t id)
{
    return mod_devStringsArray[id];
}



const dev_id_t getDevIdByEnumID(dev_enum_t id)
{
    return mod_devIdArray[id];
}
