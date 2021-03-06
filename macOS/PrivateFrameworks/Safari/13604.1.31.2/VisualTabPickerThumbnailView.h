//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/VisualTabPickerShadowTileView.h>

@class NSLayoutConstraint, NSTextField, NSView, VisualTabPickerButton, VisualTabPickerMuteButton;
@protocol VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate;

__attribute__((visibility("hidden")))
@interface VisualTabPickerThumbnailView : VisualTabPickerShadowTileView
{
    NSTextField *_titleTextField;
    NSView *_thumbnailView;
    VisualTabPickerButton *_closeButton;
    VisualTabPickerMuteButton *_muteButton;
    NSLayoutConstraint *_muteButtonWidthConstraint;
    NSLayoutConstraint *_muteButtonHeightConstraint;
    BOOL _closeButtonVisible;
    BOOL _visibleToUser;
    BOOL _muteButtonVisible;
    int _muteButtonState;
    id <VisualTabPickerThumbnailDataSource> _dataSource;
    id <VisualTabPickerThumbnailDelegate> _delegate;
}

@property(nonatomic) int muteButtonState; // @synthesize muteButtonState=_muteButtonState;
@property(nonatomic, getter=isMuteButtonVisible) BOOL muteButtonVisible; // @synthesize muteButtonVisible=_muteButtonVisible;
@property(nonatomic) BOOL visibleToUser; // @synthesize visibleToUser=_visibleToUser;
@property(nonatomic, getter=isCloseButtonVisible) BOOL closeButtonVisible; // @synthesize closeButtonVisible=_closeButtonVisible;
@property(nonatomic) __weak id <VisualTabPickerThumbnailDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VisualTabPickerThumbnailDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)_muteButtonPressed:(id)arg1;
- (void)_createMuteButtonIfNecessary;
- (void)_closeButtonPressed:(id)arg1;
- (void)reloadData;
- (id)_createTitleTextField;
- (void)_setUpSubviews;
- (void)_setUpShadows;
- (void)_selectThumbnail;
- (void)updateMuteButtonStateAndVisibility;
- (void)startTitleOpacityAnimation:(long long)arg1;
- (void)_getTitleOpacityAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)magnifyWithEvent:(id)arg1;
- (void)resetScaleFactor;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

