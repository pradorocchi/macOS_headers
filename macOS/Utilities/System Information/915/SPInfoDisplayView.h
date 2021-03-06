//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPInfoView.h"

@class NSButton, NSScrollView, NSTextField, NSView;

@interface SPInfoDisplayView : SPInfoView
{
    NSTextField *_noDisplaysText;
    NSScrollView *_viewScroller;
    NSView *_viewHolder;
    NSButton *_displayPrefsButton;
    struct os_unfair_lock_s _threadLock;
}

+ (id)createFromNib;
- (void)launchDisplayPrefs:(id)arg1;
- (void)dealloc;
- (void)loadData;
- (void)updateDisplayNotification:(id)arg1;
- (void)updateDisplay:(id)arg1;

@end

