# Inherit from common
include device/samsung/j5-common/BoardConfigCommon.mk

LOCAL_PATH := device/samsung/j5xnlte

# Asserts
TARGET_OTA_ASSERT_DEVICE := j5xnlte,j5xnltexx,j5x3g

# Kernel
TARGET_KERNEL_VARIANT_CONFIG := msm8916_sec_j5xlte_eur_defconfig

# Audio
AUDIO_FEATURE_SAMSUNG_DUAL_SIM := true

# Radio
SIM_COUNT := 2
TARGET_GLOBAL_CFLAGS += -DANDROID_MULTI_SIM
TARGET_GLOBAL_CPPFLAGS += -DANDROID_MULTI_SIM

# Partition sizes
BOARD_SYSTEMIMAGE_PARTITION_SIZE    := 3145728000
BOARD_USERDATAIMAGE_PARTITION_SIZE  := 12138278912
