//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LunaKit/LKViewModule.h>

@class LKButton, LKTextField, NSMutableSet;

@interface PEImportControlsModule : LKViewModule
{
    LKButton *_closeWindowAfterImportCheckbox;
    LKButton *_stopImportButton;
    LKButton *_importButton;
    LKTextField *_statusText;
    BOOL _closeWindowAfterImport;
    BOOL _fileOrRADIsImporting;
    NSMutableSet *_importBackgroundTasks;
    BOOL _hasSidebarSelection;
    BOOL _closingImportWindow;
    double _stopImportButtonOffset;
}

+ (id)defaultModuleNibName;
@property BOOL closingImportWindow; // @synthesize closingImportWindow=_closingImportWindow;
@property double stopImportButtonOffset; // @synthesize stopImportButtonOffset=_stopImportButtonOffset;
@property BOOL hasSidebarSelection; // @synthesize hasSidebarSelection=_hasSidebarSelection;
@property BOOL fileOrRADIsImporting; // @synthesize fileOrRADIsImporting=_fileOrRADIsImporting;
- (id)importString;
- (id)importSelectedString;
- (id)importAllString;
- (void)hideImportButton:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)taskQueueDidCompleteTask:(id)arg1;
- (void)taskQueueDidCompleteTaskMainThread:(id)arg1;
- (void)taskQueueDidStartTask:(id)arg1;
- (void)taskQueueDidStartTaskMainThread:(id)arg1;
- (void)stopImport:(id)arg1;
- (void)importDidBegin:(id)arg1;
- (void)importWindowDone:(id)arg1;
- (void)importClips:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)createCameraArchive:(id)arg1;
- (BOOL)wantsHeaderBar;
- (struct CGSize)viewMinSize;
- (struct CGSize)viewMaxSize;
- (void)dealloc;
- (id)init;

@end

