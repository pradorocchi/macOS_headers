//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDLayout.h"

#import "TSKChangeSourceObserver-Protocol.h"
#import "TSWPColumnMetrics-Protocol.h"
#import "TSWPLayoutParent-Protocol.h"

@class NSString, TSWPLayout, TSWPPadding;

@interface KNNoteLayout : TSDLayout <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics>
{
    struct CGSize mSizeOfScrollViewEnclosingCanvas;
    TSWPLayout *mContainedLayout;
    TSWPPadding *mPadding;
}

@property(readonly, nonatomic) TSWPLayout *containedLayout; // @synthesize containedLayout=mContainedLayout;
- (id)unscaledPositionsForCollaboratorHUDForSelectionPath:(id)arg1;
- (double)maxAutoGrowHeightForTextLayout:(id)arg1;
- (BOOL)textIsVertical;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) double textScaleFactor;
- (double)textScaleFactorForPrinting;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (id)p_adjustedPaddingForBodyWidth:(double)arg1;
@property(readonly, nonatomic) TSWPPadding *padding;
- (void)invalidatePadding;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange)arg2;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (id)childSearchTargets;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (BOOL)p_isForPrint;
- (id)layoutGeometryFromInfo;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (void)updateChildrenFromInfo;
- (void)createContainedLayoutForEditing;
- (double)p_enclosingScrollViewScrollerWidthForLayoutController:(id)arg1;
- (void)p_setSizeOfScrollViewEnclosingCanvasFromLayoutController:(id)arg1;
- (void)sizeOfScrollViewEnclosingCanvasDidChange;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)invalidateSize;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)children;
- (id)computeLayoutGeometry;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

