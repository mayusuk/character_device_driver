#include <asm/ioctl.h>
#include "data.h"

#define IOCTL_APP_TYPE 78
#define IOCTL_DUMP _IOWR(IOCTL_APP_TYPE, 1, struct dump_arg)

static struct dump_arg {
 int n; // the n-th bucket (in) or n objects retrieved (out)
 struct data object_array[8];
};

