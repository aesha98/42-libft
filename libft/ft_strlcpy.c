#include <stdlib.h>

size_t strlcpy( char *dst, const char *src, size_t siz)
{
   size_t offset;

   offset = 0;
   if (siz > 0)
   {
    while ( *(src + offset) != '\0')
    {
      if (offset == siz)
       {
          offset--;
          break;
       }
        *(dst + offset) = *(src + offset);
         offset++;
    }
   }

   *(dst + offset) = '\0';

   while (*(src + offset))
   {
      offset++;
   }
   return (offset);
}