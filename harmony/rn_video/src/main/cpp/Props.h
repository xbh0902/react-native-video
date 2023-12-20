/**
 * MIT License
 *
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 * 
 * Do not edit this file as change may cause incorrect behavior and will be lost
 * once the code is regenerated.
 * 
 * @generated by codegen project: GeneratePropsH.js
 */
#pragma once

#include <jsi/jsi.h>
#include <react/renderer/components/view/ViewProps.h>
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/core/propsConversions.h>
#include <vector>

namespace facebook {
namespace react {

enum class RNCVideoDrmType { WIDEVINE, PLAYREADY, CLEARKEY, FAIRPLAY };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value, RNCVideoDrmType &result)
{
    auto string = (std::string)value;
    if (string == "widevine") {
        result = RNCVideoDrmType::WIDEVINE;
        return;
    }
    if (string == "playready") {
        result = RNCVideoDrmType::PLAYREADY;
        return;
    }
    if (string == "clearkey") {
        result = RNCVideoDrmType::CLEARKEY;
        return;
    }
    if (string == "fairplay") {
        result = RNCVideoDrmType::FAIRPLAY;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoDrmType &value)
{
    switch (value) {
        case RNCVideoDrmType::WIDEVINE:
            return "widevine";
        case RNCVideoDrmType::PLAYREADY:
            return "playready";
        case RNCVideoDrmType::CLEARKEY:
            return "clearkey";
        case RNCVideoDrmType::FAIRPLAY:
            return "fairplay";
    }
}
enum class RNCVideoFilter {
    NONE,
    CICOLORINVERT,
    CICOLORMONOCHROME,
    CICOLORPOSTERIZE,
    CIFALSECOLOR,
    CIMAXIMUMCOMPONENT,
    CIMINIMUMCOMPONENT,
    CIPHOTOEFFECTCHROME,
    CIPHOTOEFFECTFADE,
    CIPHOTOEFFECTINSTANT,
    CIPHOTOEFFECTMONO,
    CIPHOTOEFFECTNOIR,
    CIPHOTOEFFECTPROCESS,
    CIPHOTOEFFECTTONAL,
    CIPHOTOEFFECTTRANSFER,
    CISEPIATONE
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value, RNCVideoFilter &result)
{
    auto string = (std::string)value;
    if (string == "None") {
        result = RNCVideoFilter::NONE;
        return;
    }
    if (string == "CIColorInvert") {
        result = RNCVideoFilter::CICOLORINVERT;
        return;
    }
    if (string == "CIColorMonochrome") {
        result = RNCVideoFilter::CICOLORMONOCHROME;
        return;
    }
    if (string == "CIColorPosterize") {
        result = RNCVideoFilter::CICOLORPOSTERIZE;
        return;
    }
    if (string == "CIFalseColor") {
        result = RNCVideoFilter::CIFALSECOLOR;
        return;
    }
    if (string == "CIMaximumComponent") {
        result = RNCVideoFilter::CIMAXIMUMCOMPONENT;
        return;
    }
    if (string == "CIMinimumComponent") {
        result = RNCVideoFilter::CIMINIMUMCOMPONENT;
        return;
    }
    if (string == "CIPhotoEffectChrome") {
        result = RNCVideoFilter::CIPHOTOEFFECTCHROME;
        return;
    }
    if (string == "CIPhotoEffectFade") {
        result = RNCVideoFilter::CIPHOTOEFFECTFADE;
        return;
    }
    if (string == "CIPhotoEffectInstant") {
        result = RNCVideoFilter::CIPHOTOEFFECTINSTANT;
        return;
    }
    if (string == "CIPhotoEffectMono") {
        result = RNCVideoFilter::CIPHOTOEFFECTMONO;
        return;
    }
    if (string == "CIPhotoEffectNoir") {
        result = RNCVideoFilter::CIPHOTOEFFECTNOIR;
        return;
    }
    if (string == "CIPhotoEffectProcess") {
        result = RNCVideoFilter::CIPHOTOEFFECTPROCESS;
        return;
    }
    if (string == "CIPhotoEffectTonal") {
        result = RNCVideoFilter::CIPHOTOEFFECTTONAL;
        return;
    }
    if (string == "CIPhotoEffectTransfer") {
        result = RNCVideoFilter::CIPHOTOEFFECTTRANSFER;
        return;
    }
    if (string == "CISepiaTone") {
        result = RNCVideoFilter::CISEPIATONE;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoFilter &value)
{
    switch (value) {
        case RNCVideoFilter::NONE:
            return "None";
        case RNCVideoFilter::CICOLORINVERT:
            return "CIColorInvert";
        case RNCVideoFilter::CICOLORMONOCHROME:
            return "CIColorMonochrome";
        case RNCVideoFilter::CICOLORPOSTERIZE:
            return "CIColorPosterize";
        case RNCVideoFilter::CIFALSECOLOR:
            return "CIFalseColor";
        case RNCVideoFilter::CIMAXIMUMCOMPONENT:
            return "CIMaximumComponent";
        case RNCVideoFilter::CIMINIMUMCOMPONENT:
            return "CIMinimumComponent";
        case RNCVideoFilter::CIPHOTOEFFECTCHROME:
            return "CIPhotoEffectChrome";
        case RNCVideoFilter::CIPHOTOEFFECTFADE:
            return "CIPhotoEffectFade";
        case RNCVideoFilter::CIPHOTOEFFECTINSTANT:
            return "CIPhotoEffectInstant";
        case RNCVideoFilter::CIPHOTOEFFECTMONO:
            return "CIPhotoEffectMono";
        case RNCVideoFilter::CIPHOTOEFFECTNOIR:
            return "CIPhotoEffectNoir";
        case RNCVideoFilter::CIPHOTOEFFECTPROCESS:
            return "CIPhotoEffectProcess";
        case RNCVideoFilter::CIPHOTOEFFECTTONAL:
            return "CIPhotoEffectTonal";
        case RNCVideoFilter::CIPHOTOEFFECTTRANSFER:
            return "CIPhotoEffectTransfer";
        case RNCVideoFilter::CISEPIATONE:
            return "CISepiaTone";
    }
}
enum class RNCVideoFullscreenOrientation { ALL, LANDSCAPE, PORTRAIT };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoFullscreenOrientation &result)
{
    auto string = (std::string)value;
    if (string == "all") {
        result = RNCVideoFullscreenOrientation::ALL;
        return;
    }
    if (string == "landscape") {
        result = RNCVideoFullscreenOrientation::LANDSCAPE;
        return;
    }
    if (string == "portrait") {
        result = RNCVideoFullscreenOrientation::PORTRAIT;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoFullscreenOrientation &value)
{
    switch (value) {
        case RNCVideoFullscreenOrientation::ALL:
            return "all";
        case RNCVideoFullscreenOrientation::LANDSCAPE:
            return "landscape";
        case RNCVideoFullscreenOrientation::PORTRAIT:
            return "portrait";
    }
}
enum class RNCVideoIgnoreSilentSwitch { INHERIT, IGNORE, OBEY };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoIgnoreSilentSwitch &result)
{
    auto string = (std::string)value;
    if (string == "inherit") {
        result = RNCVideoIgnoreSilentSwitch::INHERIT;
        return;
    }
    if (string == "ignore") {
        result = RNCVideoIgnoreSilentSwitch::IGNORE;
        return;
    }
    if (string == "obey") {
        result = RNCVideoIgnoreSilentSwitch::OBEY;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoIgnoreSilentSwitch &value)
{
    switch (value) {
        case RNCVideoIgnoreSilentSwitch::INHERIT:
            return "inherit";
        case RNCVideoIgnoreSilentSwitch::IGNORE:
            return "ignore";
        case RNCVideoIgnoreSilentSwitch::OBEY:
            return "obey";
    }
}
enum class RNCVideoMixWithOthers { INHERIT, MIX, DUCK };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value, RNCVideoMixWithOthers &result)
{
    auto string = (std::string)value;
    if (string == "inherit") {
        result = RNCVideoMixWithOthers::INHERIT;
        return;
    }
    if (string == "mix") {
        result = RNCVideoMixWithOthers::MIX;
        return;
    }
    if (string == "duck") {
        result = RNCVideoMixWithOthers::DUCK;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoMixWithOthers &value)
{
    switch (value) {
        case RNCVideoMixWithOthers::INHERIT:
            return "inherit";
        case RNCVideoMixWithOthers::MIX:
            return "mix";
        case RNCVideoMixWithOthers::DUCK:
            return "duck";
    }
}

enum class RNCVideoResizeMode { NONE, CONTAIN, COVER, STRETCH };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value, RNCVideoResizeMode &result)
{
    auto string = (std::string)value;
    if (string == "none") {
        result = RNCVideoResizeMode::NONE;
        return;
    }
    if (string == "contain") {
        result = RNCVideoResizeMode::CONTAIN;
        return;
    }
    if (string == "cover") {
        result = RNCVideoResizeMode::COVER;
        return;
    }
    if (string == "stretch") {
        result = RNCVideoResizeMode::STRETCH;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoResizeMode &value)
{
    switch (value) {
        case RNCVideoResizeMode::NONE:
            return "none";
        case RNCVideoResizeMode::CONTAIN:
            return "contain";
        case RNCVideoResizeMode::COVER:
            return "cover";
        case RNCVideoResizeMode::STRETCH:
            return "stretch";
    }
}
enum class RNCVideoSelectedAudioType { SYSTEM, DISABLED, TITLE, LANGUAGE, INDEX };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSelectedAudioType &result)
{
    auto string = (std::string)value;
    if (string == "system") {
        result = RNCVideoSelectedAudioType::SYSTEM;
        return;
    }
    if (string == "disabled") {
        result = RNCVideoSelectedAudioType::DISABLED;
        return;
    }
    if (string == "title") {
        result = RNCVideoSelectedAudioType::TITLE;
        return;
    }
    if (string == "language") {
        result = RNCVideoSelectedAudioType::LANGUAGE;
        return;
    }
    if (string == "index") {
        result = RNCVideoSelectedAudioType::INDEX;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoSelectedAudioType &value)
{
    switch (value) {
        case RNCVideoSelectedAudioType::SYSTEM:
            return "system";
        case RNCVideoSelectedAudioType::DISABLED:
            return "disabled";
        case RNCVideoSelectedAudioType::TITLE:
            return "title";
        case RNCVideoSelectedAudioType::LANGUAGE:
            return "language";
        case RNCVideoSelectedAudioType::INDEX:
            return "index";
    }
}
enum class RNCVideoSelectedTextType { SYSTEM, DISABLED, TITLE, LANGUAGE, INDEX };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSelectedTextType &result)
{
    auto string = (std::string)value;
    if (string == "system") {
        result = RNCVideoSelectedTextType::SYSTEM;
        return;
    }
    if (string == "disabled") {
        result = RNCVideoSelectedTextType::DISABLED;
        return;
    }
    if (string == "title") {
        result = RNCVideoSelectedTextType::TITLE;
        return;
    }
    if (string == "language") {
        result = RNCVideoSelectedTextType::LANGUAGE;
        return;
    }
    if (string == "index") {
        result = RNCVideoSelectedTextType::INDEX;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoSelectedTextType &value)
{
    switch (value) {
        case RNCVideoSelectedTextType::SYSTEM:
            return "system";
        case RNCVideoSelectedTextType::DISABLED:
            return "disabled";
        case RNCVideoSelectedTextType::TITLE:
            return "title";
        case RNCVideoSelectedTextType::LANGUAGE:
            return "language";
        case RNCVideoSelectedTextType::INDEX:
            return "index";
    }
}
enum class RNCVideoSelectedVideoType { AUTO, DISABLED, RESOLUTION, INDEX };

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSelectedVideoType &result)
{
    auto string = (std::string)value;
    if (string == "auto") {
        result = RNCVideoSelectedVideoType::AUTO;
        return;
    }
    if (string == "disabled") {
        result = RNCVideoSelectedVideoType::DISABLED;
        return;
    }
    if (string == "resolution") {
        result = RNCVideoSelectedVideoType::RESOLUTION;
        return;
    }
    if (string == "index") {
        result = RNCVideoSelectedVideoType::INDEX;
        return;
    }
    abort();
}

static inline std::string toString(const RNCVideoSelectedVideoType &value)
{
    switch (value) {
        case RNCVideoSelectedVideoType::AUTO:
            return "auto";
        case RNCVideoSelectedVideoType::DISABLED:
            return "disabled";
        case RNCVideoSelectedVideoType::RESOLUTION:
            return "resolution";
        case RNCVideoSelectedVideoType::INDEX:
            return "index";
    }
}
struct RNCVideoSrcRequestHeadersStruct {
    std::string key;
    std::string value;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSrcRequestHeadersStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_key = map.find("key");
    if (tmp_key != map.end()) {
        fromRawValue(context, tmp_key->second, result.key);
    }
    auto tmp_value = map.find("value");
    if (tmp_value != map.end()) {
        fromRawValue(context, tmp_value->second, result.value);
    }
}

static inline std::string toString(const RNCVideoSrcRequestHeadersStruct &value)
{
    return "[Object RNCVideoSrcRequestHeadersStruct]";
}

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                std::vector<RNCVideoSrcRequestHeadersStruct> &result)
{
    auto items = (std::vector<RawValue>)value;
    for (const auto &item : items) {
        RNCVideoSrcRequestHeadersStruct newItem;
        fromRawValue(context, item, newItem);
        result.emplace_back(newItem);
    }
}

struct RNCVideoSrcStruct {
    std::string uri;
    bool isNetwork;
    bool isAsset;
    bool shouldCache;
    std::string type;
    int mainVer;
    int patchVer;
    std::vector<RNCVideoSrcRequestHeadersStruct> requestHeaders;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value, RNCVideoSrcStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_uri = map.find("uri");
    if (tmp_uri != map.end()) {
        fromRawValue(context, tmp_uri->second, result.uri);
    }
    auto tmp_isNetwork = map.find("isNetwork");
    if (tmp_isNetwork != map.end()) {
        fromRawValue(context, tmp_isNetwork->second, result.isNetwork);
    }
    auto tmp_isAsset = map.find("isAsset");
    if (tmp_isAsset != map.end()) {
        fromRawValue(context, tmp_isAsset->second, result.isAsset);
    }
    auto tmp_shouldCache = map.find("shouldCache");
    if (tmp_shouldCache != map.end()) {
        fromRawValue(context, tmp_shouldCache->second, result.shouldCache);
    }
    auto tmp_type = map.find("type");
    if (tmp_type != map.end()) {
        fromRawValue(context, tmp_type->second, result.type);
    }
    auto tmp_mainVer = map.find("mainVer");
    if (tmp_mainVer != map.end()) {
        fromRawValue(context, tmp_mainVer->second, result.mainVer);
    }
    auto tmp_patchVer = map.find("patchVer");
    if (tmp_patchVer != map.end()) {
        fromRawValue(context, tmp_patchVer->second, result.patchVer);
    }
    auto tmp_requestHeaders = map.find("requestHeaders");
    if (tmp_requestHeaders != map.end()) {
        fromRawValue(context, tmp_requestHeaders->second, result.requestHeaders);
    }
}

static inline std::string toString(const RNCVideoSrcStruct &value)
{
    return "[Object RNCVideoSrcStruct]";
}

struct RNCVideoDrmHeadersStruct {
    std::string key;
    std::string value;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoDrmHeadersStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_key = map.find("key");
    if (tmp_key != map.end()) {
        fromRawValue(context, tmp_key->second, result.key);
    }
    auto tmp_value = map.find("value");
    if (tmp_value != map.end()) {
        fromRawValue(context, tmp_value->second, result.value);
    }
}

static inline std::string toString(const RNCVideoDrmHeadersStruct &value)
{
    return "[Object RNCVideoDrmHeadersStruct]";
}

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                std::vector<RNCVideoDrmHeadersStruct> &result)
{
    auto items = (std::vector<RawValue>)value;
    for (const auto &item : items) {
        RNCVideoDrmHeadersStruct newItem;
        fromRawValue(context, item, newItem);
        result.emplace_back(newItem);
    }
}

