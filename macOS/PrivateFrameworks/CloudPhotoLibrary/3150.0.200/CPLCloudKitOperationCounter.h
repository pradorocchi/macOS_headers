//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _CPLCloudKitOperationSession;

@interface CPLCloudKitOperationCounter : NSObject
{
    NSMutableArray *_sessions;
    _CPLCloudKitOperationSession *_currentSession;
}

- (void).cxx_destruct;
- (id)status;
- (id)statusObject;
- (void)endOperation:(id)arg1;
- (void)beginOperation:(id)arg1;
- (id)init;

@end

