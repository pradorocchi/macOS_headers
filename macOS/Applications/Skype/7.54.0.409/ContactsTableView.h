//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "RollOverTableView.h"

@interface ContactsTableView : RollOverTableView
{
    struct CGPoint _contextMenuLocation;
}

@property(readonly, nonatomic) struct CGPoint contextMenuLocation; // @synthesize contextMenuLocation=_contextMenuLocation;
- (void)_moveSelectionHoverToRow:(long long)arg1;
- (void)_moveRollOverAwayFromSelection;
- (void)_moveRollOverToSelection;
- (void)_moveMouseHoverToRow:(long long)arg1;
- (id)menuForEvent:(id)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)cancelOperation:(id)arg1;

@end