struct RNCVideoDrmStruct {
    RNCVideoDrmType drmType;
    std::string licenseServer;
    std::vector<RNCVideoDrmHeadersStruct> headers;
    std::string contentId;
    std::string certificateUrl;
    bool base64Certificate;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value, RNCVideoDrmStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_drmType = map.find("drmType");
    if (tmp_drmType != map.end()) {
        fromRawValue(context, tmp_drmType->second, result.drmType);
    }
    auto tmp_licenseServer = map.find("licenseServer");
    if (tmp_licenseServer != map.end()) {
        fromRawValue(context, tmp_licenseServer->second, result.licenseServer);
    }
    auto tmp_headers = map.find("headers");
    if (tmp_headers != map.end()) {
        fromRawValue(context, tmp_headers->second, result.headers);
    }
    auto tmp_contentId = map.find("contentId");
    if (tmp_contentId != map.end()) {
        fromRawValue(context, tmp_contentId->second, result.contentId);
    }
    auto tmp_certificateUrl = map.find("certificateUrl");
    if (tmp_certificateUrl != map.end()) {
        fromRawValue(context, tmp_certificateUrl->second, result.certificateUrl);
    }
    auto tmp_base64Certificate = map.find("base64Certificate");
    if (tmp_base64Certificate != map.end()) {
        fromRawValue(context, tmp_base64Certificate->second, result.base64Certificate);
    }
}

