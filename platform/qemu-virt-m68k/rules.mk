LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)

ARCH := m68k
LK_HEAP_IMPLEMENTATION ?= dlmalloc

MODULE_DEPS += lib/cbuf
MODULE_DEPS += dev/virtio/block
MODULE_DEPS += dev/virtio/gpu
MODULE_DEPS += dev/virtio/net

MODULE_SRCS += $(LOCAL_DIR)/goldfish_rtc.c
MODULE_SRCS += $(LOCAL_DIR)/goldfish_tty.c
MODULE_SRCS += $(LOCAL_DIR)/pic.c
MODULE_SRCS += $(LOCAL_DIR)/platform.c

MEMBASE ?= 0x00000000
MEMSIZE ?= 0x08000000 # default to 128MB

# we can revert to a poll based uart spin routine
GLOBAL_DEFINES += PLATFORM_SUPPORTS_PANIC_SHELL=1

include make/module.mk
