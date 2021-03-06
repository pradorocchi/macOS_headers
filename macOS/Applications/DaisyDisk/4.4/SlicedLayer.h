//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CALayerDelegate-Protocol.h"

@class CALayer, NSString;
@protocol SlicedLayerDelegate;

@interface SlicedLayer : NSObject <CALayerDelegate>
{
    CALayer *_rootLayer;
    CALayer *_leftLayer;
    CALayer *_middleLayer;
    CALayer *_rightLayer;
    BOOL _didDrawLeft;
    BOOL _didDrawMiddle;
    BOOL _didDrawRight;
    BOOL _isWidthFixed;
    double _leftWidth;
    double _rightWidth;
    id <SlicedLayerDelegate> _delegate;
}

@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) id <SlicedLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayIfNeeded;
- (void)performLayout;
@property(nonatomic) struct CGSize frameSize;
@property(nonatomic) struct CGPoint frameOrigin;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setWidthFixed:(BOOL)arg1 leftWidth:(double)arg2 rightWidth:(double)arg3;
- (void)disposePartLayers;
- (void)removeFromSuperlayer;
- (void)addToSuperlayer:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

