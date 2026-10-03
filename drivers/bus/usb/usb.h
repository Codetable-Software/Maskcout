#ifndef MASKCOUT_BUS_USB_USB_H
#define MASKCOUT_BUS_USB_USB_H
#include <maskcout/types.h>
typedef enum{USB_SPEED_LOW,USB_SPEED_FULL,USB_SPEED_HIGH,USB_SPEED_SUPER} usb_speed_t;typedef struct{uint8_t address,interface;usb_speed_t speed;} usb_device_t;mc_status_t usb_device_attach(usb_device_t*);
#endif
