//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseConversationViewController.h"

@class ChatParticipantsViewController, ChatTitleBarViewController, ConversationBannerViewController, ConversationMSNPBannerViewController, NSTimer;

@interface ChatHeaderViewController : BaseConversationViewController
{
    BOOL _discloseParticipants;
    CDUnknownBlockType _currentChatStyle;
    ConversationMSNPBannerViewController *_topBannerViewController;
    ChatTitleBarViewController *_titleBarController;
    ChatParticipantsViewController *_participantsController;
    ConversationBannerViewController *_bottomBannerViewController;
    double _topBannerViewHeight;
    double _titleBarHeight;
    NSTimer *_connectionBannerTimer;
    unsigned long long _connectionBannerState;
}

+ (id)keyPathsForValuesAffectingShouldShowBottomBanner;
+ (id)keyPathsForValuesAffectingNeedsParticipantList;
+ (void)initialize;
@property unsigned long long connectionBannerState; // @synthesize connectionBannerState=_connectionBannerState;
@property(retain) NSTimer *connectionBannerTimer; // @synthesize connectionBannerTimer=_connectionBannerTimer;
@property double titleBarHeight; // @synthesize titleBarHeight=_titleBarHeight;
@property double topBannerViewHeight; // @synthesize topBannerViewHeight=_topBannerViewHeight;
@property(retain) ConversationBannerViewController *bottomBannerViewController; // @synthesize bottomBannerViewController=_bottomBannerViewController;
@property(retain) ChatParticipantsViewController *participantsController; // @synthesize participantsController=_participantsController;
@property(retain) ChatTitleBarViewController *titleBarController; // @synthesize titleBarController=_titleBarController;
@property(retain) ConversationMSNPBannerViewController *topBannerViewController; // @synthesize topBannerViewController=_topBannerViewController;
@property BOOL discloseParticipants; // @synthesize discloseParticipants=_discloseParticipants;
@property(copy) CDUnknownBlockType currentChatStyle; // @synthesize currentChatStyle=_currentChatStyle;
- (void).cxx_destruct;
@property(readonly) BOOL shouldShowBottomBanner;
@property(readonly) BOOL needsParticipantList;
- (void)hangUpCallAction:(id)arg1;
- (void)showProfileAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleShowBottomBannerChanged;
- (void)handleNeedsParticipantListChanged;
- (void)topBannerViewFrameChanged:(id)arg1;
- (void)titleBarFrameChanged:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (void)handleNeedsLayout:(id)arg1;
- (void)sizeViewToFit:(BOOL)arg1;
- (void)layoutSubviews;
@property(readonly) double minimumHeight;
@property(readonly, getter=isTopBannerVisible) BOOL topBannerVisible;
- (void)hideTopBanner;
- (void)showTopBanner;
- (void)updateConnectionBanner;
- (void)connectionErrorDidOccur:(id)arg1;
- (void)connectionBannerStateChanged:(id)arg1;
- (void)destroyTopBannerViewController;
- (void)createTopBannerViewController;
- (void)showBottomBannerViewController;
- (void)destroyBottomBannerViewController;
- (void)createBottomBannerViewController;
- (Class)bannerContentHandlerClassForContact:(id)arg1;
- (void)loadView;
- (void)destroyTitleBarController;
- (void)createTitleBarController;
- (void)destroyParticipantsController;
- (void)createParticipantsController;
- (void)teardownBindings;
- (void)dealloc;
- (id)init;

@end

