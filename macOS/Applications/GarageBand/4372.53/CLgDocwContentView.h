//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

@class CLgFocusRingWindow;

@interface CLgDocwContentView : MAKitView
{
    CLgFocusRingWindow *m_focusRingWindow;
}

- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawWindowBackgroundRect:(struct CGRect)arg1;
- (void)setFocusRingRect:(struct CGRect)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)focusRingWindow;
- (id)addFocusRingWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityChildrenAttribute;

@end

