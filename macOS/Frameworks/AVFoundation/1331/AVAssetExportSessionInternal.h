//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, NSArray;

@interface AVAssetExportSessionInternal : NSObject
{
    struct OpaqueFigAssetExportSession *figExportSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    CDUnknownBlockType handler;
}

@end

