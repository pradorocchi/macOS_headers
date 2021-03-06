//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRTextField.h>

@class NSArray, NSAttributedString, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRWebStitchedText : SCRTextField
{
    NSArray *_uiElements;
    NSMutableArray *_uiElementTextRanges;
    struct CGRect _bounds;
    NSString *__stitchedTextContent;
    NSAttributedString *__stitchedAttributedTextContent;
}

+ (id)stitchedTextForElement:(id)arg1 textChildUIElement:(id)arg2 index:(unsigned long long *)arg3;
+ (id)stitchedTextForElement:(id)arg1 textChildUIElement:(id)arg2;
@property(copy, nonatomic) NSAttributedString *_stitchedAttributedTextContent; // @synthesize _stitchedAttributedTextContent=__stitchedAttributedTextContent;
@property(copy, nonatomic) NSString *_stitchedTextContent; // @synthesize _stitchedTextContent=__stitchedTextContent;
- (BOOL)elementRepresentsUIElement:(id)arg1;
- (BOOL)shouldNavigate;
- (BOOL)shouldMap;
- (id)uiElementForObserving;
- (id)uiElement;
- (struct __AXTextMarker *)axTextMarkerRefForIndex:(unsigned long long)arg1;
- (struct CGRect)boundsForRange:(id)arg1;
- (id)firstNavigableUIElement;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveToNextElementWithEvent:(id)arg1 request:(id)arg2 movingForward:(BOOL)arg3;
- (unsigned long long)_indexOfUIElementAtPosition:(unsigned long long)arg1;
- (id)uiElements;
- (id)typeDescription;
- (unsigned long long)cachedNumberOfCharacters;
- (unsigned long long)numberOfCharacters;
- (id)attributedValueDescription;
- (id)valueDescription;
- (BOOL)valueHasOffscreenComponent:(id)arg1;
- (struct CGRect)bounds;
- (void)clearCachedValue;
- (id)value;
- (id)role;
- (BOOL)isValid;
- (id)statusDescriptionWithOptionsMask:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)_initializeStitchingData;
- (id)initWithUIElements:(id)arg1 parent:(id)arg2;

@end