static inline std::string toString(const RNCVideoDrmStruct &value)
{
    return "[Object RNCVideoDrmStruct]";
}

struct RNCVideoBufferConfigStruct {
    Float minBufferMs;
    Float maxBufferMs;
    Float bufferForPlaybackMs;
    Float bufferForPlaybackAfterRebufferMs;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoBufferConfigStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_minBufferMs = map.find("minBufferMs");
    if (tmp_minBufferMs != map.end()) {
        fromRawValue(context, tmp_minBufferMs->second, result.minBufferMs);
    }
    auto tmp_maxBufferMs = map.find("maxBufferMs");
    if (tmp_maxBufferMs != map.end()) {
        fromRawValue(context, tmp_maxBufferMs->second, result.maxBufferMs);
    }
    auto tmp_bufferForPlaybackMs = map.find("bufferForPlaybackMs");
    if (tmp_bufferForPlaybackMs != map.end()) {
        fromRawValue(context, tmp_bufferForPlaybackMs->second, result.bufferForPlaybackMs);
    }
    auto tmp_bufferForPlaybackAfterRebufferMs = map.find("bufferForPlaybackAfterRebufferMs");
    if (tmp_bufferForPlaybackAfterRebufferMs != map.end()) {
        fromRawValue(context, tmp_bufferForPlaybackAfterRebufferMs->second, result.bufferForPlaybackAfterRebufferMs);
    }
}

