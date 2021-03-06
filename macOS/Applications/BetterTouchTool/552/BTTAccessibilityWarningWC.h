//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString, NSTabView, NSTimer;

__attribute__((visibility("hidden")))
@interface BTTAccessibilityWarningWC : NSWindowController <NSWindowDelegate>
{
    NSTimer *_accessibilityTimer;
    NSTabView *_tabView;
}

+ (id)accessibilityWarningWC;
@property __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSTimer *accessibilityTimer; // @synthesize accessibilityTimer=_accessibilityTimer;
- (void).cxx_destruct;
- (void)showAccessibilityDocumentation:(id)arg1;
- (void)closeWindowWithMessage:(id)arg1;
- (void)openAccessibilityPane:(id)arg1;
- (void)startUsingBTT:(id)arg1;
- (void)enableAccessibilityPreMavericks:(id)arg1;
- (void)accessibilityChanged;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

