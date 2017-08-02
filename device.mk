#Inherit from vendor
$(call inherit-product, vendor/samsung/j5xnlte/j5xnlte-vendor.mk)

# Inherit from common
$(call inherit-product, device/samsung/j5-common/device-common.mk)

LOCAL_PATH := device/samsung/j5xnlte

# System properties
-include $(LOCAL_PATH)/system_prop.mk

# Common overlay
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay

# Audio configuration
PRODUCT_COPY_FILES += \
	$(LOCAL_PATH)/audio/mixer_paths.xml:system/etc/mixer_paths.xml

# Media configurations
PRODUCT_COPY_FILES += \
	$(LOCAL_PATH)/media/media_codecs_performance.xml:system/etc/media_codecs_performance.xml \
	$(LOCAL_PATH)/media/media_codecs.xml:system/etc/media_codecs.xml \
	$(LOCAL_PATH)/media/media_codecs_sec_primary.xml:system/etc/media_codecs_sec_primary.xml \
	$(LOCAL_PATH)/media/media_codecs_sec_secondary.xml:system/etc/media_codecs_sec_secondary.xml \
	$(LOCAL_PATH)/media/media_profiles.xml:system/etc/media_profiles.xml
