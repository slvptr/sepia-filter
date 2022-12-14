#ifndef FILE_HANDLER
#define FILE_HANDLER

#include <stdio.h>
#include "image.h"


/*  deserializer   */
enum read_status  {
    READ_OK = 0,
    READ_ERROR,
    READ_INVALID_SIGNATURE,
    READ_INVALID_BITS,
    READ_INVALID_HEADER
};

enum read_status from_bmp( FILE* in, struct image* img );

/*  serializer   */
enum  write_status  {
    WRITE_OK = 0,
    WRITE_INVALID_HEADER,
    WRITE_INVALID_BITS,
    WRITE_ERROR
};

enum write_status to_bmp( FILE* out, struct image const* img );

#endif
