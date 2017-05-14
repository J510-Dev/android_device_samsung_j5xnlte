# Inherit from common
include device/samsung/j5-common/BoardConfigCommon.mk

LOCAL_PATH := device/samsung/j5xnlte

# Asserts
TARGET_OTA_ASSERT_DEVICE := j5xnlte,j5xnltexx,j5x3g

# Kernel
TARGET_KERNEL_VARIANT_CONFIG := msm8916_sec_j5xlte_eur_defconfig

# Partition sizes
BOARD_SYSTEMIMAGE_PARTITION_SIZE    := 3145728000
BOARD_USERDATAIMAGE_PARTITION_SIZE  := 12138278912
