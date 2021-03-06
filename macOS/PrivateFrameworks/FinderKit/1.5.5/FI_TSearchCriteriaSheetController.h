//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FI_TTableViewController, FI_TTableViewDataSource;
@protocol TSearchCriteriaSheetDelegate;

__attribute__((visibility("hidden")))
@interface FI_TSearchCriteriaSheetController : NSWindowController
{
    FI_TTableViewController *_tableViewController;
    FI_TTableViewDataSource *_tableViewDataSource;
    id <TSearchCriteriaSheetDelegate> _delegate;
    struct TNSRef<NSWindow *, void> _parentWindow;
    struct TNSRef<NSArray *, void> _attributeNamesInMenu;
    _Bool _isBackupBrowserWindow;
}

@property id <TSearchCriteriaSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelButtonPressed:(id)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)showSheet:(void *)arg1;
- (void)windowDidLoad;
- (void)aboutToTearDown;
- (id)initWithParentWindow:(id)arg1 attributeNamesInMenu:(id)arg2 isBackupBrowserWindow:(_Bool)arg3;

@end

