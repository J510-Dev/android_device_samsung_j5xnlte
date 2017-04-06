# Inherit from common
include device/samsung/gprimelte-common/BoardConfigCommon.mk

LOCAL_PATH := device/samsung/gprimelte

# Asserts
TARGET_OTA_ASSERT_DEVICE := gprimelte,gprimeltecan,gprimeltetmo,gprimeltemtr,gprimeltespr

# Init
TARGET_UNIFIED_DEVICE := true

# Kernel
TARGET_KERNEL_VARIANT_CONFIG := msm8916_sec_fortuna_can_defconfig

# Partition sizes
BOARD_SYSTEMIMAGE_PARTITION_SIZE    := 2233466880
BOARD_SYSTEMIMAGE_PARTITION_TPE    := ext4
BOARD_USERDATAIMAGE_PARTITION_SIZE  := 4942966784
