//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "MAIdleCallback-Protocol.h"

@protocol MAAssetManagerProtocol><MAAssetManagerFilterProtocol><MAAssetManagerColorProtocol><MAAssetManagerFontProtocol><MAAssetManagerEditorProtocol><MAAssetManagerDebugProtocol;

@interface CLgMasterLevelMeter : NSView <MAIdleCallback>
{
    id <MAAssetManagerProtocol><MAAssetManagerFilterProtocol><MAAssetManagerColorProtocol><MAAssetManagerFontProtocol><MAAssetManagerEditorProtocol><MAAssetManagerDebugProtocol> _am;
    BOOL _enabled;
}

@property BOOL enabled; // @synthesize enabled=_enabled;
- (void)viewDidMoveToWindow;
- (void)idleCallback;
- (void)drawRect:(struct CGRect)arg1;
- (struct CInstAudio *)outInst:(int *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

