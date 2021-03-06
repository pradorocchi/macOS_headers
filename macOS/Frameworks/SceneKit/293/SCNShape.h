//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@class NSBezierPath;

@interface SCNShape : SCNGeometry
{
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    NSBezierPath *_chamferProfile;
    long long _primitiveType;
    long long _chamferMode;
    NSBezierPath *_path;
}

+ (BOOL)supportsSecureCoding;
+ (id)shapeWithPath:(id)arg1 extrusionDepth:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_customEncodingOfSCNShape:(id)arg1;
- (void)_customDecodingOfSCNShape:(id)arg1;
- (void)dealloc;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (CDStruct_d3ce6806)params;
@property(copy, nonatomic) NSBezierPath *chamferProfile;
@property(copy, nonatomic) NSBezierPath *path;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
@property(nonatomic) double extrusionDepth;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;
- (double)discretizedStraightLineMaxLength;
@property(nonatomic) double chamferRadius;
@property(nonatomic) long long chamferMode;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationGeometry;
- (id)initPresentationShapeGeometryWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg1;
- (id)initWithShapeGeometryRef:(struct __C3DShapeGeometry *)arg1;
- (id)init;
- (void)_syncObjCModel:(struct __C3DShapeGeometry *)arg1;

@end

