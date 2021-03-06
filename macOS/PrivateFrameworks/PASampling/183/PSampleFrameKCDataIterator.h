//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PASampling/PASampleFrameIterator-Protocol.h>

@class NSString, PASampleKernelFrame, PASampleUserFrame;

@interface PSampleFrameKCDataIterator : NSObject <PASampleFrameIterator>
{
    PASampleKernelFrame *_kernel;
    PASampleUserFrame *_user;
    BOOL _hideKernelFrames;
    BOOL _hideUserFrames;
    const struct stack_snapshot_frame64 *user64Frames;
    int numUser64Frames;
    const unsigned long long *user64LRs;
    int numUser64LRs;
    const struct stack_snapshot_frame32 *user32Frames;
    int numUser32Frames;
    const unsigned int *user32LRs;
    int numUser32LRs;
    const struct stack_snapshot_frame64 *kernel64Frames;
    int numKernel64Frames;
    const unsigned long long *kernel64LRs;
    int numKernel64LRs;
    const struct stack_snapshot_frame32 *kernel32Frames;
    int numKernel32Frames;
    const unsigned int *kernel32LRs;
    int numKernel32LRs;
    unsigned long long continuation;
    BOOL isUserStackTruncated;
}

- (void).cxx_destruct;
- (BOOL)hasUserStack;
- (BOOL)hasStack;
- (void)clear;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (void)exposeAllFrames;
- (void)exposeKernelFramesOnly;
- (void)exposeUserFramesOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

