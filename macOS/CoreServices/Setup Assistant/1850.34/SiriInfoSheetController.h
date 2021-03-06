//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddyInfoSheetController.h"

#import "MBUIDelegate-Protocol.h"
#import "MBWebKitViewControllerDelegate-Protocol.h"

@class MMMBWebKitViewController, NSButton, NSString, NSView;

@interface SiriInfoSheetController : MacBuddyInfoSheetController <MBUIDelegate, MBWebKitViewControllerDelegate>
{
    id _delegate;
    BOOL _didFinishLoadingCalled;
    NSView *contentView;
    NSButton *aboutPrivacyButton;
    MMMBWebKitViewController *webViewVC;
    MMMBWebKitViewController *privacyWebViewVC;
    BOOL _showingPrivacyInfo;
}

@property BOOL showingPrivacyInfo; // @synthesize showingPrivacyInfo=_showingPrivacyInfo;
@property(readonly) BOOL didLoad; // @synthesize didLoad=_didFinishLoadingCalled;
- (void).cxx_destruct;
- (void)mbWebkitViewControllerDidDismiss:(id)arg1 reason:(id)arg2;
- (void)mbWebkitViewControllerDidFail:(id)arg1 error:(id)arg2;
- (void)mbWebkitViewControllerDidSucceed:(id)arg1;
- (void)mbWebkitViewControllerDidCancel:(id)arg1;
- (void)mbWebkitViewControllerDidFinishLoading:(id)arg1;
- (void)mbWebkitViewSaveFile:(id)arg1 content:(id)arg2;
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetWindowMessage:(id)arg1;
- (void)mbWebkitViewSetWindowTitle:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)siriAboutPrivacyClicked:(id)arg1;
- (void)siriOKClicked:(id)arg1;
- (void)windowDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

