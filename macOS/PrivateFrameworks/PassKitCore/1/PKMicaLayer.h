//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <PassKitCore/PKMicaResizableView-Protocol.h>

@class NSString;

@interface PKMicaLayer : CALayer <PKMicaResizableView>
{
    CALayer *_rootLayer;
}

@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void).cxx_destruct;
- (struct CGSize)boundsSizeToMatchPointScale:(double)arg1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (void)layoutSublayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

