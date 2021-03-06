//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSWindow;

@interface _NSWindowTransformAnimation : NSAnimation
{
    NSWindow *_window;
    NSWindow *_originalWindow;
    NSWindow *_originalParentWindow;
    double _currentAnimationAlpha;
    unsigned long long _type;
    struct CGPoint _startPoint;
    struct CGPoint _anchorPoint;
    struct CGRect _originalWindowFrame;
    CDUnknownBlockType _completionBlock;
    double _scaleAmount;
    unsigned int _animateAlpha:1;
    unsigned int _windowTransformAnimationReservedFlags:31;
}

+ (id)windowTransformAnimationWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3;
+ (void)waitForAnimationToCompleteOnWindows:(id)arg1 forFullScreen:(BOOL)arg2;
+ (id)_originalDocumentWindowForWindow:(id)arg1;
+ (void)endDocumentWindowDuplication;
+ (void)beginDocumentWindowDuplicationForOriginalDocument:(id)arg1;
+ (BOOL)isRestoringPersistentWindows;
+ (void)endPersistentUIWindowRestoring;
+ (void)beginPersistentUIWindowRestoring;
+ (BOOL)isDuplicatingADocumentWindow;
+ (void)endNewDocumentWindowCreation;
+ (void)beginNewDocumentWindowCreation;
@property struct CGPoint normalizedAnchorPoint; // @synthesize normalizedAnchorPoint=_anchorPoint;
@property struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly) double currentAnimationAlpha; // @synthesize currentAnimationAlpha=_currentAnimationAlpha;
- (void)dealloc;
- (void)_duplicateAnimationStopped;
- (void)_stopAnimation:(int)arg1 withDisplayLink:(id)arg2;
- (void)_cleanUpAnimation;
- (void)setCurrentProgress:(float)arg1;
- (void)startAnimation;
- (id)_stringForAnimationType;
@property(readonly) NSWindow *window;
- (void)setWindowShakeProgress:(double)arg1;
- (void)setWindowFallOutTranslationProgress:(double)arg1;
- (void)setWindowFlyInTranslationProgress:(double)arg1;
- (void)setWindowMagnification:(double)arg1 forProgress:(double)arg2;
- (void)setAnimationAlphaValue:(double)arg1;
- (BOOL)isOrderOutAnimation;
- (BOOL)isOrderFrontAnimation;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(setter=_setAnimatesAlpha:) BOOL _animatesAlpha;
@property struct CGPoint anchorPoint;
@property(setter=_setScaleAmount:) double _scaleAmount;
- (id)initWithWindow:(id)arg1 type:(long long)arg2 interruptingAnimation:(id)arg3;
- (id)_screen;

@end

