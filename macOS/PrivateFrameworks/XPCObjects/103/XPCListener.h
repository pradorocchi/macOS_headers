//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface XPCListener : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_incomingConnectionQueue;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    int _internalRetainCount;
    long long _selfInvalidationToken;
}

+ (id)alloc;
- (void)invalidateThen:(CDUnknownBlockType)arg1;
- (id)endpoint;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (id)initWithName:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;

@end

