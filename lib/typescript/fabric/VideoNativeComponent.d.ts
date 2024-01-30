/// <reference types="react" />
import type { HostComponent, ViewProps } from 'react-native';
import type { Float, Int32, WithDefault, DirectEventHandler, Double } from 'react-native/Libraries/Types/CodegenTypes';
declare type Headers = ReadonlyArray<Readonly<{
    key: string;
    value: string;
}>>;
declare type VideoSrc = Readonly<{
    uri?: string;
    isNetwork?: boolean;
    isAsset?: boolean;
    shouldCache?: boolean;
    type?: string;
    mainVer?: Int32;
    patchVer?: Int32;
    requestHeaders?: Headers;
}>;
export declare type DrmType = WithDefault<'widevine' | 'playready' | 'clearkey' | 'fairplay', 'widevine'>;
declare type Drm = Readonly<{
    drmType?: DrmType;
    licenseServer?: string;
    headers?: Headers;
    contentId?: string;
    certificateUrl?: string;
    base64Certificate?: boolean;
}>;
declare type TextTracks = ReadonlyArray<Readonly<{
    title: string;
    language: string;
    type: string;
    uri: string;
}>>;
declare type AudioTrackType = WithDefault<'system' | 'disabled' | 'title' | 'language' | 'index', 'system'>;
declare type SelectedAudioTrack = Readonly<{
    selectedAudioType?: AudioTrackType;
    value?: string;
    index?: Int32;
}>;
declare type TextTrackType = WithDefault<'system' | 'disabled' | 'title' | 'language' | 'index', 'system'>;
declare type SelectedTextTrack = Readonly<{
    selectedTextType?: TextTrackType;
    value?: string;
    index?: Int32;
}>;
declare type VideoTrackType = WithDefault<'auto' | 'disabled' | 'resolution' | 'index', 'auto'>;
declare type SelectedVideoTrack = Readonly<{
    selectedVideoType?: VideoTrackType;
    value?: string;
    index?: Int32;
}>;
export declare type Seek = Readonly<{
    time: Float;
    tolerance?: Float;
}>;
export declare type OnLoadStartData = Readonly<{
    isNetwork: boolean;
    type: string;
    uri: string;
}>;
declare type audioTracksData = ReadonlyArray<Readonly<{
    index?: Int32;
    title?: string;
    language?: string;
    type?: string;
}>>;
declare type videoTracksData = ReadonlyArray<Readonly<{
    trackId?: Int32;
    bitrate?: Float;
    codecs?: string;
    type?: string;
    height?: Float;
    width?: Float;
}>>;
declare type _OnLoadData = Readonly<{}>;
export declare type OnLoadData = Readonly<{
    currentPosition: Float;
    duration: Float;
    naturalSize: Readonly<{
        width: Float;
        height: Float;
        orientation: string;
    }>;
    audioTracks: audioTracksData;
    textTracks: audioTracksData;
    videoTracks: videoTracksData;
}>;
export declare type OnVideoErrorData = Readonly<{
    error: string;
}>;
export declare type OnProgressData = Readonly<{
    currentTime: Float;
    playableDuration: Float;
    seekableDuration: Float;
}>;
export declare type OnSeekData = Readonly<{
    currentTime: Float;
    seekTime: Float;
}>;
export declare type OnBufferData = Readonly<{
    isBuffering: boolean;
}>;
export declare type OnBandwidthUpdateData = Readonly<{
    bitrate: Float;
}>;
export declare type OnExternalPlaybackChangeData = Readonly<{
    isExternalPlaybackActive: boolean;
}>;
declare type _OnTimedMetadataData = Readonly<{}>;
export declare type OnTimedMetadataData = Readonly<{
    metadata: ReadonlyArray<Readonly<{
        value?: string;
        identifier?: string;
    }>>;
}>;
export declare type OnPlaybackData = Readonly<{
    playbackRate: Float;
}>;
export declare type OnAudioFocusChangedData = Readonly<{
    hasFocus: boolean;
}>;
export declare type OnGetLicenseData = Readonly<{
    licenseUrl: string;
    contentId: string;
    spcBase64: string;
}>;
export declare type OnPictureInPictureStatusChangedData = Readonly<{
    isActive: boolean;
}>;
declare type BufferConfig = Readonly<{
    minBufferMs?: Float;
    maxBufferMs?: Float;
    bufferForPlaybackMs?: Float;
    bufferForPlaybackAfterRebufferMs?: Float;
}>;
export declare type Filter = WithDefault<'None' | 'CIColorInvert' | 'CIColorMonochrome' | 'CIColorPosterize' | 'CIFalseColor' | 'CIMaximumComponent' | 'CIMinimumComponent' | 'CIPhotoEffectChrome' | 'CIPhotoEffectFade' | 'CIPhotoEffectInstant' | 'CIPhotoEffectMono' | 'CIPhotoEffectNoir' | 'CIPhotoEffectProcess' | 'CIPhotoEffectTonal' | 'CIPhotoEffectTransfer' | 'CISepiaTone', 'None'>;
export interface VideoNativeProps extends ViewProps {
    src: VideoSrc;
    drm?: Drm;
    allowsExternalPlayback?: boolean;
    automaticallyWaitsToMinimizeStalling?: boolean;
    bufferConfig?: BufferConfig;
    controls?: boolean;
    currentPlaybackTime?: Double;
    disableFocus?: boolean;
    filter?: Filter;
    filterEnabled?: boolean;
    fullscreen?: boolean;
    fullscreenAutorotate?: boolean;
    fullscreenOrientation?: WithDefault<'all' | 'landscape' | 'portrait', 'all'>;
    hideShutterView?: boolean;
    ignoreSilentSwitch?: WithDefault<'inherit' | 'ignore' | 'obey', 'inherit'>;
    maxBitRate?: Float;
    minLoadRetryCount?: Int32;
    mixWithOthers?: WithDefault<'inherit' | 'mix' | 'duck', 'inherit'>;
    muted?: boolean;
    paused?: boolean;
    pictureInPicture?: boolean;
    playInBackground?: boolean;
    playWhenInactive?: boolean;
    preferredForwardBufferDuration?: Float;
    preventsDisplaySleepDuringVideoPlayback?: boolean;
    progressUpdateInterval?: Float;
    rate?: Float;
    repeat?: boolean;
    reportBandwidth?: boolean;
    resizeMode?: WithDefault<'none' | 'contain' | 'cover' | 'stretch', 'none'>;
    selectedAudioTrack?: SelectedAudioTrack;
    selectedTextTrack?: SelectedTextTrack;
    selectedVideoTrack?: SelectedVideoTrack;
    stereoPan?: Float;
    textTracks?: TextTracks;
    trackId?: string;
    useTextureView?: boolean;
    volume?: Float;
    restoreUserInterfaceForPIPStopCompletionHandler?: boolean;
    onVideoAudioBecomingNoisy?: DirectEventHandler<Readonly<{}>>;
    onBandwidthUpdate?: DirectEventHandler<OnBandwidthUpdateData>;
    onVideoEnd?: DirectEventHandler<Readonly<{}>>;
    onVideoExternalPlaybackChange?: DirectEventHandler<OnExternalPlaybackChangeData>;
    onVideoFullscreenPlayerWillPresent?: DirectEventHandler<Readonly<{}>>;
    onVideoFullscreenPlayerDidPresent?: DirectEventHandler<Readonly<{}>>;
    onVideoFullscreenPlayerWillDismiss?: DirectEventHandler<Readonly<{}>>;
    onVideoFullscreenPlayerDidDismiss?: DirectEventHandler<Readonly<{}>>;
    onVideoLoad?: DirectEventHandler<_OnLoadData>;
    onVideoLoadStart?: DirectEventHandler<OnLoadStartData>;
    onReadyForDisplay?: DirectEventHandler<Readonly<{}>>;
    onPictureInPictureStatusChanged?: DirectEventHandler<OnPictureInPictureStatusChangedData>;
    onPlaybackRateChange?: DirectEventHandler<OnPlaybackData>;
    onVideoProgress?: DirectEventHandler<OnProgressData>;
    onVideoSeek?: DirectEventHandler<OnSeekData>;
    onRestoreUserInterfaceForPictureInPictureStop?: DirectEventHandler<Readonly<{}>>;
    onTimedMetadata?: DirectEventHandler<_OnTimedMetadataData>;
    onVideoError?: DirectEventHandler<OnVideoErrorData>;
    onVideoBuffer?: DirectEventHandler<OnBufferData>;
    onPlaybackStalled?: DirectEventHandler<Readonly<{}>>;
    onPlaybackResume?: DirectEventHandler<Readonly<{}>>;
    onAudioFocusChanged?: DirectEventHandler<OnAudioFocusChangedData>;
    onGetLicense?: DirectEventHandler<OnGetLicenseData>;
}
export declare type VideoComponentType = HostComponent<VideoNativeProps>;
export interface NativeCommands {
    save: (viewRef: React.ElementRef<VideoComponentType>) => void;
    seek: (viewRef: React.ElementRef<VideoComponentType>, time: Float, tolerance?: Float) => void;
}
export declare const Commands: NativeCommands;
declare const _default: VideoComponentType;
export default _default;
//# sourceMappingURL=VideoNativeComponent.d.ts.map