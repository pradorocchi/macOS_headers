//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GLKit/MDLMeshBufferZone-Protocol.h>

@class GLKMeshBufferAllocator, NSMutableOrderedSet, NSString;
@protocol MDLMeshBufferAllocator;

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone>
{
    NSMutableOrderedSet *_buffers;
    BOOL _destroyInvoked;
    GLKMeshBufferAllocator *_allocator;
    unsigned int _glBufferName;
    unsigned long long _capacity;
}

@property(readonly, nonatomic) unsigned int glBufferName; // @synthesize glBufferName=_glBufferName;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) id <MDLMeshBufferAllocator> allocator; // @synthesize allocator=_allocator;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destroyBuffer:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

