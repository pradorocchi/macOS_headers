//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

#import "TSKChangeSourceObserver-Protocol.h"

@class NSPopUpButton, NSString, NSTextField, NSWindow;

@interface KNMacShowSizeInspectorPaneController : TMAInspectorPaneController <TSKChangeSourceObserver>
{
    NSWindow *mCurrentWindowForSheet;
    NSWindow *mCustomShowSizePanel;
    NSTextField *mWidthField;
    NSTextField *mHeightField;
    NSPopUpButton *mShowSizePopup;
}

+ (id)keyPathsForValuesAffectingSlideSizePopUpButtonToolTip;
@property NSPopUpButton *p_showSizePopup; // @synthesize p_showSizePopup=mShowSizePopup;
@property NSTextField *p_heightField; // @synthesize p_heightField=mHeightField;
@property NSTextField *p_widthField; // @synthesize p_widthField=mWidthField;
@property NSWindow *p_customShowSizePanel; // @synthesize p_customShowSizePanel=mCustomShowSizePanel;
- (id)p_customSizeStringForHeight:(double)arg1 width:(double)arg2;
- (id)p_windowForSheet;
- (id)p_macDocument;
- (id)p_documentRoot;
- (id)p_show;
- (id)p_showProxy;
- (void)p_showSizePopupWillClose:(id)arg1;
- (void)p_showSizePopupWillShow:(id)arg1;
- (void)p_setShowSizePopupToSize:(struct CGSize)arg1;
- (void)p_cancelCustomShowSize:(id)arg1;
- (void)p_setCustomShowSize:(id)arg1;
- (void)p_changeShowSize:(id)arg1;
- (id)slideSizePopUpButtonToolTip;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

