//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiInserter.h>

@class LiClientConnection;

@interface LiClientInserter : LiInserter
{
    LiClientConnection *_connection;
}

@property __weak LiClientConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)insertProperties:(id)arg1 forModelId:(unsigned long long)arg2 forClient:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTable:(id)arg1 connection:(id)arg2;

@end

