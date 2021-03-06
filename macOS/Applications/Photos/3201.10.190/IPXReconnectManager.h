//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PFResourceAccessClient-Protocol.h"

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString, NSWindow, RDVersion;

@interface IPXReconnectManager : NSObject <PFResourceAccessClient>
{
    NSArray *_versions;
    NSWindow *_hostWindow;
    BOOL _isMissingBookmark;
    BOOL _isMissingVolume;
    CDUnknownBlockType _finishedBlock;
    NSError *_error;
    BOOL _showSkipButton;
    BOOL _libraryClosing;
    long long _currentProgressIndex;
    NSMutableSet *_connectedVersions;
    NSMutableSet *_notConnectedVersions;
    NSMutableSet *_connectedMasterIds;
    NSMutableSet *_skippedFolderPaths;
    CDUnknownBlockType _internalCompletionBlock;
    RDVersion *_currentVersion;
    NSString *_commonRootFolderPath;
    BOOL _allowSkipping;
    CDUnknownBlockType _reconnectProgress;
    NSDictionary *_reconnectionResults;
    NSMutableDictionary *_commonRootResults;
}

+ (id)sharedConnectedMasterSet;
+ (id)sharedCurrentReconnectSet;
+ (id)oneReconnectSerialQueue;
+ (id)reconnectManagerForVersions:(id)arg1 hostWindow:(id)arg2 finishedBlock:(CDUnknownBlockType)arg3;
+ (id)reconnectManagerForVersion:(id)arg1 hostWindow:(id)arg2 finishedBlock:(CDUnknownBlockType)arg3;
@property(retain) NSMutableDictionary *commonRootResults; // @synthesize commonRootResults=_commonRootResults;
@property(retain) NSDictionary *reconnectionResults; // @synthesize reconnectionResults=_reconnectionResults;
@property BOOL allowSkipping; // @synthesize allowSkipping=_allowSkipping;
@property(copy) CDUnknownBlockType reconnectProgress; // @synthesize reconnectProgress=_reconnectProgress;
- (void).cxx_destruct;
- (void)unitTestCheckVersionWithURL:(id)arg1;
- (BOOL)master:(id)arg1 appearsToMatchFileURL:(id)arg2;
- (BOOL)_reconnectMaster:(id)arg1 withURL:(id)arg2 volumeId:(long long)arg3;
- (void)attemptReconnectWithParentURL:(id)arg1;
- (id)urlForBaseURL:(id)arg1 andMaster:(id)arg2;
- (void)doFindFolder;
- (void)doTryAgain;
- (void)_beginReconnect;
- (void)beginReconnect;
- (void)_checkVersionForMissingMaster:(id)arg1 master:(id)arg2;
- (void)commonRootFolderForMaster:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didProcessVersion:(id)arg1 connected:(BOOL)arg2;
- (void)callFinishedBlock;
- (void)resourceWillShutdown:(struct NSObject *)arg1;
- (void)checkVersionsForMissingMaster;
- (id)initWithVersions:(id)arg1 hostWindow:(id)arg2 finishedBlock:(CDUnknownBlockType)arg3;
- (id)initWithVersion:(id)arg1 hostWindow:(id)arg2 finishedBlock:(CDUnknownBlockType)arg3;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

