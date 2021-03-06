//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSWPRulerMarkerAccessibility_super.h"

@class NSString, TSWPMacRulerViewAccessibility, TSWPRulerMarkerControllerAccessibility;

@interface TSWPRulerMarkerAccessibility : __TSWPRulerMarkerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
@property(readonly, nonatomic) int _tsaxType;
@property(readonly, nonatomic) double tsaxValue;
@property(readonly, nonatomic) NSString *tsaxValueWithUnits;
@property(readonly, nonatomic) NSString *tsaxLabel;
@property(readonly, nonatomic) BOOL tsaxIsTabStopMarker;
@property(readonly, nonatomic) BOOL tsaxIsStaticRulerMarker;
@property(readonly, nonatomic) int tsaxType;
@property(readonly, nonatomic) NSString *tsaxLeader;
@property(readonly, nonatomic) double tsaxModelValue;
@property(nonatomic, setter=tsaxSetParentRulerMarkerController:) TSWPRulerMarkerControllerAccessibility *tsaxParentRulerMarkerController;
- (long long)_tsaxCalculateEquivalentNumberOfTicksForNewModelValue:(double)arg1;
- (id)_tsaxAccessibilityRulerMarkerType;
- (struct CGRect)_tsaxMarkerFrame;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)dealloc;
- (BOOL)accessibilityNotifiesWhenDestroyed;
@property(nonatomic, setter=tsaxSetParentRulerView:) TSWPMacRulerViewAccessibility *tsaxParentRulerView;

@end

