//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol UAUserActivityDebugLoggingProtocol <NSObject>
- (void)doGetLoggingFileForClient:(NSString *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(NSFileHandle *, NSError *))arg3;
@end

