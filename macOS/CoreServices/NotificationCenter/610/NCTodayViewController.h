//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NCNotificationCenterTabProtocol-Protocol.h"
#import "NCRemotePlugInManagerDelegate-Protocol.h"
#import "NCTodayHeaderDelegate-Protocol.h"
#import "NCTodayItemViewControllerDelegate-Protocol.h"
#import "NCTodayListControllerDelegate-Protocol.h"
#import "NCTodayListControllerTarget-Protocol.h"
#import "NCWidgetPrefServerInterface-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NCDuetController, NCRemotePlugInManager, NCTodayConfigurationViewController, NCTodayItem, NCTodayListController, NCTodaySummaryItem, NSArray, NSDate, NSDateComponentsFormatter, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSXPCListener;
@protocol OS_dispatch_source;

@interface NCTodayViewController : NSViewController <NCWidgetPrefServerInterface, NCTodayHeaderDelegate, NCTodayListControllerDelegate, NCRemotePlugInManagerDelegate, NCTodayItemViewControllerDelegate, NSXPCListenerDelegate, NCTodayListControllerTarget, NCNotificationCenterTabProtocol>
{
    double _width;
    NSMutableSet *_availableTodayItems;
    NSMutableArray *_tableCache;
    NSArray *_defaultOrder;
    NSMutableArray *_firstItems;
    NSMutableSet *_dynamicItems;
    NSMutableArray *_lastItems;
    NSMutableArray *_sortedIdentifiers;
    NSMutableSet *_identifiersWithoutContent;
    NCRemotePlugInManager *_pluginManager;
    NCDuetController *_duetController;
    NCTodaySummaryItem *_todaySummary;
    NCTodaySummaryItem *_tomorrowSummary;
    NCTodayItem *_thirdPartyDisclosure;
    NSString *_todayItemFirstResponder;
    NCTodayItem *_mouseItem;
    double _scrollToTimeout;
    NCTodayItem *_scrollToItem;
    double _accessoryHeight;
    NCTodayConfigurationViewController *_configurationController;
    NSMutableDictionary *_todayItemsByIdentifier;
    NSMutableDictionary *_enabledTodayIdentifiers;
    NSObject<OS_dispatch_source> *_preferenceWritingSource;
    NSObject<OS_dispatch_source> *_delayedDisableTimer;
    NSObject<OS_dispatch_source> *_scroll_timer;
    _Bool _processedInitialPlugins;
    _Bool _updateComingFromPreferenceConnection;
    _Bool _ignorePrefSync;
    _Bool _isVisible;
    _Bool _showDebugSummary;
    _Bool _debugReset;
    _Bool _debugFirstResponder;
    NSDate *_updateDate;
    NSDate *_lastOpenDate;
    NSDate *_lastDuetUpdate;
    unsigned long long _updatesToday;
    unsigned long long _opensToday;
    NSDateComponentsFormatter *_debugSummaryFormatter;
    int _timeNotifier;
    NSXPCListener *_widgetContentListener;
    NSMutableDictionary *_snippetPlugins;
    NSMutableSet *_waitingSnippets;
    _Bool _showDNDonNextOpen;
    NCTodayListController *_stackController;
}