static inline std::string toString(const RNCVideoBufferConfigStruct &value)
{
    return "[Object RNCVideoBufferConfigStruct]";
}

struct RNCVideoSelectedAudioTrackStruct {
    RNCVideoSelectedAudioType selectedAudioType;
    std::string value;
    int index;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSelectedAudioTrackStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_selectedAudioType = map.find("selectedAudioType");
    if (tmp_selectedAudioType != map.end()) {
        fromRawValue(context, tmp_selectedAudioType->second, result.selectedAudioType);
    }
    auto tmp_value = map.find("value");
    if (tmp_value != map.end()) {
        fromRawValue(context, tmp_value->second, result.value);
    }
    auto tmp_index = map.find("index");
    if (tmp_index != map.end()) {
        fromRawValue(context, tmp_index->second, result.index);
    }
}

static inline std::string toString(const RNCVideoSelectedAudioTrackStruct &value)
{
    return "[Object RNCVideoSelectedAudioTrackStruct]";
}

struct RNCVideoSelectedTextTrackStruct {
    RNCVideoSelectedTextType selectedTextType;
    std::string value;
    int index;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSelectedTextTrackStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_selectedTextType = map.find("selectedTextType");
    if (tmp_selectedTextType != map.end()) {
        fromRawValue(context, tmp_selectedTextType->second, result.selectedTextType);
    }
    auto tmp_value = map.find("value");
    if (tmp_value != map.end()) {
        fromRawValue(context, tmp_value->second, result.value);
    }
    auto tmp_index = map.find("index");
    if (tmp_index != map.end()) {
        fromRawValue(context, tmp_index->second, result.index);
    }
}

