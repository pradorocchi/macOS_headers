//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXVideoScrubberControllerTarget-Protocol.h>

@class AVPlayer, NSString;

@interface PXSimpleVideoScrubberControllerTarget : NSObject <PXVideoScrubberControllerTarget>
{
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType durationChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    AVPlayer *_videoPlayer;
}

@property(readonly, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(copy, nonatomic) CDUnknownBlockType playerItemChangeHandler; // @synthesize playerItemChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType durationChangeHandler; // @synthesize durationChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler;
- (void).cxx_destruct;
- (void)cancelPendingSeeks;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)removeTimeObserver:(id)arg1;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (long long)playerStatus;
- (id)playerItem;
- (float)playRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithVideoPlayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

