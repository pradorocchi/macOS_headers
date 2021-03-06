//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class ICMToolbarCenteringTextFieldInternal, NSString;
@protocol ICMToolbarCenteringTextFieldDelegate;

@interface ICMToolbarCenteringTextField : NSView
{
    id <ICMToolbarCenteringTextFieldDelegate> _delegate;
    NSString *_stringValue;
    ICMToolbarCenteringTextFieldInternal *_internalView;
}

@property(retain, nonatomic) ICMToolbarCenteringTextFieldInternal *internalView; // @synthesize internalView=_internalView;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) __weak id <ICMToolbarCenteringTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateToolbarItemViewerWorkaroundForAccessibility;
- (void)recenterIfNecessary;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)mouseDown:(id)arg1;
- (BOOL)wantsLayer;
- (void)setUpInternalView;
- (id)menuForEvent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layout;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

