//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MASPreferencesViewController-Protocol.h"

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface MCGeneralPreferencesController : NSViewController <MASPreferencesViewController>
{
}

@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *identifier;
@property float cursorScale; // @dynamic cursorScale;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL hasResizableHeight;
@property(readonly, nonatomic) BOOL hasResizableWidth;

@end

