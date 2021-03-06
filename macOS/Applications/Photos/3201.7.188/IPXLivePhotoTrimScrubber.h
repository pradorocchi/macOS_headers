//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVAsset, AVVideoComposition, IPXLivePhotoTrimScrubberLoupeView, IPXVideoThumbStripView, NSImage, NSImageView, NSPopover, NSPressGestureRecognizer, NSString, _IPXLivePhotoTrimScrubberDot;
@protocol IPXLivePhotoTrimScrubberDelegate;

@interface IPXLivePhotoTrimScrubber : NSView
{
    NSView *_trackContainerView;
    IPXVideoThumbStripView *_trackView;
    NSView *_preTrimOverlayView;
    NSView *_postTrimOverlayView;
    NSView *_overlayContainerView;
    IPXLivePhotoTrimScrubberLoupeView *_photoLoupe;
    _IPXLivePhotoTrimScrubberDot *_photoMarker;
    _IPXLivePhotoTrimScrubberDot *_keyFrameMarker;
    NSView *_disableOverlayView;
    NSPressGestureRecognizer *_pressGesture;
    struct {
        char respondsToDidBeginInteractivelyEditingElement;
        char respondsToDidEndInteractivelyEditingElement;
        char respondsToDidChangeTimeForElement;
        char respondsToAssetDurationDidChange;
    } _delegateFlags;
    long long _photoLoupeHideRequestCounter;
    long long _trimControlsHideRequestCounter;
    BOOL _hasPresentedControls;
    NSString *_versionUUID;
    CDStruct_1b6d18a9 _photoTime;
    NSPopover *_keyTimePopover;
    NSImageView *_trimControlView;
    CDStruct_1b6d18a9 _minimumTrimLength;
    NSImage *_trimImage;
    NSImage *_trimHighlightedImage;
    CDStruct_1b6d18a9 _photoBufferTime;
    BOOL _enabled;
    BOOL __photoLoupeHidden;
    BOOL __trimControlsHidden;
    struct CGImage *_placeholder;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    id <IPXLivePhotoTrimScrubberDelegate> _delegate;
    double __contentAspectRatio;
    long long __trackingElement;
    CDStruct_1b6d18a9 _untrimmedDuration;
    CDStruct_1b6d18a9 _scrubTime;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_1b6d18a9 _trimEndTime;
    CDStruct_1b6d18a9 _trimStartTime;
}

@property(nonatomic, getter=_areTrimControlsHidden, setter=_setTrimControlsHidden:) BOOL _trimControlsHidden; // @synthesize _trimControlsHidden=__trimControlsHidden;
@property(nonatomic, getter=_isPhotoLoupeHidden, setter=_setPhotoLoupeHidden:) BOOL _photoLoupeHidden; // @synthesize _photoLoupeHidden=__photoLoupeHidden;
@property(nonatomic, setter=_setTrackingElement:) long long _trackingElement; // @synthesize _trackingElement=__trackingElement;
@property(nonatomic, setter=_setContentAspectRatio:) double _contentAspectRatio; // @synthesize _contentAspectRatio=__contentAspectRatio;
@property(nonatomic) __weak id <IPXLivePhotoTrimScrubberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_1b6d18a9 trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(nonatomic) CDStruct_1b6d18a9 trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 scrubTime; // @synthesize scrubTime=_scrubTime;
@property(nonatomic, setter=_setUntrimmedDuration:) CDStruct_1b6d18a9 untrimmedDuration; // @synthesize untrimmedDuration=_untrimmedDuration;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) struct CGImage *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_trimHandleDidReachBounds;
- (void)_presentControlsIfNeeded;
- (void)_setTrimControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 withRequstID:(long long)arg3;
- (void)_setTrimControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3;
- (void)_setTrimControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setPhotoLoupeHidden:(BOOL)arg1 animated:(BOOL)arg2 withRequstID:(long long)arg3;
- (void)_setPhotoLoupeHidden:(BOOL)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3;
- (void)_setPhotoLoupeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateContentAspectRatio;
- (void)_assetDidLoadValues;
- (void)_commitKeyTime:(id)arg1;
- (void)_handleEndGesture;
- (void)_updateTrimHandles;
- (void)_handleChangeGesture:(id)arg1;
- (void)_handleBeginGesture:(id)arg1;
- (void)_handlePress:(id)arg1;
- (CDStruct_1b6d18a9)_timeAtPoint:(struct CGPoint)arg1;
- (double)_timeOffsetForPhotoTime:(CDStruct_1b6d18a9)arg1;
- (double)_endTimeOffset;
- (double)_startTimeOffset;
- (double)_offsetForTime:(CDStruct_1b6d18a9)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_IPXLivePhotoTrimScrubber_commonInit;
- (void)updatePlaceholderWithVersion:(id)arg1;
@property(readonly, nonatomic) long long currentlyInteractingElement;
@property(readonly, nonatomic, getter=isAssetDurationLoaded) BOOL assetDurationLoaded;
@property(readonly, nonatomic, getter=isTrimmed) BOOL trimmed;
- (void)_setScrubTime:(CDStruct_1b6d18a9)arg1;
- (void)_loadVersion:(id)arg1 scrubTime:(CDStruct_1b6d18a9)arg2;
- (void)loadLivePhotoView:(id)arg1 keyFrameTime:(CDStruct_1b6d18a9)arg2 forVersion:(id)arg3;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

