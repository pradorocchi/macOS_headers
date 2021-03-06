//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSAScriptController;

@interface OSARecordingController : NSObject
{
    OSAScriptController *_controller;
    unsigned int _recordedScript;
}

+ (id)sharedRecordingController;
- (void)stopRecordingForController:(id)arg1;
- (void)startRecordingForController:(id)arg1;
- (void)handleRecordedTextAppleEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)setController:(id)arg1;
- (id)controller;
- (void)dealloc;
- (id)init;

@end

