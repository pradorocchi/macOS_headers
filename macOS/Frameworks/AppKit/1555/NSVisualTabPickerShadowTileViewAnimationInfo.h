//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerShadowTileViewAnimationInfo : NSObject
{
    CALayer *_layerForAnimation;
    NSString *_animationKey;
}

@property(readonly, copy, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
@property(readonly, nonatomic) CALayer *layerForAnimation; // @synthesize layerForAnimation=_layerForAnimation;
- (void).cxx_destruct;
- (id)initWithLayerForAnimation:(id)arg1 animationKey:(id)arg2;

@end

