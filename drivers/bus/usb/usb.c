#include "usb.h"
mc_status_t usb_device_attach(usb_device_t*d){if(!d||d->address>127)return MC_EINVAL;return MC_OK;}