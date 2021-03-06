//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSMutableArray, NSNetServiceBrowser, NSString, NSThread;

@interface SPTZeldaBonjourManager : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    shared_ptr_7329d052 _gaiaManager;
    shared_ptr_598bf325 _session;
    struct scoped_connection _login_mode_connection;
    struct scoped_connection _discover_connection;
    BOOL _searchingForDevices;
    BOOL _offline;
    BOOL _threadRunning;
    NSMutableArray *_services;
    NSNetServiceBrowser *_netServiceBrowser;
    NSThread *_thread;
}

@property BOOL threadRunning; // @synthesize threadRunning=_threadRunning;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) BOOL offline; // @synthesize offline=_offline;
@property(nonatomic) BOOL searchingForDevices; // @synthesize searchingForDevices=_searchingForDevices;
@property(retain, nonatomic) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)removeDeviceWithServiceInfo:(id)arg1;
- (void)addDeviceWithServiceInfo:(id)arg1;
- (void)stopService:(id)arg1;
- (void)resolve:(id)arg1;
- (void)offlineModeUpdate:(id)arg1;
- (void)reset;
- (shared_ptr_7329d052)cpp;
- (void)removeAllBonjourDevices;
- (BOOL)searchForDevices;
- (void)shutDown;
- (void)dealloc;
- (void)threadProc:(id)arg1;
- (id)initWithGaiaManager:(shared_ptr_7329d052)arg1 session:(shared_ptr_598bf325)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

