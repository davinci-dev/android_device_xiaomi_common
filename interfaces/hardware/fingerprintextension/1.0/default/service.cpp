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

#define LOG_TAG "vendor.xiaomi.hardware.fingerprintextension@1.0-service"

#include <android-base/logging.h>
#include <hidl/HidlTransportSupport.h>
#include <hidl/LegacySupport.h>

#include "XiaomiFingerprint.h"

using android::OK;
using android::status_t;
using android::sp;
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::hardware::registerPassthroughServiceImplementation;

using vendor::xiaomi::hardware::fingerprintextension::V1_0::IXiaomiFingerprint;

int main() {
    LOG_ALWAYS_FATAL_IF(OK != registerPassthroughServiceImplementation<IXiaomiFingerprint>());

    configureRpcThreadpool(1, true);

    joinRpcThreadpool();

    return 1;
}
