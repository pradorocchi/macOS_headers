//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAFollowupResponseViewController.h"

@class FBAFileCollectionView, FBATextViewWithPlaceHolder, NSButton, NSSet, NSView;

@interface FBABasicResponseViewController : FBAFollowupResponseViewController
{
    BOOL _observing;
    FBATextViewWithPlaceHolder *_messageText;
    NSView *_addFilesArea;
    NSButton *_addFilesButton;
    NSView *_addFilesView;
    FBAFileCollectionView *_fileCollectionView;
    NSSet *_stagedURLs;
}

@property(getter=isObserving) BOOL observing; // @synthesize observing=_observing;
@property(copy) NSSet *stagedURLs; // @synthesize stagedURLs=_stagedURLs;
@property(retain) FBAFileCollectionView *fileCollectionView; // @synthesize fileCollectionView=_fileCollectionView;
@property(retain) NSView *addFilesView; // @synthesize addFilesView=_addFilesView;
@property __weak NSButton *addFilesButton; // @synthesize addFilesButton=_addFilesButton;
@property __weak NSView *addFilesArea; // @synthesize addFilesArea=_addFilesArea;
@property(retain) FBATextViewWithPlaceHolder *messageText; // @synthesize messageText=_messageText;
- (void).cxx_destruct;
- (BOOL)hasPendingContent;
- (void)clearPendingContent;
- (void)configureForUse;
- (void)configureForSubmission;
- (id)submissionJSON;
- (void)submit:(id)arg1;
- (void)hideFilesArea;
- (void)showFilesArea;
- (void)addFilesClicked:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)updateSubmitButton;
- (void)dealloc;
- (void)loadView;
- (id)initWithFeedbackFollowup:(id)arg1;

@end

