#include "device_data.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    for (i = 0; i < DEV_ENUM_NUM; ++i)
    {
        printf("Device ID: %i, Name: %s\n", getDevIdByEnumID(i), getStringByEnumID(i));
    }
    
    return 0;
}