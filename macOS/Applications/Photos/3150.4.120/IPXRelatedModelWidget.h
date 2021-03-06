//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXEditorialWidget-Protocol.h"
#import "IPXRelatedModelCollectionControllerDelegate-Protocol.h"
#import "PXChangeObserver-Protocol.h"

@class IPXAssetTransitionItem, IPXDatabaseObjectsController, IPXEditorialModel, IPXEditorialProgressView, IPXRelatedModelCollectionController, NSString, NSView, PFDispatchQueue;
@protocol IPXEditorialWidgetDelegate;

@interface IPXRelatedModelWidget : NSObject <IPXRelatedModelCollectionControllerDelegate, PXChangeObserver, IPXEditorialWidget>
{
    BOOL _graphIsReady;
    BOOL _relatedInProgress;
    BOOL _relatedNotFound;
    IPXEditorialModel *_model;
    PFDispatchQueue *_workQueue;
    id <IPXEditorialWidgetDelegate> _widgetDelegate;
    IPXRelatedModelCollectionController *_relatedController;
    IPXEditorialProgressView *_progressView;
}

@property(readonly, nonatomic) IPXEditorialProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) IPXRelatedModelCollectionController *relatedController; // @synthesize relatedController=_relatedController;
@property(nonatomic) BOOL relatedNotFound; // @synthesize relatedNotFound=_relatedNotFound;
@property(nonatomic) BOOL relatedInProgress; // @synthesize relatedInProgress=_relatedInProgress;
@property(nonatomic) BOOL graphIsReady; // @synthesize graphIsReady=_graphIsReady;
@property(nonatomic) __weak id <IPXEditorialWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(readonly, nonatomic) PFDispatchQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) IPXEditorialModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)relatedModelCollectionControllerDidFinishLoading:(id)arg1;
- (void)relatedModelCollectionControllerDidLoadInitialData:(id)arg1;
- (id)debugMenuItemsForItemAtIndex:(long long)arg1;
- (void)openItemAtIndex:(long long)arg1 withEvent:(id)arg2 forEditing:(BOOL)arg3;
- (BOOL)shouldSelectItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) BOOL requiresBackgroundVersionQueries;
@property(readonly, nonatomic) unsigned long long layoutStyle;
@property(readonly, nonatomic) Class mediaSectionClass;
@property(readonly, nonatomic) IPXDatabaseObjectsController *objectsController;
- (void)loadContentData;
- (double)preferredContentHeightForWidth:(double)arg1;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) NSView *contentView;
- (void)userDidSelectDisclosureControl;
@property(readonly, nonatomic) NSString *localizedAccessibilityLabel;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)preheatContent;
- (void)presentDebugSheet:(id)arg1;
- (void)updateProgressStatus;
- (id)relatedEditorialModelAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasContentForCurrentInput;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double horizontalInset;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedCaptionToolTip;
@property(readonly, nonatomic) NSString *localizedDisclosureToolTip;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(readonly, nonatomic) BOOL showsSelectionIndicator;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL supportsLassoSelection;
@property(readonly, nonatomic) BOOL supportsVersionDuplication;
@property(readonly, nonatomic) IPXAssetTransitionItem *transitionItem;

@end

