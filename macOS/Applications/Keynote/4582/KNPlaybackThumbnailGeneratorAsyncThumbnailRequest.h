//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNSlideNode;

@interface KNPlaybackThumbnailGeneratorAsyncThumbnailRequest : NSObject
{
    KNSlideNode *_slideNode;
    unsigned long long _eventIndex;
    CDUnknownBlockType _completionHandler;
    struct CGSize _thumbnailSize;
}

@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(readonly, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1 slideNode:(id)arg2 eventIndex:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

