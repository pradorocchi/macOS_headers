//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDDatabase, NSMutableDictionary, NSNumber, NSString, NSXPCConnection;

@interface ACDClient : NSObject
{
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    struct __CFBundle *_bundle;
    NSString *_bundleID;
    BOOL _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
}

+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;
@property(readonly) ACDDatabase *database; // @synthesize database=_database;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)longDebugDescription;
- (id)shortDebugDescription;
- (id)debugDescription;
- (id)description;
- (BOOL)hasEntitlement:(id)arg1;
@property(readonly) struct __CFBundle *bundle;
@property(readonly) NSString *adamOrDisplayID;
@property(readonly) NSString *name;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
@property(readonly) NSString *localizedAppName;
@property(retain) NSString *bundleID;
@property(readonly) NSNumber *pid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end

