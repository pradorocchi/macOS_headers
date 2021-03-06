//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSDMacAnnotationPopoverControllerAccessibility_super.h"

@class NSButton, NSPopover, NSString, NSTextField, NSTextView, TSDInteractiveCanvasControllerAccessibility;

@interface TSDMacAnnotationPopoverControllerAccessibility : __TSDMacAnnotationPopoverControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)_tsaxAnnotationButtonDescriptionForDirection:(unsigned long long)arg1;
- (void)_tsaxApplySharedAccessibilityInfo;
- (void)_tsaxApplyAccessibilityInfoForDrawableComment;
- (void)_tsaxApplyAccessibilityInfoForTextChange;
- (void)_tsaxApplyAccessibilityInfoForTextComment;
- (void)_tsaxApplyAccessibilityInfo;
@property(readonly, nonatomic) NSString *_tsaxHighlightedText;
@property(readonly, nonatomic) NSString *_tsaxAnnotationContainerDescription;
@property(readonly, nonatomic) NSString *_tsaxAnnotationDate;
@property(readonly, nonatomic) NSString *_tsaxAnnotationAuthorName;
@property(readonly, nonatomic) unsigned long long _tsaxAnnotationType;
@property(readonly, nonatomic) NSPopover *_tsaxPopover;
- (void)tsaxLoadAccessibilityInformation;
- (void)p_fixFirstResponder;
- (void)p_updatePopoverFields;
- (void)previousAnnotation:(id)arg1;
- (void)nextAnnotation:(id)arg1;
- (void)popoverWillShow:(id)arg1;
@property(readonly, nonatomic) NSTextView *tsaxCommentTextView;
@property(readonly, nonatomic) NSTextField *tsaxChangeTrackingStringField;
@property(readonly, nonatomic) NSTextField *tsaxAnnotationDateField;
@property(readonly, nonatomic) NSTextField *tsaxAnnotationAuthorField;
@property(readonly, nonatomic) NSButton *tsaxAnnotationPreviousButton;
@property(readonly, nonatomic) NSButton *tsaxAnnotationNextButton;
@property(readonly, nonatomic) NSButton *tsaxChangeTrackingRejectButton;
@property(readonly, nonatomic) NSButton *tsaxChangeTrackingAcceptButton;
@property(readonly, nonatomic) BOOL tsaxIsCommentPopover;
@property(readonly, nonatomic) id tsaxAnnotation;
@property(readonly, nonatomic) TSDInteractiveCanvasControllerAccessibility *tsaxICC;
@property(nonatomic, setter=_tsaxSetObjectForFirstResponder:) id _tsaxObjectForFirstResponder;

@end

