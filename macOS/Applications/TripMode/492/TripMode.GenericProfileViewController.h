//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSDate, NSPopUpButton, NSSlider, NSTextField, _TtC8TripMode7Profile;

@interface TripMode.GenericProfileViewController : NSViewController
{
    // Error parsing type: , name: profile
    // Error parsing type: , name: delegate
    // Error parsing type: , name: oldResetDate
    // Error parsing type: , name: resetDescription
    // Error parsing type: , name: warningSliderCell
    // Error parsing type: , name: limitMultiplier
    // Error parsing type: , name: limitTextField
    // Error parsing type: , name: multiplier
    // Error parsing type: , name: profileResetDate
    // Error parsing type: , name: profileResetType
}

+ (id)keyPathsForValuesAffectingResettable;
+ (id)keyPathsForValuesAffectingTrafficLimitValues;
+ (id)keyPathsForValuesAffectingTrafficLimitWarningBytes;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) double trafficLimitBytes;
@property(nonatomic, readonly) double trafficLimitWarningBytes;
@property(nonatomic) double trafficLimitValue;
@property(nonatomic, readonly) BOOL resettable;
- (void)resetButtonClicked:(id)arg1;
- (void)multiplierChanged:(id)arg1;
@property(nonatomic) short profileResetType; // @synthesize profileResetType;
@property(nonatomic, retain) NSDate *profileResetDate; // @synthesize profileResetDate;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSArray *multiplier; // @synthesize multiplier;
@property(nonatomic) __weak NSTextField *limitTextField; // @synthesize limitTextField;
@property(nonatomic) __weak NSPopUpButton *limitMultiplier; // @synthesize limitMultiplier;
@property(nonatomic) __weak NSSlider *warningSliderCell; // @synthesize warningSliderCell;
@property(nonatomic) __weak NSTextField *resetDescription; // @synthesize resetDescription;
@property(nonatomic, retain) _TtC8TripMode7Profile *profile; // @synthesize profile;

@end

