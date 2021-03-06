//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocumentController.h>

@class NSData, NSMenu, NSPopUpButton, NSTimer, NSView, NSWindow, StickiesService;

@interface NoteController : NSDocumentController
{
    NSView *mExportAccessoryView;
    NSPopUpButton *mExportFormatPopUp;
    NSMenu *mColorMenu;
    NSTimer *mSaveTimer;
    StickiesService *mStickyService;
    NSData *_databaseForArrangeUndo;
    NSWindow *mLastFrontWindow;
    BOOL mIsDirty;
    struct CGPoint mNextCascadePoint;
}

- (void)setNextCascadePoint:(struct CGPoint)arg1;
- (struct CGPoint)nextCascadePoint;
- (void)setSaveTimer:(id)arg1;
- (void)set_databaseForArrangeUndo:(id)arg1;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)setIsDirty:(BOOL)arg1;
- (BOOL)isDirty;
- (id)makeNewDocumentWithPasteboard:(id)arg1;
- (void)changeExportFormat:(id)arg1;
- (id)exportFormatPopUp;
- (id)exportAccessoryView;
- (void)importText:(id)arg1;
- (void)closeWindow:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)saveAllDocumentsMenuAction:(id)arg1;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)arrange:(id)arg1;
- (void)undoArrange:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)frontWindow;
- (void)windowDidBecomeKey:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)makeUntitledDocumentOfType:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)populateColorMenuSwatches;
- (id)_openDocumentWithDocument:(id)arg1;
- (BOOL)_openDatabaseAtPath:(id)arg1;
- (BOOL)_unarchiveStickies;

@end

