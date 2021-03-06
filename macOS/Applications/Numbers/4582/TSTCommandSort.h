//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "TSKInnerCommandsProvider-Protocol.h"

@class TSKCommand, TSKShuffleMapping, TSTTableSortOrder;

@interface TSTCommandSort : TSTTableCommand <GSSPAutoEncodable, TSKInnerCommandsProvider>
{
    vector_dadc1b26 _fromRowUIDList;
    vector_dadc1b26 _toRowUIDList;
    TSTTableSortOrder *_sortOrder;
    TSKCommand *_undoFormulaRewriteCommand;
}

@property(readonly, nonatomic) vector_dadc1b26 *toRowUIDList; // @synthesize toRowUIDList=_toRowUIDList;
@property(readonly, nonatomic) vector_dadc1b26 *fromRowUIDList; // @synthesize fromRowUIDList=_fromRowUIDList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)p_mappingFromRows:(vector_dadc1b26)arg1 toRows:(vector_dadc1b26)arg2;
- (void)p_generateIdListsFromMapping:(id)arg1 fromList:(vector_dadc1b26 *)arg2 toList:(vector_dadc1b26 *)arg3;
@property(readonly, nonatomic) TSKShuffleMapping *sortMapping; // @dynamic sortMapping;
- (BOOL)supportsCollaboration;
- (void)rollbackWork;
- (id)makeInverse;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (BOOL)isValidForCommit;
- (id)actionString;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 fromRowUIDList:(vector_dadc1b26)arg2 toRowUIDList:(vector_dadc1b26)arg3;
- (id)initWithTableInfo:(id)arg1 sortOrder:(id)arg2 region:(id)arg3;
- (void)populateGSSPCmdTableSort:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

