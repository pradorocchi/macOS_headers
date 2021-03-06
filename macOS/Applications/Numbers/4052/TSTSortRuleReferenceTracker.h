//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCEReferenceTrackerDelegate-Protocol.h"

@class NSMutableSet, NSString, TSCEReferenceTracker, TSTTableInfo;

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate>
{
    TSTTableInfo *mTableInfo;
    NSMutableSet *mReferences;
    TSCEReferenceTracker *mReferenceTracker;
}

@property(nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (id)initFromArchive:(const struct SortRuleReferenceTrackerArchive *)arg1 unarchiver:(id)arg2;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive *)arg1 archiver:(id)arg2;
- (id)commandForUpdatingWithSpec:(id)arg1 formulas:(const vector_b129da7b *)arg2;
- (void)referencedCellWasModified:(id)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(struct __CFUUID *)arg2;
- (id)cellRangeWasInserted:(CDStruct_fc93c73e)arg1;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (BOOL)shouldRewriteOnTranspose;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnSort;
- (void)setOwnerID:(struct __CFUUID *)arg1;
- (struct __CFUUID *)ownerID;
- (void)updateForSortRules:(id)arg1;
- (id)p_ruleReferenceForTrackedReference:(id)arg1;
- (unsigned char)p_columnForTrackedReference:(id)arg1;
- (struct TSCECReference)p_cReferenceForColumnIndex:(unsigned char)arg1;
- (void)unregisterFromCalculationEngine;
- (void)registerWithCalculationEngine:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

