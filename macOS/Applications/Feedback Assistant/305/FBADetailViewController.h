//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class FBAAnnouncementViewController, FBALoadingDetailViewController, FBANoProjectViewController, FBANoResponseViewController, FBAResponseDetailViewController, FBASignedOutViewController, FBASurveyDetailViewController, NSLock;
@protocol FBAMailboxContent;

@interface FBADetailViewController : NSViewController
{
    FBANoResponseViewController *_noResponseViewController;
    FBANoProjectViewController *_noProjectViewController;
    FBASignedOutViewController *_signedOutViewController;
    FBALoadingDetailViewController *_loadingViewController;
    FBAResponseDetailViewController *_responseDetailViewController;
    FBAAnnouncementViewController *_announcementViewController;
    FBASurveyDetailViewController *_surveyViewController;
    NSViewController *_currentViewController;
    NSLock *_loadingEntityLock;
    id <FBAMailboxContent> _loadingEntity;
}

+ (id)keyPathsForValuesAffectingRepresentedItem;
@property(retain) id <FBAMailboxContent> loadingEntity; // @synthesize loadingEntity=_loadingEntity;
@property(retain) NSLock *loadingEntityLock; // @synthesize loadingEntityLock=_loadingEntityLock;
@property __weak NSViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) FBASurveyDetailViewController *surveyViewController; // @synthesize surveyViewController=_surveyViewController;
@property(retain, nonatomic) FBAAnnouncementViewController *announcementViewController; // @synthesize announcementViewController=_announcementViewController;
@property(retain, nonatomic) FBAResponseDetailViewController *responseDetailViewController; // @synthesize responseDetailViewController=_responseDetailViewController;
@property(retain, nonatomic) FBALoadingDetailViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) FBASignedOutViewController *signedOutViewController; // @synthesize signedOutViewController=_signedOutViewController;
@property(retain, nonatomic) FBANoProjectViewController *noProjectViewController; // @synthesize noProjectViewController=_noProjectViewController;
@property(retain, nonatomic) FBANoResponseViewController *noResponseViewController; // @synthesize noResponseViewController=_noResponseViewController;
- (void).cxx_destruct;
- (void)didPresentDetailLoadErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)swapToViewController:(id)arg1;
- (void)showSignedOut;
- (void)showNoProjects;
- (void)showNoResponse;
- (void)showLoadingView;
- (void)showSurvey:(id)arg1;
- (void)showAnnouncement:(id)arg1;
- (void)showResponse:(id)arg1;
- (void)updateDetailView;
- (void)promptForPendingContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasPendingContent;
@property(retain, nonatomic) id <FBAMailboxContent> representedItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

