//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSUWidthLimitedQueue;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface TMAImageSwatchGridViewToken : NSObject
{
    TSUWidthLimitedQueue *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSMutableArray *mResultBlocks;
    NSObject<OS_dispatch_semaphore> *mLock;
}

- (void)finalizeImages;
- (void)setImage:(struct CGImage *)arg1 forLayer:(id)arg2 swatch:(id)arg3;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

