//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AOSUI/MMWebKitViewControllerDelegate-Protocol.h>
#import <AOSUI/iCloudWebViewDelegate-Protocol.h>

@class CastlePlugin, MMInfoCapacityBarView, MMWebKitViewController, MM_Account, NSArray, NSButton, NSDictionary, NSMutableDictionary, NSString, NSTableView, NSTextField;

@interface IACastleServicesView : NSView <MMWebKitViewControllerDelegate, iCloudWebViewDelegate>
{
    MM_Account *_mmAccount;
    CastlePlugin *_plugin;
    NSTextField *_nameField;
    NSTextField *_appleIDField;
    NSTableView *_servicesTable;
    NSButton *_detailsButton;
    NSTextField *_storageLabel;
    MMInfoCapacityBarView *_storageBar;
    NSButton *_storageButton;
    MMWebKitViewController *_webKitViewController;
    NSString *_storageFormat;
    NSTextField *_notVerifiedText;
    NSTextField *_checkEmailText;
    NSTextField *_lockedTitle;
    NSTextField *_lockedText;
    NSButton *_buttonDefault;
    NSButton *_buttonAlternate;
    NSButton *_buttonDefaultWithAlternate;
    NSTextField *_reauthTitle;
    NSTextField *_reauthText;
    NSTextField *_secondaryAccountTitle;
    NSTextField *_secondaryAccountDescription;
    NSMutableDictionary *_rowViews;
    NSArray *_groupRowArray;
    BOOL _enabled;
    NSDictionary *_groupRowProperties;
}

+ (id)loadFromNib:(unsigned long long)arg1;
@property(retain, nonatomic) NSDictionary *groupRowProperties; // @synthesize groupRowProperties=_groupRowProperties;
@property(retain, nonatomic) NSArray *groupRowArray; // @synthesize groupRowArray=_groupRowArray;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property CastlePlugin *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic, setter=setMMAccount:) MM_Account *mmAccount; // @synthesize mmAccount=_mmAccount;
- (void)showSignInError:(id)arg1;
- (void)help:(id)arg1;
- (void)lockedButtonPressed:(id)arg1;
- (void)resendEmailPressed:(id)arg1;
- (void)reAuthPressed:(id)arg1;
- (void)_closeWebViewWindow;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (void)mtLogStorageActivity:(id)arg1;
- (void)storagePressed:(id)arg1;
- (void)serviceEnabledMainThread:(id)arg1;
- (void)updateServiceMainThread:(id)arg1;
- (void)updateServiceRow:(id)arg1;
- (void)updateAccountMainThread:(id)arg1;
- (_Bool)hasGroupRow;
- (void)refreshQuota;
- (void)displayQuota:(id)arg1;
- (void)updateServicesTable;
- (id)idenfierForTableView:(id)arg1 andRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)finalize;
- (void)serviceEnabled:(id)arg1;
- (void)updateService:(id)arg1;
- (void)updateAccount:(id)arg1;
- (void)dealloc;
- (void)unregisterNotifications;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

