//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTTableInfo;

@interface TSTAdaptiveLayoutRelationship : NSObject
{
    TSTTableInfo *mTableInfo;
    struct TSUCellRect mCellRange;
    struct CGPoint mOffsetFromTable;
    struct CGAffineTransform mTransformToOrigin;
    BOOL mContained;
    BOOL mIntersects;
    int mDirection;
}

@property(readonly, nonatomic) int direction; // @synthesize direction=mDirection;
@property(nonatomic) BOOL intersects; // @synthesize intersects=mIntersects;
@property(nonatomic) BOOL contained; // @synthesize contained=mContained;
@property(readonly, nonatomic) struct CGAffineTransform transformToOrigin; // @synthesize transformToOrigin=mTransformToOrigin;
@property(nonatomic) struct CGPoint offsetFromTable; // @synthesize offsetFromTable=mOffsetFromTable;
@property(nonatomic) struct TSUCellRect cellRange; // @synthesize cellRange=mCellRange;
@property(readonly, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (id)description;
- (void)eliminate:(int)arg1;
- (id)initWithTableInfo:(id)arg1 cellRange:(struct TSUCellRect)arg2 offsetFromTable:(struct CGPoint)arg3 transformToOrigin:(struct CGAffineTransform)arg4 contained:(BOOL)arg5 intersects:(BOOL)arg6 direction:(int)arg7;

@end

