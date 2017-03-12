/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

void init_target_properties(void)
{
    char bootloader[PROP_VALUE_MAX];
    char device[PROP_VALUE_MAX];

    /* get the bootloader string */
    property_get("ro.bootloader", bootloader);

    if (strstr(bootloader,"G530W")) {
        property_set("ro.build.product", "gprimeltecan");
        property_set("ro.product.device", "gprimeltecan");
        property_set("ro.product.model", "SM-G530W");
        property_set("ro.build.description", "lineage_gprimeltecan-userdebug 6.0.1 MOB31K 4dae919457 test-keys");
        property_set("ro.build.fingerprint", "samsung/lineage_gprimeltecan/gprimeltecan:6.0.1/MOB31K/4dae919457:userdebug/test-keys");
    }
    else if (strstr(bootloader,"G530T1")) {
        property_set("ro.build.product", "gprimeltemtr");
        property_set("ro.product.device", "gprimeltemtr");
        property_set("ro.product.model", "SM-G530T1");
        property_set("ro.build.description", "lineage_gprimeltemtr-userdebug 6.0.1 MOB31K 4dae919457 test-keys");
        property_set("ro.build.fingerprint", "samsung/lineage_gprimeltemtr/gprimeltemtr:6.0.1/MOB31K/4dae919457:userdebug/test-keys");
    }
    else if (strstr(bootloader,"G530T")) {
        property_set("ro.build.product", "gprimeltetmo");
        property_set("ro.product.device", "gprimeltetmo");
        property_set("ro.product.model", "SM-G530T");
        property_set("ro.build.description", "lineage_gprimeltetmo-userdebug 6.0.1 MOB31K 4dae919457 test-keys");
        property_set("ro.build.fingerprint", "samsung/lineage_gprimeltetmo/gprimeltetmo:6.0.1/MOB31K/4dae919457:userdebug/test-keys");
    }
    else if (strstr(bootloader,"G530P")) {
        property_set("ro.build.product", "gprimeltespr");
        property_set("ro.product.device", "gprimeltespr");
        property_set("ro.product.model", "SM-G530P");
	/* radio properties */
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("persist.radio.snapshot_enabled", "1");
        property_set("persist.radio.snapshot_timer", "22");
        property_set("persist.radio.sib16_support", "1");
        property_set("ro.config.combined_signal", "true");
        property_set("ro.ril.ecclist", "911,#911,*911");
        property_set("ro.cdma.default_numeric", "310000");
        property_set("ro.cdma.default_alpha", "Chameleon");
	/* end radio properties */
        property_set("ro.build.description", "lineage_gprimeltespr-userdebug 6.0.1 MOB31K 4dae919457 test-keys");
        property_set("ro.build.fingerprint", "samsung/lineage_gprimeltespr/gprimeltespr:6.0.1/MOB31K/4dae919457:userdebug/test-keys");

    }
    property_get("ro.product.device", device);
    INFO("Found bootloader id %s setting build properties for %s device\n", bootloader, device);
}

void vendor_load_properties(void)
{
    /* set the device properties */
    init_target_properties();
}
