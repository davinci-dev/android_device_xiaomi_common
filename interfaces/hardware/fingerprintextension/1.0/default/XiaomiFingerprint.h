/*
 * Copyright (C) 2020 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <vendor/xiaomi/hardware/fingerprintextension/1.0/IXiaomiFingerprint.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace xiaomi {
namespace hardware {
namespace fingerprintextension {
namespace V1_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct XiaomiFingerprint : public IXiaomiFingerprint {
    // Methods from ::vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint follow.
    Return<int32_t> extCmd(int32_t cmd, int32_t param) override;
};

extern "C" IXiaomiFingerprint* HIDL_FETCH_IXiaomiFingerprint(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace fingerprintextension
}  // namespace hardware
}  // namespace xiaomi
}  // namespace vendor
