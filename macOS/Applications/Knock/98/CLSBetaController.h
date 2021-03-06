//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSBetaClient, CLSBetaUpdate, CLSSettings, NSTimer;

@interface CLSBetaController : NSObject
{
    CLSBetaClient *_client;
    CLSBetaUpdate *_update;
    CLSSettings *_settings;
    NSTimer *_checkSuspensionTimer;
    BOOL _checksSuspended;
    BOOL _retrying;
    struct dispatch_queue_s *_queue;
}

@property(retain, nonatomic) CLSSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) CLSBetaClient *betaClient; // @synthesize betaClient=_client;
- (void)didGetUpdate:(id)arg1;
- (BOOL)shouldGetUpdates;
- (id)appInfoDictionary;
- (void)applicationWillEnterForeground;
- (void)allowChecks;
- (void)temporarilySuspendChecks;
- (void)maybeGetUpdate:(CDUnknownBlockType)arg1;
- (void)checkForUpdate;
- (void)dealloc;
- (id)init;

@end

