//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBPPPConnection : NSObject
{
    struct __SCNetworkConnection *_scRef;
    BOOL _cancelled;
}

- (void)cancel;
- (void)connectionWillEnd:(id)arg1;
- (BOOL)isStillConnected;
- (BOOL)connectionShouldBegin:(id)arg1;

@end

