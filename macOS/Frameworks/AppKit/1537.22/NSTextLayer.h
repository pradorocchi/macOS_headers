//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSBackingLayer.h>

#import <AppKit/CALinearMaskLayerDelegate-Protocol.h>

@class CALayer, CALinearMaskLayer, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSTextLayer : _NSBackingLayer <CALinearMaskLayerDelegate>
{
    CALinearMaskLayer *_primaryOverlay;
    struct CGColor *_primaryOverlayColor;
    CDUnknownBlockType _primaryOverlayRenderer;
    NSMutableArray *_primaryOverlayRenderers;
    CALayer *_colorLayer;
    NSMapTable *_layers;
    NSMapTable *_renderers;
    struct CGContext *_ctx;
    struct CGColorTransform *_colorTransform;
    struct CGDisplayList *_displayList;
    struct CGContext *_displayListContext;
    BOOL _wantsSubpixelAA;
    BOOL _allowsLinearMaskLayer;
    BOOL _needsFSBC;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inLinearMaskContext:(struct CALinearMaskContext *)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (void)_appkitViewBackingLayerUniqueMethod;
- (BOOL)NS_usesLinearMaskOverlay;
- (void)_NS_invalidateSuggestedContentsScale;
- (void)NS_didChangeDefaultContentsScale:(double)arg1;
- (void)display;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

