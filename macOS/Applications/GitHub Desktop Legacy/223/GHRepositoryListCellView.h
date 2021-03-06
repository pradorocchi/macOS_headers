//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GHRepositoryListItemViewModel, NSLayoutConstraint, NSProgressIndicator;

@interface GHRepositoryListCellView : NSTableCellView
{
    NSProgressIndicator *_spinnerView;
    NSLayoutConstraint *_labelTrailingSpaceConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *labelTrailingSpaceConstraint; // @synthesize labelTrailingSpaceConstraint=_labelTrailingSpaceConstraint;
@property(nonatomic) __weak NSProgressIndicator *spinnerView; // @synthesize spinnerView=_spinnerView;
- (void).cxx_destruct;
- (void)awakeFromNib;

// Remaining properties
@property(retain) GHRepositoryListItemViewModel *objectValue; // @dynamic objectValue;

@end

