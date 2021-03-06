//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MPClusteringTreeNodeWrapper : NSObject
{
    BOOL _freeNodeOnDealloc;
    void *_node;
}

@property BOOL freeNodeOnDealloc; // @synthesize freeNodeOnDealloc=_freeNodeOnDealloc;
@property void *node; // @synthesize node=_node;
- (void)dealloc;
- (id)getLeafNodes;
- (int)leafsCount;
- (float)avgDistance;
- (float)distance;
- (id)right;
- (id)left;
- (id)descriptor;
- (int)nodeId;
- (id)initWithNode:(void *)arg1 freeNodeOnDealloc:(BOOL)arg2;

@end

