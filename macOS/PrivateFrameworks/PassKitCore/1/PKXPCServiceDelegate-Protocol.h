//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSXPCConnection, PKXPCService;

@protocol PKXPCServiceDelegate <NSObject>
- (void)remoteService:(PKXPCService *)arg1 didInterruptConnection:(NSXPCConnection *)arg2;
- (void)remoteService:(PKXPCService *)arg1 didEstablishConnection:(NSXPCConnection *)arg2;

@optional
- (void)remoteServiceDidSuspend:(PKXPCService *)arg1;
- (void)remoteServiceDidResume:(PKXPCService *)arg1;
@end

