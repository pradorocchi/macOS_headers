//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class TPDocumentRoot;

@interface TPMoveSectionCommand : TSKCommand
{
    unsigned long long _startIndex;
    unsigned long long _targetIndex;
    unsigned long long _sectionPageCount;
    struct TSWPStorageTransaction *_storageTransaction;
}

- (void)setSelectionForSectionIndex:(unsigned long long)arg1;
- (void)redo;
- (void)undo;
- (id)p_firstSectionNotInheritingPreviousHeaderFooterBeforeSectionAtIndex:(unsigned long long)arg1;
- (void)p_updateHeaderFooterForSectionAtIndex:(unsigned long long)arg1;
- (void)commit;
- (void)restoreZOrderWithArray:(id)arg1;
- (id)collectZOrder;
- (void)p_deleteSectionAtSectionIndex:(unsigned long long)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)p_insertSection:(id)arg1 storage:(id)arg2 atSectionIndex:(unsigned long long)arg3 undoTransaction:(struct TSWPStorageTransaction *)arg4;
- (BOOL)process;
- (id)actionString;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
@property(readonly) TPDocumentRoot *documentRoot;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1 moveSectionIndex:(unsigned long long)arg2 toSectionIndex:(unsigned long long)arg3;

@end