static inline std::string toString(const RNCVideoSelectedTextTrackStruct &value)
{
    return "[Object RNCVideoSelectedTextTrackStruct]";
}

struct RNCVideoSelectedVideoTrackStruct {
    RNCVideoSelectedVideoType selectedVideoType;
    std::string value;
    int index;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoSelectedVideoTrackStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_selectedVideoType = map.find("selectedVideoType");
    if (tmp_selectedVideoType != map.end()) {
        fromRawValue(context, tmp_selectedVideoType->second, result.selectedVideoType);
    }
    auto tmp_value = map.find("value");
    if (tmp_value != map.end()) {
        fromRawValue(context, tmp_value->second, result.value);
    }
    auto tmp_index = map.find("index");
    if (tmp_index != map.end()) {
        fromRawValue(context, tmp_index->second, result.index);
    }
}

static inline std::string toString(const RNCVideoSelectedVideoTrackStruct &value)
{
    return "[Object RNCVideoSelectedVideoTrackStruct]";
}

struct RNCVideoTextTracksStruct {
    std::string title;
    std::string language;
    std::string type;
    std::string uri;
};

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                RNCVideoTextTracksStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;

    auto tmp_title = map.find("title");
    if (tmp_title != map.end()) {
        fromRawValue(context, tmp_title->second, result.title);
    }
    auto tmp_language = map.find("language");
    if (tmp_language != map.end()) {
        fromRawValue(context, tmp_language->second, result.language);
    }
    auto tmp_type = map.find("type");
    if (tmp_type != map.end()) {
        fromRawValue(context, tmp_type->second, result.type);
    }
    auto tmp_uri = map.find("uri");
    if (tmp_uri != map.end()) {
        fromRawValue(context, tmp_uri->second, result.uri);
    }
}

