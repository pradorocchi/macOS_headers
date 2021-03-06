//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IEBackupsSubviewViewController.h"

#import "IEMainVCProtocol-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"

@class MPFilteredItemManager, NSButton, NSMutableArray, NSOutlineView, NSString, NSTableView, SafariBookmark;

__attribute__((visibility("hidden")))
@interface BackupTabSafariVC : IEBackupsSubviewViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, NSTableViewDataSource, IEMainVCProtocol>
{
    SafariBookmark *rootBookmark;
    NSOutlineView *bookmarkOutline;
    NSTableView *historyTable;
    NSMutableArray *historyTableRows;
    MPFilteredItemManager *filterManager;
    NSMutableArray *historyEntries;
    NSButton *_btn_exportHistoryCSV;
    NSButton *_btn_exportHistoryTXT;
}

@property(nonatomic) __weak NSButton *btn_exportHistoryTXT; // @synthesize btn_exportHistoryTXT=_btn_exportHistoryTXT;
@property(nonatomic) __weak NSButton *btn_exportHistoryCSV; // @synthesize btn_exportHistoryCSV=_btn_exportHistoryCSV;
@property(retain, nonatomic) NSMutableArray *historyEntries; // @synthesize historyEntries;
@property(retain, nonatomic) SafariBookmark *rootBookmark; // @synthesize rootBookmark;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)btnExportHistory:(id)arg1;
- (void)btnExportToHTML:(id)arg1;
- (void)updateToSearchString:(id)arg1;
- (void)refreshDataForItem:(id)arg1;
- (void)loadDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadRootBookmarkWithPList:(id)arg1 db:(id)arg2;
- (id)loadBookmarkSQLiteDB:(id)arg1;
- (void)appendIOS8HistoryWithDB:(id)arg1;
- (id)loadHistoryWithPList:(id)arg1 db:(id)arg2;
- (void)awakeFromNib;
- (void)setup;
- (id)initWithParentTab:(id)arg1;
- (void)doubleClickedHistory:(id)arg1;
- (void)updateBookmarkTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

