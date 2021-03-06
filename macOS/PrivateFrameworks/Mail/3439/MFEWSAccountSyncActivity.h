//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MailCore/MCAggregateActivity.h>

#import <Mail/MFEWSMailboxDataCache-Protocol.h>

@class MFEWSAccount, MFEWSBackgroundBodyFetchTask, MFEWSFolderHierarchyReconcileTask, MFEWSRetrievePersistedFolderDataTask, NSMutableDictionary, NSObject, NSString;
@protocol MFEWSMailboxDataCache, OS_dispatch_queue;

@interface MFEWSAccountSyncActivity : MCAggregateActivity <MFEWSMailboxDataCache>
{
    NSMutableDictionary *_mailboxSyncTasksByMailboxURLString;
    BOOL _userInitiated;
    id <MFEWSMailboxDataCache> _mailboxDataCache;
    MFEWSFolderHierarchyReconcileTask *_folderHierarchyReconcileTask;
    MFEWSRetrievePersistedFolderDataTask *_retrievePersistedFolderDataTask;
    MFEWSBackgroundBodyFetchTask *_backgroundBodyFetchTask;
    NSObject<OS_dispatch_queue> *_queue;
    MFEWSAccount *_account;
}

@property(readonly, nonatomic) __weak MFEWSAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MFEWSBackgroundBodyFetchTask *backgroundBodyFetchTask; // @synthesize backgroundBodyFetchTask=_backgroundBodyFetchTask;
@property(retain, nonatomic) MFEWSRetrievePersistedFolderDataTask *retrievePersistedFolderDataTask; // @synthesize retrievePersistedFolderDataTask=_retrievePersistedFolderDataTask;
@property(retain, nonatomic) MFEWSFolderHierarchyReconcileTask *folderHierarchyReconcileTask; // @synthesize folderHierarchyReconcileTask=_folderHierarchyReconcileTask;
@property(nonatomic) __weak id <MFEWSMailboxDataCache> mailboxDataCache; // @synthesize mailboxDataCache=_mailboxDataCache;
- (void).cxx_destruct;
- (void)_setUserInitiated:(BOOL)arg1;
- (BOOL)_currentlySynchronizingMailboxContents;
- (void)dataNotFoundForURL:(id)arg1;
- (void)updateCachedFolderID:(id)arg1 andSyncState:(id)arg2 forMailboxURL:(id)arg3;
- (id)cachedSyncStateForMailboxURL:(id)arg1;
- (id)cachedFolderIDForMailboxURL:(id)arg1;
- (void)childActivityFinished:(id)arg1;
- (void)recalculatePriorityForMailboxURLString:(id)arg1;
- (void)addMailboxesToReconcile:(id)arg1;
- (void)reconcileFolderHierarchyWithSyncState:(id)arg1;
- (id)syncTasksForMailboxURLString:(id)arg1;
@property(nonatomic) BOOL userInitiated;
@property(readonly, nonatomic) BOOL currentlySynchronizingMailboxContents;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

