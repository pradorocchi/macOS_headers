//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface _INVocabularyConnection : NSObject
{
    NSXPCConnection *_connection;
}

+ (void)load;
- (void).cxx_destruct;
- (void)dealloc;
- (id)settingsService;
- (id)_syncService;
- (id)_connection;
- (void)_clearConnection;

@end

