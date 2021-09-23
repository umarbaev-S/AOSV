#pragma once

#include <linux/ioctl.h>

#define UMS_DEV_IOCTL_MAGIC 'R'

#define UMS_DEV_INIT_UMS_PROCESS    _IO(UMS_DEV_IOCTL_MAGIC, 0)
#define UMS_DEV_EXIT_UMS_PROCESS    _IO(UMS_DEV_IOCTL_MAGIC, 1)
