//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDAffineGeometry : NSObject <ICExportable, GQDNameMappable>
{
    struct CGSize mNaturalSize;
    struct CGSize mSize;
    BOOL mSizesLocked;
    BOOL mAspectRatioLocked;
    struct CGPoint mPosition;
    float mAngle;
    BOOL mHorizontalFlip;
    BOOL mVerticalFlip;
    float mShearXAngle;
    float mShearYAngle;
}

+ (struct CGRect)boundsOfTransformedRect:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
+ (void)transformRect:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2 upperLeft:(struct CGPoint *)arg3 lowerLeft:(struct CGPoint *)arg4 lowerRight:(struct CGPoint *)arg5 upperRight:(struct CGPoint *)arg6;
+ (const struct StateSpec *)stateForReading;
- (void)setAffineTransform:(struct CGAffineTransform)arg1;
- (void)p_setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transformHasVFlip:(BOOL)arg1 vFlip:(BOOL)arg2 hasHFlip:(BOOL)arg3 hFlip:(BOOL)arg4;
- (struct CGAffineTransform)affineTransform;
- (struct CGRect)naturalBounds;
- (struct CGPoint)nonrotatedPosition;
- (struct CGSize)sizeOfBoundingBox;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (float)shearYAngle;
- (float)shearXAngle;
- (BOOL)verticalFlip;
- (BOOL)horizontalFlip;
- (void)setAngle:(float)arg1;
- (float)angle;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (BOOL)aspectRatioLocked;
- (BOOL)sizesLocked;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setNaturalSize:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)setShearYAngle:(float)arg1;
- (void)setShearXAngle:(float)arg1;
- (void)setVerticalFlip:(BOOL)arg1;
- (void)setHorizontalFlip:(BOOL)arg1;
- (void)setAspectRatioLocked:(BOOL)arg1;
- (void)setSizesLocked:(BOOL)arg1;
- (id)initWithTSDInfoGeometry:(id)arg1 aspectRatioLocked:(BOOL)arg2;
- (id)initWithTSDInfoGeometry:(id)arg1 naturalSize:(struct CGSize)arg2 sizesLocked:(BOOL)arg3 aspectRatioLocked:(BOOL)arg4;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

