//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputContextCommunicationChannelImpl-Protocol.h>

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel, AVWeakReference, NSString;

@interface AVFigEndpointRemoteControlSessionOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl>
{
    struct OpaqueFigEndpointRemoteControlSession *_remoteControlSession;
    AVWeakReference *_weakObserver;
    AVOutputContextCommunicationChannel *_parentCommunicationChannel;
    AVFigRoutingContextOutputContextImpl *_parentOutputContextImpl;
    void *_callbackContextToken;
}

@property __weak AVFigRoutingContextOutputContextImpl *parentOutputContextImpl; // @synthesize parentOutputContextImpl=_parentOutputContextImpl;
@property __weak AVOutputContextCommunicationChannel *parentCommunicationChannel; // @synthesize parentCommunicationChannel=_parentCommunicationChannel;
@property(readonly, nonatomic) struct OpaqueFigEndpointRemoteControlSession *remoteControlSession; // @synthesize remoteControlSession=_remoteControlSession;
- (void).cxx_destruct;
- (void)_serverConnectionDied;
- (void)_didClose;
- (void)_didReceiveData:(id)arg1;
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)open;
- (void)dealloc;
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

