//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "NSWindowDelegate-Protocol.h"
#import "TCoalescingNodeObserverProtocol-Protocol.h"

@class NSString;

@interface IInfoWindowControllerBase : TScriptableWindowController <NSWindowDelegate, TCoalescingNodeObserverProtocol>
{
    struct TFENodeVector _infoNodes;
    struct TNSRef<TSliceContainerView *, void> _sliceContainer;
    struct TNSRef<TLayoutBinder *, void> _sliceContainerLayoutBinder;
    struct TNSRef<NSArray<TInfoWindowViewController *>*, void> _infoViewControllers;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> _nodeObserver;
    unsigned int _infoNodesNotificationOptions;
    struct TNSRef<NSEnumerator *, void> _expansionEnumerator;
    _Bool _allExpanded;
    struct TNotificationCenterObserver _viewControllerFinishedExpandingObserver;
}

+ (id)sliceClassNamesForInfoNodes:(const struct TFENodeVector *)arg1;
+ (double)preferredWindowContentWidth;
+ (struct CGSize)defaultWindowContentSize;
+ (unsigned long long)styleMask;
+ (id)controller;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)setAllSlicesExpanded:(_Bool)arg1;
- (void)viewControllerDidFinishAnimating:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodeMDAttributeChanged:(const struct TFENode *)arg2 attributes:(id)arg3 isDisplayAttributes:(_Bool)arg4;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 aliasesTargetChanged:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesGoingAway:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesDeleted:(const struct TCoalescedNodesAddedMap *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesChanged:(const struct TCoalescedNodesChangedMap *)arg2;
- (void)positionWindow;
- (void)layoutSlices;
- (void)configureSlicesForInfoNodes:(const struct TFENodeVector *)arg1;
- (unsigned int)notificationOptionsForInfoNodes:(const struct TFENodeVector *)arg1;
- (void)setInfoNodes:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)infoNodes;
- (id)infoViewControllers;
- (void)setContentView;
- (id)windowIcon;
- (id)windowTitle;
- (struct TFENode)fetchWindowProxyNode;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)initCommon;
- (id)infoWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

