//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPMediaPlayer-Protocol.h>
#import <LinkPresentation/NSGestureRecognizerDelegate-Protocol.h>

@class LPImage, LPImageViewStyle, LPStatisticsTimingToken, LPVideo, LPVideoViewStyle, NSImageView, NSString, NSView;

__attribute__((visibility("hidden")))
@interface LPVideoView : LPComponentView <NSGestureRecognizerDelegate, LPMediaPlayer>
{
    LPVideo *_video;
    LPVideoViewStyle *_style;
    LPImage *_posterFrame;
    LPImageViewStyle *_posterFrameStyle;
    NSView *_playButtonContainerView;
    NSView *_playButtonView;
    NSView *_muteButtonContainerView;
    NSImageView *_muteButtonView;
    NSView *_videoPlaceholderView;
    NSView *_visualEffectView;
    NSView *_pulsingLoadView;
    NSView *_containerView;
    LPStatisticsTimingToken *_playbackDelayTimingToken;
    BOOL _playing;
    BOOL _hasBuilt;
    BOOL _hasCreatedVideoView;
    BOOL _wasPlayingOrWaitingToPlayWhenUnparented;
    BOOL _wasPlayingWhenSuspended;
    BOOL _disablePlayback;
    BOOL _fullScreen;
    BOOL _showingPlayButton;
    unsigned long long _lastInteractionTimestamp;
    BOOL _usesSharedAudioSession;
    BOOL _waitingForPlayback;
    BOOL _hasEverPlayed;
    double _volume;
}

@property(readonly, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL hasEverPlayed; // @synthesize hasEverPlayed=_hasEverPlayed;
@property(nonatomic, getter=isFullScreen) BOOL fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isWaitingForPlayback) BOOL waitingForPlayback; // @synthesize waitingForPlayback=_waitingForPlayback;
@property(readonly, nonatomic) BOOL usesSharedAudioSession; // @synthesize usesSharedAudioSession=_usesSharedAudioSession;
- (void).cxx_destruct;
@property(nonatomic, getter=isActive) BOOL active;
- (void)_muteButtonTapRecognized:(id)arg1;
- (void)_muteButtonHighlightLongPressRecognized:(id)arg1;
- (void)tapRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_buildVideoPlaceholderView;
- (id)_createPosterFrameView;
@property(nonatomic, getter=isMuted) BOOL muted;
@property(readonly, nonatomic) BOOL isMuted;
@property(readonly, nonatomic) BOOL shouldShowMuteButton;
- (void)fadeInMuteButton;
- (void)hideMuteButton;
- (void)showMuteButton;
- (void)hidePlayButtonAnimated:(BOOL)arg1;
- (void)showPlayButtonAnimated:(BOOL)arg1;
- (void)setShowPlayButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)didChangeMutedState:(BOOL)arg1;
- (void)updateMuteButtonImage;
- (void)didEncounterPlaybackError;
- (void)didChangePlayingState:(BOOL)arg1;
- (void)removePlaceholderViews;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createVideoPlayerView;
- (void)userInteractedWithVideoView;
@property(readonly, nonatomic) double unobscuredAreaFraction;
@property(readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property(readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic) BOOL isPlaying;
- (void)_swapVideoPlaceholderForVideoForAutoPlay:(BOOL)arg1;
- (id)_createPulsingLoadIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
@property(readonly, nonatomic) BOOL shouldAutoPlay;
- (void)componentViewDidMoveToWindow;
- (BOOL)isParented;
- (void)dealloc;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 disablePlayback:(BOOL)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

