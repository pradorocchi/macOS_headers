//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class NSArray, NSOutlineView, NSString;
@protocol NPUNowPlayingClientsControllerDelegate;

@interface NPUNowPlayingClientsController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    BOOL _reloadingNowPlayingClients;
    unsigned int _userID;
    id <NPUNowPlayingClientsControllerDelegate> _delegate;
    NSArray *_clients;
    NSOutlineView *_applicationListOutlineView;
}

@property __weak NSOutlineView *applicationListOutlineView; // @synthesize applicationListOutlineView=_applicationListOutlineView;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(nonatomic) __weak id <NPUNowPlayingClientsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setNeedsNowPlayingClientsReload;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

