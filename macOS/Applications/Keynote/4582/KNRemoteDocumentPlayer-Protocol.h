//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KNSlideTreeEditor;

@protocol KNRemoteDocumentPlayer <NSObject>
@property(readonly, nonatomic) BOOL isShowcasting;
@property(readonly, nonatomic) BOOL isOnlyAllowingPresenterDisplayCustomization;
@property(readonly, nonatomic) BOOL isPlayingRecordedShow;
@property(readonly, nonatomic) BOOL isRecordingNarration;
@property(readonly, nonatomic) KNSlideTreeEditor *slideTreeEditor;
- (void)playShowFromRemote;
@end

