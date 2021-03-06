//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class AcceptedSiteDataSheetController, NSButton, NSLayoutConstraint, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface PrivacyPreferences : PreferencesModule
{
    NSButton *trackingPolicyCheckbox;
    AcceptedSiteDataSheetController *_siteDataEditor;
    NSButton *_helpButton;
    NSTextField *applePayLabelTextField;
    NSButton *applePayCapabilityDisclosureAllowedCheckbox;
    NSTextField *_applePaySubtextTextField;
    NSButton *_policyEnabledButton;
    NSButton *_blockStorageAlwaysButton;
    NSTextField *_locationPermissionTextField;
    NSButton *_alwaysDenyPermissionLocationButton;
    NSButton *_promptForPermissionEvery24HoursPerSiteLocationButton;
    NSButton *_promptForPermissionOncePerSiteLocationButton;
    NSButton *_manageWebsiteDataButton;
    NSLayoutConstraint *_applePayLabelTrailingAlignmentConstraint;
    NSLayoutConstraint *_applePayLabelTrailingHorizontalSpacingConstraint;
    NSLayoutConstraint *_applePayLabelBottomAlignmentConstraint;
    NSLayoutConstraint *_applePayCheckboxTopVerticalSpacingConstraint;
    NSLayoutConstraint *_applePayCheckboxBottomVerticalSpacingConstraint;
    NSLayoutConstraint *_applePayCheckboxTrailingHorizontalSpacingConstraint;
    NSLayoutConstraint *_applePayCheckboxLeadingAlignmentConstraint;
    NSLayoutConstraint *_applePaySubtextLeadingAlignmentConstraint;
    NSLayoutConstraint *_applePaySubtextBottomVerticalSpacingConstraint;
    NSLayoutConstraint *_applePaySubtextTrailingHorizontalSpacingConstraint;
    NSView *_mainContentView;
}

@property(nonatomic) __weak NSView *mainContentView; // @synthesize mainContentView=_mainContentView;
@property(retain, nonatomic) NSLayoutConstraint *applePaySubtextTrailingHorizontalSpacingConstraint; // @synthesize applePaySubtextTrailingHorizontalSpacingConstraint=_applePaySubtextTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePaySubtextBottomVerticalSpacingConstraint; // @synthesize applePaySubtextBottomVerticalSpacingConstraint=_applePaySubtextBottomVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePaySubtextLeadingAlignmentConstraint; // @synthesize applePaySubtextLeadingAlignmentConstraint=_applePaySubtextLeadingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxLeadingAlignmentConstraint; // @synthesize applePayCheckboxLeadingAlignmentConstraint=_applePayCheckboxLeadingAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxTrailingHorizontalSpacingConstraint; // @synthesize applePayCheckboxTrailingHorizontalSpacingConstraint=_applePayCheckboxTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxBottomVerticalSpacingConstraint; // @synthesize applePayCheckboxBottomVerticalSpacingConstraint=_applePayCheckboxBottomVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayCheckboxTopVerticalSpacingConstraint; // @synthesize applePayCheckboxTopVerticalSpacingConstraint=_applePayCheckboxTopVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayLabelBottomAlignmentConstraint; // @synthesize applePayLabelBottomAlignmentConstraint=_applePayLabelBottomAlignmentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayLabelTrailingHorizontalSpacingConstraint; // @synthesize applePayLabelTrailingHorizontalSpacingConstraint=_applePayLabelTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *applePayLabelTrailingAlignmentConstraint; // @synthesize applePayLabelTrailingAlignmentConstraint=_applePayLabelTrailingAlignmentConstraint;
@property __weak NSButton *manageWebsiteDataButton; // @synthesize manageWebsiteDataButton=_manageWebsiteDataButton;
@property(nonatomic) __weak NSButton *promptForPermissionOncePerSiteLocationButton; // @synthesize promptForPermissionOncePerSiteLocationButton=_promptForPermissionOncePerSiteLocationButton;
@property(nonatomic) __weak NSButton *promptForPermissionEvery24HoursPerSiteLocationButton; // @synthesize promptForPermissionEvery24HoursPerSiteLocationButton=_promptForPermissionEvery24HoursPerSiteLocationButton;
@property(nonatomic) __weak NSButton *alwaysDenyPermissionLocationButton; // @synthesize alwaysDenyPermissionLocationButton=_alwaysDenyPermissionLocationButton;
@property(nonatomic) __weak NSTextField *locationPermissionTextField; // @synthesize locationPermissionTextField=_locationPermissionTextField;
@property(nonatomic) __weak NSButton *blockStorageAlwaysButton; // @synthesize blockStorageAlwaysButton=_blockStorageAlwaysButton;
@property(nonatomic) __weak NSButton *policyEnabledButton; // @synthesize policyEnabledButton=_policyEnabledButton;
- (void).cxx_destruct;
- (void)_updateApplePayCapabilityDisclosureAllowedCheckbox;
- (void)_updateTrackingPolicyCheckbox;
- (void)_updateStoragePolicyButtons;
- (id)_blockStoragePolicyButtons;
@property(readonly, nonatomic) int currentBlockStoragePolicy;
- (void)takeApplePayCapabilityDisclosureAllowedFrom:(id)arg1;
- (void)takeTrackingPolicyFrom:(id)arg1;
- (void)takeLocationPolicyFrom:(id)arg1;
- (void)takeStoragePolicyFrom:(id)arg1;
- (void)showWebsiteDataDetails:(id)arg1;
- (id)helpAnchor;
- (void)_setApplePaySubtextString;
- (id)_applePayPreferencesConstraints;
- (void)_removeApplePayPreferenceIfNecessary;
- (void)_addApplePayPreferenceIfNecessary;
- (void)_updateApplePayPreferenceVisibility;
- (void)_applePayAvailabilityMayHaveChanged:(id)arg1;
- (void)willBeDisplayed;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)awakeFromNib;
- (id)preferencesNibName;
- (id)imageForPreferenceNamed:(id)arg1;

@end

