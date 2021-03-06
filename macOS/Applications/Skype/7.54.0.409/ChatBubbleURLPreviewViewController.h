//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "ChatMessageItemSupplementaryURLPreviewViewController-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class ChatAnimatingBubbleView, GlyphButton, NSColor, NSFont, NSImageView, NSMenu, NSString, NSTextField, NSURL, QLPreviewPanel, SKMediaDocument, SKMediaDocumentDownloadTask, _TtC5Skype26ChatTextSelectionTextField;

@interface ChatBubbleURLPreviewViewController : NSViewController <ChatMessageItemSupplementaryURLPreviewViewController, NSMenuDelegate>
{
    QLPreviewPanel *_previewPanel;
    BOOL _observingMediaDocument;
    BOOL _observingSelf;
    BOOL _imAuthor;
    BOOL _showArrow;
    BOOL _animateViews;
    BOOL _subItemMode;
    _TtC5Skype26ChatTextSelectionTextField *_previewSourceField;
    SKMediaDocument *_mediaDocument;
    id _delegate;
    NSViewController *_previewController;
    GlyphButton *_quickLookButton;
    NSTextField *_mediaDocumentTitleField;
    NSTextField *_mediaDocumentDescriptionField;
    NSImageView *_faviconImageView;
    SKMediaDocumentDownloadTask *_thumbnailDownloadTask;
    SKMediaDocumentDownloadTask *_faviconDownloadTask;
    SKMediaDocumentDownloadTask *_userPicDownloadTask;
}

+ (id)keyPathsForValuesAffectingHideOverlayMetainformation;
+ (id)keyPathsForValuesAffectingBubbleTooltip;
+ (id)keyPathsForValuesAffectingHideQuickLookButton;
+ (id)keyPathsForValuesAffectingProtectionStyle;
+ (id)accessibilityDescriptionForMediaDocument:(id)arg1;
+ (id)keyPathsForValuesAffectingAccessibilityDescription;
+ (id)keyPathsForValuesAffectingActionMenu;
+ (id)keyPathsForValuesAffectingMainView;
+ (void)setTimeIntervalWhenPanelWasClosed:(double)arg1;
+ (double)timeIntervalWhenPanelWasClosed;
+ (struct CGSize)expectedSizeForMediaDocument:(id)arg1;
+ (struct CGSize)sizeForMediaDocumentThumbnail:(id)arg1;
+ (id)keyPathsForValuesAffectingPreviewItemURL;
@property(retain) SKMediaDocumentDownloadTask *userPicDownloadTask; // @synthesize userPicDownloadTask=_userPicDownloadTask;
@property(retain) SKMediaDocumentDownloadTask *faviconDownloadTask; // @synthesize faviconDownloadTask=_faviconDownloadTask;
@property(retain) SKMediaDocumentDownloadTask *thumbnailDownloadTask; // @synthesize thumbnailDownloadTask=_thumbnailDownloadTask;
@property(nonatomic) NSImageView *faviconImageView; // @synthesize faviconImageView=_faviconImageView;
@property(nonatomic) NSTextField *mediaDocumentDescriptionField; // @synthesize mediaDocumentDescriptionField=_mediaDocumentDescriptionField;
@property(nonatomic) NSTextField *mediaDocumentTitleField; // @synthesize mediaDocumentTitleField=_mediaDocumentTitleField;
@property(nonatomic) GlyphButton *quickLookButton; // @synthesize quickLookButton=_quickLookButton;
@property(nonatomic) NSViewController *previewController; // @synthesize previewController=_previewController;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL subItemMode; // @synthesize subItemMode=_subItemMode;
@property(nonatomic) BOOL animateViews; // @synthesize animateViews=_animateViews;
@property(nonatomic) BOOL showArrow; // @synthesize showArrow=_showArrow;
@property(nonatomic) BOOL imAuthor; // @synthesize imAuthor=_imAuthor;
@property(retain, nonatomic) SKMediaDocument *mediaDocument; // @synthesize mediaDocument=_mediaDocument;
@property(nonatomic) _TtC5Skype26ChatTextSelectionTextField *previewSourceField; // @synthesize previewSourceField=_previewSourceField;
- (void).cxx_destruct;
- (void)openUserPic:(id)arg1;
- (void)openFavicon:(id)arg1;
- (void)openThumbnail:(id)arg1;
- (void)inspect:(id)arg1;
- (void)quoteMessageAction:(id)arg1;
- (void)copyLinkAction:(id)arg1;
- (void)quickLookAction:(id)arg1;
- (void)openLinkAction:(id)arg1;
@property(readonly, nonatomic) BOOL hideOverlayMetainformation;
@property(readonly, nonatomic) NSString *bubbleTooltip;
@property(readonly, nonatomic) BOOL hideQuickLookButton;
@property(readonly, nonatomic) unsigned long long protectionColor;
@property(readonly, nonatomic) unsigned long long protectionStyle;
@property(readonly, nonatomic) NSColor *previewSourceForegroundColor;
@property(readonly, nonatomic) NSFont *previewSourceFont;
@property(readonly, nonatomic) NSColor *imageDescriptionForegroundColor;
@property(readonly, nonatomic) NSFont *imageDescriptionFont;
@property(readonly, nonatomic) NSColor *imageTitleForegroundColor;
@property(readonly, nonatomic) NSFont *imageTitleFont;
@property(readonly, nonatomic) NSString *accessibilityDescription;
@property(readonly, nonatomic) NSMenu *actionMenu;
@property(readonly, nonatomic) ChatAnimatingBubbleView *mainView;
- (id)selectableTextFields;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)cleanMediaDocumentTasks;
- (void)prepareMediaDocumentTasks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleWatermarkChanged;
- (void)handleAccessibilityChanged;
- (void)handleLayoutChanged:(id)arg1 keyPath:(id)arg2;
- (void)handleMediaStatusChanged:(unsigned long long)arg1 profile:(id)arg2;
- (void)handleArrowAndBackground;
- (void)handleNextResponderChanged;
- (void)handleErrorChanged;
- (void)handleDocumentStatusChanged;
- (void)teardownBindings;
- (void)setupBindings;
- (void)stopObservingSelf;
- (void)startObservingSelf;
- (void)removeMediaDocumentObservers;
- (void)addMediaDocumentObservers;
- (void)standardPreview;
- (void)updateLayout;
- (void)viewFrameDidChange:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;
- (id)init;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
@property(readonly) NSURL *previewItemURL;
- (void)closeQuickLookPanel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