@property(readonly, nonatomic) NCTodayListController *stackController; // @synthesize stackController=_stackController;
@property(nonatomic) _Bool showDNDonNextOpen; // @synthesize showDNDonNextOpen=_showDNDonNextOpen;
- (void).cxx_destruct;
- (void)prefsWidgetReorderItem:(id)arg1 afterItem:(id)arg2;
- (void)prefsWidgetUpdateState:(id)arg1 enabled:(_Bool)arg2;
- (void)prefsWidgetRequestItems:(CDUnknownBlockType)arg1;
- (id)_prefItemForTodayItem:(id)arg1;
- (id)todayListControllerTargetController:(id)arg1;
- (id)todayListControllerTarget:(id)arg1;
- (id)todayListController:(id)arg1 controllerForDropOfItem:(id)arg2 fromList:(id)arg3;
- (void)todayListController:(id)arg1 sourceDropCompleted:(id)arg2;
- (void)todayListController:(id)arg1 dropOfControllerCancelled:(id)arg2;
- (void)todayListController:(id)arg1 destinationDropCompleted:(id)arg2 afterController:(id)arg3;
- (void)todayListController:(id)arg1 controllerForDropOfItem:(id)arg2 fromList:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)todayListControllerTodayItemForController:(id)arg1;
- (void)todayListController:(id)arg1 didMoveController:(id)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)todayListController:(id)arg1 canDragController:(id)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)todayListController:(id)arg1 canDragController:(id)arg2 fromHeader:(_Bool)arg3;
- (void)todayHeaderEditPressed:(id)arg1;
- (void)todayHeaderDeletePressed:(id)arg1;
- (void)todayItemViewControllerAccessibilityPressedEdit:(id)arg1;
- (void)todayItemViewControllerIsNotLive:(id)arg1;
- (void)todayItemViewControllerIsLive:(id)arg1;
- (void)todayItemViewController:(id)arg1 sizeChangedForceUpdate:(_Bool)arg2;
- (void)todayItemViewController:(id)arg1 hasContentChanged:(_Bool)arg2;
- (void)todayItemViewController:(id)arg1 widgetModeChanged:(long long)arg2;
- (void)remotePlugInManager:(id)arg1 plugin:(id)arg2 electionChangedTo:(long long)arg3;
- (void)remotePlugInManager:(id)arg1 pluginReplaced:(id)arg2 withPlugin:(id)arg3;
- (void)remotePlugInManager:(id)arg1 pluginsRemoved:(id)arg2;
- (void)remotePlugInManager:(id)arg1 pluginsAdded:(id)arg2;
- (void)widgetHasContent:(_Bool)arg1 withIdentifier:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notificationCenterTabFirstResponderChangedFrom:(id)arg1 to:(id)arg2;
- (void)notificationCenterTabWasHidden;
- (void)notificationCenterTabWillBeHidden;
- (void)notificationCenterTabWillBeShown;
- (void)mouseMovedInWindow:(struct CGPoint)arg1;
- (void)mouseMoved;
- (void)_presentationFocus:(id)arg1;
- (void)_updateEditButtonStatus;
- (void)_changeWidgetHasContent:(_Bool)arg1 forIdentifier:(id)arg2;
- (void)_setupWidgetContentListener;
- (void)_changeSortOfIdentifier:(id)arg1 afterIdentifier:(id)arg2;
- (void)_updateDebugSummary;
- (void)_periodicUpdate:(_Bool)arg1 items:(id)arg2;
- (void)_significantTimeChange;
- (void)_createTodayItems:(id)arg1 initialSort:(id)arg2 withPrefs:(id)arg3;
- (void)_setDefaultEnabledState:(id)arg1 withPrefs:(id)arg2;
- (id)_createRemoteItemForPlugin:(id)arg1;
- (void)_setupItemControllers:(id)arg1;
- (void)_loadItemItems:(id)arg1;
- (void)_setupNewTodayViewItems:(id)arg1;
- (void)_setupInitialTodayView:(id)arg1;
- (void)_tearDownTodayItem:(id)arg1;
- (Class)_viewControllerClassForRemoteView:(id)arg1;
- (void)_updateCrashReporterInfo;
- (void)_syncPrefsNow;
- (void)_syncPrefs;
- (void)syncPrefs;
- (unsigned long long)_remoteItemInsertionIndex;
- (unsigned long long)_remoteItemDeletionIndex;
- (void)_enumeratorItemControllers:(CDUnknownBlockType)arg1;
- (void)tableViewScrolled:(id)arg1;
- (id)todayItemViewControllerWithIdentifier:(id)arg1;
- (_Bool)bundleid_is_today_view:(id)arg1;
- (void)insertTodayItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeTodayItem:(id)arg1;
- (void)addTodayItem:(id)arg1;
- (void)destorySnippet:(id)arg1 forPlugin:(id)arg2;
- (void)addSnippet:(id)arg1 pluginIdentifier:(id)arg2 title:(id)arg3 imagePath:(id)arg4 showWhenLoaded:(_Bool)arg5 ready:(CDUnknownBlockType)arg6;
- (void)disableItem:(id)arg1;
- (void)dndChanged:(id)arg1;
- (void)showAccessoriesIfNecessary;
- (void)_disableItem:(id)arg1 resetSort:(_Bool)arg2 addConfiguration:(_Bool)arg3;
- (void)_scrollItemInView:(id)arg1;
- (void)enableItem:(id)arg1 keepSorted:(_Bool)arg2 scrollToItem:(_Bool)arg3;
- (BOOL)isInConfigurationMode;
- (void)endConfigurationMode;
- (id)startConfigurationMode;
- (void)tomorrowSummaryChangedForApp:(id)arg1;
- (void)todaySummaryChangedForApp:(id)arg1;
- (void)refreshWeatherSummary;
- (void)debugDump:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithWidth:(double)arg1;
- (BOOL)shouldShowAccessoryView;
- (void)registerForNightShiftNotifications;
- (id)createSnippetItems:(id)arg1 prefs:(id)arg2 plugins:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

