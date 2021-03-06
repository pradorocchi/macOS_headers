//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableDictionary, TSTMergeRegionMap, TSTTableRowColAdderAnimation, TSUImage;

@interface TSTTableRowColAdderDirectionObject : NSObject
{
    unsigned short insertionIndex;
    unsigned short lastVisibleIndex;
    unsigned short lastVisibleBodyIndex;
    unsigned short elementCount;
    unsigned short fixedElementCount;
    unsigned short index;
    unsigned long long maxElementCount;
    double percentKnobSlide;
    double finalPercentKnobSlide;
    double tableAlignedInset;
    double originalKnobPoint;
    double originalTabSize;
    double lowerBoundTabSize;
    double dynamicTabSize;
    double lastSeenDynamicTabSize;
    double knobTableGap;
    double offsetInsert;
    double offsetRemove;
    CALayer *layer;
    TSUImage *imageA;
    TSUImage *imageB;
    double sizeOfCurrentInsertElement;
    double fixedCoordinate;
    TSTTableRowColAdderAnimation *animation;
    CALayer *grayScreen;
    NSMutableDictionary *dynamicIndexToCellBorderMapping;
    NSMutableDictionary *dynamicIndexToCellBorderFooterMapping;
    TSTMergeRegionMap *mergeRangesToDuplicate;
    TSTMergeRegionMap *mergeRangesInOriginalFooter;
    struct _NSRange dynamicStrokesToSetRange;
    struct _NSRange dynamicStrokesToClearRange;
    struct _NSRange dynamicStrokesRange;
    struct CGRect insertionElementFrame;
    struct CGRect initialKnobFrame;
    struct CGRect scaledBounds;
    struct CGRect initialContentsRect;
    struct CGRect grayScreenBounds;
}

@property(retain, nonatomic) TSTMergeRegionMap *mergeRangesInOriginalFooter; // @synthesize mergeRangesInOriginalFooter;
@property(retain, nonatomic) TSTMergeRegionMap *mergeRangesToDuplicate; // @synthesize mergeRangesToDuplicate;
@property(retain, nonatomic) NSMutableDictionary *dynamicIndexToCellBorderFooterMapping; // @synthesize dynamicIndexToCellBorderFooterMapping;
@property(retain, nonatomic) NSMutableDictionary *dynamicIndexToCellBorderMapping; // @synthesize dynamicIndexToCellBorderMapping;
@property(nonatomic) struct _NSRange dynamicStrokesRange; // @synthesize dynamicStrokesRange;
@property(nonatomic) struct _NSRange dynamicStrokesToClearRange; // @synthesize dynamicStrokesToClearRange;
@property(nonatomic) struct _NSRange dynamicStrokesToSetRange; // @synthesize dynamicStrokesToSetRange;
@property(nonatomic) struct CGRect grayScreenBounds; // @synthesize grayScreenBounds;
@property(retain, nonatomic) CALayer *grayScreen; // @synthesize grayScreen;
@property(nonatomic) unsigned short index; // @synthesize index;
@property(retain, nonatomic) TSTTableRowColAdderAnimation *animation; // @synthesize animation;
@property(nonatomic) double fixedCoordinate; // @synthesize fixedCoordinate;
@property(nonatomic) double sizeOfCurrentInsertElement; // @synthesize sizeOfCurrentInsertElement;
@property(nonatomic) struct CGRect initialContentsRect; // @synthesize initialContentsRect;
@property(nonatomic) struct CGRect scaledBounds; // @synthesize scaledBounds;
@property(retain, nonatomic) TSUImage *imageB; // @synthesize imageB;
@property(retain, nonatomic) TSUImage *imageA; // @synthesize imageA;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer;
@property(nonatomic) double offsetRemove; // @synthesize offsetRemove;
@property(nonatomic) double offsetInsert; // @synthesize offsetInsert;
@property(nonatomic) struct CGRect initialKnobFrame; // @synthesize initialKnobFrame;
@property(nonatomic) struct CGRect insertionElementFrame; // @synthesize insertionElementFrame;
@property(nonatomic) double knobTableGap; // @synthesize knobTableGap;
@property(nonatomic) double lastSeenDynamicTabSize; // @synthesize lastSeenDynamicTabSize;
@property(nonatomic) double dynamicTabSize; // @synthesize dynamicTabSize;
@property(nonatomic) double lowerBoundTabSize; // @synthesize lowerBoundTabSize;
@property(nonatomic) double originalTabSize; // @synthesize originalTabSize;
@property(nonatomic) double originalKnobPoint; // @synthesize originalKnobPoint;
@property(nonatomic) double tableAlignedInset; // @synthesize tableAlignedInset;
@property(nonatomic) double finalPercentKnobSlide; // @synthesize finalPercentKnobSlide;
@property(nonatomic) double percentKnobSlide; // @synthesize percentKnobSlide;
@property(nonatomic) unsigned short fixedElementCount; // @synthesize fixedElementCount;
@property(nonatomic) unsigned long long maxElementCount; // @synthesize maxElementCount;
@property(nonatomic) unsigned short elementCount; // @synthesize elementCount;
@property(nonatomic) unsigned short lastVisibleBodyIndex; // @synthesize lastVisibleBodyIndex;
@property(nonatomic) unsigned short lastVisibleIndex; // @synthesize lastVisibleIndex;
@property(nonatomic) unsigned short insertionIndex; // @synthesize insertionIndex;
- (void)addDynamicStrokeIndexToClear:(unsigned long long)arg1;
- (void)addDynamicStrokeIndexToSet:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

