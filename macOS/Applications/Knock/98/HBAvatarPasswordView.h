//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class HBAvatarView, NSImageView, NSSecureTextField, NSString;

@interface HBAvatarPasswordView : NSView
{
    BOOL _disabled;
    NSString *_accountName;
    NSSecureTextField *_passwordField;
    NSImageView *_passwordArrow;
    HBAvatarView *_avatarView;
}

+ (id)disabledTextColor;
+ (id)disabledStrokeColor;
@property(nonatomic) HBAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) NSImageView *passwordArrow; // @synthesize passwordArrow=_passwordArrow;
@property(nonatomic) NSSecureTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (void)drawRect:(struct CGRect)arg1;
- (void)editingDidEndOrBegin:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

