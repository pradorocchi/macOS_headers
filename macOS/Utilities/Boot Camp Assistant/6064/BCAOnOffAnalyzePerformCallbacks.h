//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMAsyncDelegate-Protocol.h"

@interface BCAOnOffAnalyzePerformCallbacks : NSObject <DMAsyncDelegate>
{
    int _hit_dmAsyncFinishedForDisk;
    int _hit_dmAsyncFinishedForDisk_Error;
    id _progress_callOutInst;
    int _progress_percentFrom;
    int _progress_percentTo;
}

- (void)dmAsyncFinishedForDisk:(struct __DADisk *)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4;
- (void)dmAsyncMessageForDisk:(struct __DADisk *)arg1 string:(id)arg2 dictionary:(id)arg3;
- (void)dmAsyncProgressForDisk:(struct __DADisk *)arg1 barberPole:(BOOL)arg2 percent:(float)arg3;
- (void)dmAsyncStartedForDisk:(struct __DADisk *)arg1;

@end