static inline std::string toString(const RNCVideoTextTracksStruct &value)
{
    return "[Object RNCVideoTextTracksStruct]";
}

static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
                                std::vector<RNCVideoTextTracksStruct> &result)
{
    auto items = (std::vector<RawValue>)value;
    for (const auto &item : items) {
        RNCVideoTextTracksStruct newItem;
        fromRawValue(context, item, newItem);
        result.emplace_back(newItem);
    }
}

class JSI_EXPORT RNCVideoProps final : public ViewProps {
public:
    RNCVideoProps() = default;
    RNCVideoProps(const PropsParserContext &context, const RNCVideoProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

    RNCVideoSrcStruct src{};
    RNCVideoDrmStruct drm{};
    bool allowsExternalPlayback{false};
    bool automaticallyWaitsToMinimizeStalling{false};
    RNCVideoBufferConfigStruct bufferConfig{};
    bool controls{false};
    double currentPlaybackTime{0.0};
    bool disableFocus{false};
    RNCVideoFilter filter{RNCVideoFilter::NONE};
    bool filterEnabled{false};
    bool fullscreen{false};
    bool fullscreenAutorotate{false};
    RNCVideoFullscreenOrientation fullscreenOrientation{RNCVideoFullscreenOrientation::ALL};
    bool hideShutterView{false};
    RNCVideoIgnoreSilentSwitch ignoreSilentSwitch{RNCVideoIgnoreSilentSwitch::INHERIT};
    Float maxBitRate{0.0};
    int minLoadRetryCount{0};
    RNCVideoMixWithOthers mixWithOthers{RNCVideoMixWithOthers::INHERIT};
    bool muted{false};
    bool paused{false};
    bool pictureInPicture{false};
    bool playInBackground{false};
    bool playWhenInactive{false};
    Float preferredForwardBufferDuration{0.0};
    bool preventsDisplaySleepDuringVideoPlayback{true};
    Float progressUpdateInterval{0.0};
    Float rate{0.0};
    bool repeat{false};
    bool reportBandwidth{false};
    RNCVideoResizeMode resizeMode{RNCVideoResizeMode::NONE};
    // std::string resizeMode{};
    RNCVideoSelectedAudioTrackStruct selectedAudioTrack{};
    RNCVideoSelectedTextTrackStruct selectedTextTrack{};
    RNCVideoSelectedVideoTrackStruct selectedVideoTrack{};
    Float stereoPan{0.0};
    std::vector<RNCVideoTextTracksStruct> textTracks{};
    std::string trackId{};
    bool useTextureView{false};
    Float volume{1.0};
    bool restoreUserInterfaceForPIPStopCompletionHandler{false};
};

} // namespace react
} // namespace facebook