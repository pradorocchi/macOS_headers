//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSServiceViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSServiceViewControllerForTouchBarItem : NSServiceViewController
{
    NSString *_touchBarItemIdentifier;
    unsigned int _observingBridge:1;
}

+ (id)controllerWithTouchBarItem:(id)arg1 andAppearance:(id)arg2;
+ (void)touchBarItemViewAbsentFromViewHierarchy:(id)arg1;
+ (BOOL)hideOverlayTouchBar:(id)arg1;
+ (void)showOverlayTouchBar:(id)arg1 withOptions:(id)arg2;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (id)viewServiceTouchBarControllerIdentifier:(id)arg1;
+ (id)describeTouchBars:(id)arg1;
+ (id)touchBarsForProviders:(id)arg1;
+ (id)touchBarProvidersForWindow:(id)arg1 includingWindowItself:(BOOL)arg2;
+ (void)touchBarProviders:(id)arg1 inWindow:(id)arg2 includingWindowItself:(BOOL)arg3;
+ (void)initialize;
- (void)informRemoteViewOfNewSize:(struct CGSize)arg1;
- (unsigned long long)awakeFromRemoteView;
- (void)invalidate;
- (void)loadView;
- (void)prepareItemsOfBar:(id)arg1;
- (id)initWithAppearance:(id)arg1;
- (BOOL)_isSecondary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeChangeToCompressionItemContainingItem:(id)arg1;
- (void)dealloc;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (void)_didAssociateWithHostWindow;

@end

