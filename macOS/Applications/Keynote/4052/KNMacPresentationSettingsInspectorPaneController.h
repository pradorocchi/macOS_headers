//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSNumberFormatter;

@interface KNMacPresentationSettingsInspectorPaneController : TMAInspectorPaneController
{
    NSNumberFormatter *_idleTimerDelayFormatter;
}

+ (id)nibName;
@property(retain, nonatomic) NSNumberFormatter *idleTimerDelayFormatter; // @synthesize idleTimerDelayFormatter=_idleTimerDelayFormatter;
- (void)loadView;
- (void)dealloc;

@end

